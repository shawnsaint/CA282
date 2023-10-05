#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int numbs[50];
    int odds = 0;

    for(int i = 1; i < argc; ++i){
        numbs[i-1] = atoi(argv[i]);
        if (numbs[i-1] % 2 != 0)
            ++odds;
    }

    printf("%d\n", odds);
    return(0);
}
