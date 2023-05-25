#include<stdio.h>
int main()
{
     int n,i,j;
     printf("Enter any number\n");// Prompt user to enter any number
     scanf("%d",&n);// read value for n from user
     i = 1;
     j = 1;
     while(i<=n)// Here we are printing 1 2 4 7 11 series with the use of while loop
     {
         printf("%d\n",j);
         j = j+i;
         i = i+1;
     }
     return 0;
}
