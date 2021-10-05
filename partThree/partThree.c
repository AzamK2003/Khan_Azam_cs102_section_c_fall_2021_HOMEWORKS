#include <stdio.h>

int main() {

//Finding the mean 

float num[4];
int i;
float sum = 0;
for(i=0; i<5; ++i){
    printf("Enter the number: \n");
    scanf("%f", &num[i]);
    printf("%0.2f\n", num[i]);
    sum = sum+num[i];
}
float avg = sum/5;
printf("The mean is: %.2f\n", avg); 

//The code for sorting the array 
int hi=0 , j=0 , temp=0;

    for(hi=0 ; hi<5 ; hi++)
    {
        for(j=0 ; j<5-1 ; j++)
        {
            if(num[j]>num[j+1])
            {
                temp        = num[j];
                num[j]    = num[j+1];
                num[j+1]  = temp;
            }
        }
    }
printf("The median is %.0f\n", num[2]);

//The code for finding the mode

int mode=1, maxFrequency=0,l,m;

    for(l=0;l<5;++ l){
        int frequency =0;
        for(m=0;m<5;m++){
            if(num[l]==num[m]){
                frequency++;
            }
       }
        if(frequency>maxFrequency){
            maxFrequency = frequency;
            mode = num[l];
        }
    }
printf("The mode is: %d\n", mode);

}


