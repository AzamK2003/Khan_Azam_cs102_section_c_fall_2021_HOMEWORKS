#include <stdio.h>

int main(void){
    float length, height, perimeter;
    printf("Input a length: \n");
    scanf("%f", &length);
    printf("Input a height: \n");
    scanf("%f", &height);
    perimeter = (2*length)+(2*height);
    printf("The perimeter is: %.2f \n", perimeter);
}
