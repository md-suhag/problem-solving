#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int m[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&m[i][j]);
        }
        
    }
    int sumOfPrimaryDiagonal = 0;
    int sumOfSecondaryDiagonal = 0;

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i ==j){
                sumOfPrimaryDiagonal+=m[i][j];
            }
            
            if((i+j)==n-1){
                sumOfSecondaryDiagonal += m[i][j];
            }
        }
        
    }
    
    int result = sumOfPrimaryDiagonal - sumOfSecondaryDiagonal;

    if(result<0){
        result = result * (-1);
        printf("%d",result);
    }else{
        printf("%d", result);
    }

    return 0;
}