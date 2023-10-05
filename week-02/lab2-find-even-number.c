#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int numbs[50];
    int evens = 0;
    int found = 0;

    for (int i = 0; i < argc - 1; ++i){
        numbs[i] = atoi(argv[i+1]);
        if (numbs[i] % 2 == 0){
            printf("%d - %d\n", i, numbs[i]);
            ++evens;
            found = 1;
        }
    }

    if (!found)
    printf("Not found!\n");

    return(0);
}