/* Write a C program that prints a pattern of asterisks.
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
#include <stdio.h>

int main(){
    int j=1,a=4;
    for (int i = 1; i <= 5; i++)
    {
        
        for ( j = 1; j <=i ; j++)
        {
            
            printf("*");
        }
     printf("\n");
    }
        for (int i = 1; i <= 5; i++)
    {
        
        for ( j = 1; j <=a ; j++)
        {
            
            printf("*");
        }
        a--;
     printf("\n");
    }
    
    return 0;
}