// Write a C program that prompts the user for a positive integer and prints a countdown from that number to 1 using a for loop.
#include <stdio.h>

int main(){
    int num,j;
    printf("Enter a number\n"); 
    scanf("%d",&num); 
    j=num;
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n",j); 
        j--;
    }
    
    return 0;
}