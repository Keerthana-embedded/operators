#include <stdio.h>  
int main()  
{    
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    for ( i =1; i <= rows; i++)  // To print the pattern row by row
    {  
        for ( j = 1; j <= rows - i; j++)  // To print space 
        {  
            printf ("  ");   
        }    
        for ( k = 1; k <= ( 2 * i - 1); k++)  // To print symbol
        {  
            printf ("* "); 
        }  
        printf ("\n");  
    }  
    return 0;  
}  
