#include <stdio.h>


void printToN(int num,int *n){

    if(num>*n){
        return;
    }
    printf("%d\n",num);

    printToN(num+1,n);

}
int main() {

    int n;

    scanf("%d",&n);

    printToN(1,&n);
    
    return 0;
}