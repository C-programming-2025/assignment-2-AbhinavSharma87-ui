// Write a C program that prompts the user for a positive integer and checks if it is a prime number using a while loop.
#include <stdio.h>

int main(){
    int n,a=0,i = 1;
    printf("Enter any number\n"); 
    scanf("%d",&n);
    while(i <= n)
    {
        
        if (n%i==0)
        {
            a++;
        }
        i++;
    }
    if (a==2)
    {
        printf("Prime");
    }
    else{
        printf("not prime");
    }
    
    
    return 0;
}