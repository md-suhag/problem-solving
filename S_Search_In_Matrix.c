#include <stdio.h>

int main() {
    
    int n,m, x;
    scanf("%d %d",&n, &m);
    int twoDarr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&twoDarr[i][j]);
        }
        
    }

    scanf("%d",&x);
    int existX = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

  
           if(twoDarr[i][j]== x){
                existX =1;
                break;
            
           }
        }
        
    }
    
    if(existX == 1){
        printf("will not take number");
    }else if( existX == 0){
        printf("will take number");
    }
  

    return 0;
}