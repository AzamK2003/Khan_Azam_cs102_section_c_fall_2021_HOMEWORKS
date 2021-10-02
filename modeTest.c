#include <stdio.h>

int main() {

//Finding the mean and defining variables 

float num[4];
int i;
float sum = 0;
for(i=0; i<5; i++){
    printf("Enter the number: \n");
    scanf("%f", &num[i]);
    printf("%f\n", num[i]);
    sum = sum+num[i];
}
//finding the mode 
int maxFrequency;
float maxValue;
int l,m;
    for(l=0;l<5;l++)
        {
        int frequency = 0;
        for(m=0;m<5;m++);
            {
            if(num[l]==num[m])
                {
                frequency++;
                }
            }
        if(frequency>maxFrequency)
            {
            maxFrequency = frequency;
            maxValue = num[l];
            }
        }
printf("The mode is: %f\n", maxValue);
}


