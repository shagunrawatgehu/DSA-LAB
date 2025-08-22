//Given a matrix of size n X n containing positive integers, write an algorithm and a program to rotate the elements of matrix in clockwise direction

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    int row = 0, col = 0; 
    int prev, curr; 
    int lastRow= n;
    int lastCol= n;
    while (row < lastRow && col < lastCol) 

    {  
        if (row + 1 == lastRow || col + 1 == lastCol)  break;   

        prev = mat[row + 1][col]; 
        
        for (int i = col; i < lastCol; i++) 
        { 
            curr = mat[row][i]; 
            mat[row][i] = prev; 
            prev = curr; 
        } 
        row++; 
        
        for (int i = row; i < lastRow; i++) 
        { 
            curr = mat[i][lastCol-1]; 
            mat[i][lastCol-1] = prev; 
            prev = curr; 
        } 
        lastCol--;   
       
         
            for (int i = lastCol-1; i >= col; i--) 
            { 
                curr = mat[lastRow-1][i]; 
                mat[lastRow-1][i] = prev; 
                prev = curr; 
            } 
    
        lastRow--; 
        
        
            for (int i = lastRow-1; i >= row; i--) 
            { 
                curr = mat[i][col]; 
                mat[i][col] = prev; 
                prev = curr; 
            } 

        col++; 
    } 
 
    for (int i=0; i<n; i++) 
    { 
        for (int j=0; j<n; j++) 
         {
             printf("%d ",mat[i][j]);
         } 
       printf("\n"); 
    } 
}
