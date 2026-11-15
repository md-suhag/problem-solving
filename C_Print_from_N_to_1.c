#include <stdio.h>


void printToN(int num,int *n){

    if(num>*n){
        return;
    }
    
    printToN(num+1,n);
    
    if(num != 1){

        printf("%d ",num);
    }else{
        printf("%d",num);
    }
}
int main() {

    int n;

    scanf("%d",&n);

    printToN(1,&n);
    
    return 0;
}