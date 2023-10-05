#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char*argv[]){
    int radius = atoi(argv[1]);
    int height = atoi(argv[2]);
    float area = 0;

    if (argc < 2){
        printf("No input given!");
    }
    else if(argc < 3){
        printf("Two argumens needed!");
    }
    else if(radius > 0 && height > 0){
        area = (2*PI*radius*height) + (2*PI*(radius*radius));
        printf("%.2f\n", area);
    }
    else{
        printf("The radius or height cannot be negative!");
    }
    return(0);
}