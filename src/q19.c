/* Write a C program that prompts the user for a positive integer and prints a pattern of asterisks (*) in a square shape using nested loops.
Example: User’s Input = 2, then pattern to print will be:
    * *
    * *
*/
#include <stdio.h>

int main(){
    int size;
    printf("Enter the size\n"); 
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){

            printf("* ");
            }
            printf("\n"); 
        }
        
    
    return 0;
}