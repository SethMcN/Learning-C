#include <stdio.h>
#include "satellite.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

// Compile and run 
// gcc ascii_art.c photography_module.c satellite.c -o satellite 
// ./satellite

int main()
{
    char command[20];
    int exit_flag = 0;

    srand(time(NULL));

    time_t launch_time = time(NULL);
    int flight_seconds = 0;
    time_t now = 0;

    while (!exit_flag)
    {   
        now = time(NULL);
        flight_seconds = (int)(now - launch_time);
        printf("> ");
        scanf("%19s", command);

        if (strcmp(command, "exit") == 0) {
            printf("Exiting satellite interface... \n");
            exit_flag = 1;
            sleep(1);
        } 

    else if (strcmp(command, "status") == 0) {
        printf("---------------------\n");
        printf("|    State: IDLE                |\n");
        printf("| Temperature: 23%cC            |\n", 248);

        int hours = flight_seconds / 3600;
        int minutes = (flight_seconds % 3600) / 60;
        int seconds = flight_seconds % 60;

        printf("| Flight Time: T+%02d:%02d:%02d |\n",
            hours, minutes, seconds);

        printf("|  Orientation: 0%c             |\n", 248);
        printf("---------------------\n");
    }

        else if (strcmp(command, "capture") == 0) {
            satellite_art();
        }

        else{
            printf("Unknown command: %s\n", command);
        }
    }

    return 0;
}