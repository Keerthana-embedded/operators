int main() 
{
  int i, j, rows=5, k, m = 1;      
    for ( i = rows; i >= 1; i--)  
    {  
        for ( j = 1; j <= m; j++)    
            printf ("  ");    
        for ( k = 1; k <= ( 2 * i - 1); k++)   
            printf ("%c ", 'A' + k - 1);     
        m++;  
        printf ("\n");  
    }  
    return 0;  
}