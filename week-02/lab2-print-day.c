#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[]){
    int day_number = atoi(argv[1]);
    if (day_number ==1){
        printf("Sunday\n");}
    else if(day_number ==2){
        printf("Monday\n");}
    else if(day_number ==3){
        printf("Tuesday\n");}
    else if(day_number ==4){
        printf("Wednesday\n");}
    else if(day_number ==5){
        printf("Thursday\n");}
    else if(day_number ==6){
        printf("Friday\n");}
    else if(day_number ==7){
        printf("Saturday\n");}
    else {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }
    return(0);
}