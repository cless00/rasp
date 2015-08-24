#include <stdio.h>
#include <stdlib.h>

int main(char args[]){
    char command[] = NULL;
    char * filename = NULL;
    char * extension = NULL;

    filename = strok(args, ".");
    extension = strok(args, ".");

    sprintf(command, "gcc -o %s %s.%s -lwiringPi", filename, filename, extension);

    system(command);

    return 0;
}
