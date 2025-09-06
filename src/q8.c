/* Write a C program that prints a pattern of asterisks.
    *
    **
    ***
    ****
    *****
*/
#include <stdio.h>

int main(){
    int j=1;
    for (int i = 1; i <=5; i++)
    {
        
        for ( j = 0; j <i ; j++)
        {
            
            printf("*");
        }
     printf("\n");
    }
    return 0;
}