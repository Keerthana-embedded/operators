//Inverted right half Pyramid
#include <stdio.h>  
int main()  
{  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("%c",64+i); 
        }  
        printf ("\n");   
    }  
    return 0;      
}  
