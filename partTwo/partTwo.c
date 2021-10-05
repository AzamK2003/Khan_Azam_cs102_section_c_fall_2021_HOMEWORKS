#include<stdio.h>
#include<string.h>

int main()
{
    char str[2][100],temp[100];
    int m,n;
    printf("Enter 3 strings: \n");
    for(m=0;m<3;m++)
        {
        scanf("%s",str[m]);
        }
    for(m=0;m<3;m++)
        {
        for(n=m+1;n<=3;n++)
            {
            if(strcmp(str[m],str[n])>0)
                {
                strcpy(temp,str[m]);
                strcpy(str[m],str[n]);
                strcpy(str[n],temp);
                }
            }
        }
    printf("The sorted order is: \n");
    for(m=0;m<3;m++)
        {
        printf("%s\n", str[m]);
        }
}
