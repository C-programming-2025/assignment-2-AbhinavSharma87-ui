// Write a C program that prompts the user for a positive integer and calculates the factorial of that number using a while loop.
#include <stdio.h>

int main(){
    int num,f=1,i=1;
    printf("Enter a positive number");
    scanf("%d",&num);
    while (i <= num)
    {
        f=f*i;
        i++;
    }
    printf("%d",f);
    
 return 0;
}