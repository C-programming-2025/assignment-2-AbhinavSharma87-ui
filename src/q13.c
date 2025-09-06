// Write a C program that calculates the sum of all even numbers from 1 to 50 using a while loop.
#include <stdio.h>

int main(){
    int sum=0,i=1;
    while (i <= 50)
    {
        if (i%2==0)
        {
            sum=sum+i;
        }
        i++;
        
    }
    printf("%d",sum);
    return 0;
}