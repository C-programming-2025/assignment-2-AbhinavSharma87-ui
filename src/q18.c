// Write a C program that prompts the user for a positive integer and prints the
// multiplication table for that number up to 10 using a while loop.
#include <stdio.h>

int main(){
    int num,i=1;
    printf("Enter a number\n"); 
    scanf("%d",&num); 
    do
    {
        printf("%d * %d = %d\n",num,i,num*i); 
        i++;
    } while (i<=10);
    
    return 0;
}