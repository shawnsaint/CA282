#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int length = atoi(argv[1]);
    
    for(int g = 0; g < length; ++g)
        printf("*");
    printf("\n");

    for(int i = 1; i < length - 1; ++i)
    {
        for(int g = 0; g < length; ++g)
        {
            if((g == 0) || (g == length - 1))
                printf("*");
            else
                printf(" ");
        }
    printf("\n");
}
for(int g = 0; g < length; ++g)
    printf("*");
printf("\n");
return(0);
}