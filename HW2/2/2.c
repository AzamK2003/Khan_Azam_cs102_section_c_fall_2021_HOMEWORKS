#include <stdio.h>

int main(){
    int iMin, hours, oMin; //iMin and oMin stands for input and output
    #define MINUTES 60
    printf("Enter a number of minutes: \n");
    scanf("%d", &iMin);
    hours = iMin/MINUTES;
    oMin = iMin%MINUTES;
    printf("There are %d", hours);
    printf(" hours and %d", oMin);
    printf(" minutes.\n"); 
}
