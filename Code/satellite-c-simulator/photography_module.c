#include "satellite.h"  // main file
#include "ascii_art.h" // ascii art
#include <time.h> // for simulation delay
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


// currently:
// terminal → directly calls satellite_art()

// Ideally
// terminal → command → satellite module → camera subsystem →  transmission layer 


// Config variables
const int dev_mode = 0;
const int dev_mode_slow = 0;
const int connection_disconnect = 2000;
const int connection_disconnect_timeout = 5;
const int bit_corruption = 200;
const int minimal_data_transmission_delay = (10000 - 1000 + 1) + 1000;
const int character_data_transmission_delay = (40000 - 10000 + 1) + 10000;


static const char loading_arr[] = {'|','/','-','\\'};

typedef struct {
    
    const char **data;
    int lines;
} Image;

void disconnected(){
    time_t start = time(NULL);
    time_t end = time(NULL);   

    while (end - start < connection_disconnect_timeout)
    {
        for (int icon = 0; icon < sizeof(loading_arr) / sizeof(loading_arr[0]); icon++){
            putchar(loading_arr[icon]);
            fflush(stdout);
            usleep(100000);
            putchar('\b');
            end = time(NULL);
        }
    }
}

void clear_screen(){
    printf("\nPress Enter to continue...");

    int c;

    //Flush leftover characters 
    while ((c = getchar()) != '\n' && c != EOF);

    getchar();

    system("clear");
}

void satellite_art(void) {
    Image images[] = {
        { earth_arr, earth_arr_len },
        { saturn_arr, saturn_arr_len },
        { alien_arr, alien_arr_len },
        { moon_arr, moon_arr_len },
        { space_ship_arr, space_ship_arr_len }
    };
    
    int total = sizeof(images) / sizeof(images[0]);

    int img = rand() % total;
    // printf("Random number: %d\n", img);

    
    for (int line = 0; line < images[img].lines; line++) {

        // 1 for dev mode to see the addresses of the image struct, data pointer, and line pointer
        if (dev_mode)
        {
            printf("Image struct address: %p\n", (void *)&images[img]);
            printf("Image data pointer:   %p\n", (void *)images[img].data);
            printf("Line pointer:         %p\n", (void *)images[img].data[line]);

            // 1 to slow down the output
            if (dev_mode && dev_mode_slow){
                usleep(100000);
            }

        }else{
            const char *str = images[img].data[line];

            for (int chr = 0; str[chr] != '\0'; chr++){

                int delay = 0;
                
                // Connection disconnect
                if (rand() % connection_disconnect == 0){
                    disconnected();
                }

                // Bit corruption
                if(rand() % bit_corruption == 0){
                    putchar('#');
                }
            
                else{
                    if (str[chr] == ' '){
                            // connection delay simulation for " " / minimal data
                            delay = rand() % minimal_data_transmission_delay;
                            putchar(str[chr]);
                            fflush(stdout);
                            usleep(delay);
    
                    }else{
                        // connection delay simulation for characters
                        delay = rand() % character_data_transmission_delay;
    
                        putchar(str[chr]);
                        fflush(stdout);
                        usleep(delay);
                    }
                }
            }
        }
    }

    clear_screen();
}