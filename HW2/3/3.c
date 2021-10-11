#include <stdio.h>

int main(){
    float fl;
    int integer;
    char character;
    printf("Enter a float: \n");
    scanf("%f", &fl);
    printf("Enter a integer: \n");
    scanf("%d", &integer);
    printf("Enter character: \n");
    scanf("%s", &character);

    printf("The float is %d\n", fl);
    printf("The integer is %f\n", integer);
    printf("The character is %d\n", character);
}
