/* Write a C program that prints a pattern of asterisks.
      *
     ***
    *****
*/
#include <stdio.h>

int main(){
    int a=3;
    for (int i = 1; i <= 3; i++){
        for(int k=1;k<=a;k++){
            printf(" "); 
            a--;
        }
        for(int j = 1 ; j<=2*i-1;j++){
            printf("*"); 
        }
        printf("\n"); 
    }
    
    return 0;
}