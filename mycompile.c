#include <stdio.h>
#include <stdlib.h>

int main(char args[]){
    char command[] = "";
    char * filename = NULL;
    char * extension = NULL;

    filename = strtok(args, ".");
    extension = strtok(args, ".");

    sprintf(command, "gcc -o %s %s.%s -lwiringPi", filename, filename, extension);

    system(command);

    return 0;
}
