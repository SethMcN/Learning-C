#include <stdio.h>
#include <string.h> 
#include "satellite.h"
#include <unistd.h>

// Compile and run 
// gcc image.c satellite.c -o satellite 
// ./satellite

int main()
{
    char command[20];
    int exit_flag = 0;

    while (!exit_flag)
    {
        printf("> ");
        scanf("%19s", command);

        if (strcmp(command, "exit") == 0) {
            printf("Exiting satellite interface... \n");
            exit_flag = 1;
            sleep(1);
        } 

        else if (strcmp(command, "status") == 0) {
            printf("---------------------\n");
            printf("|    State: IDLE    |\n");
            printf("| Temperature: 23%cC |\n", 248);
            printf("|   Battery: 100%%   |\n");
            printf("|  Orientation: 0%c  |\n", 248);
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