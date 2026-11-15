#include <stdio.h>

void printFrontEnd(int a[], int front, int end){

    if(front > end){
        
        return;
    }else if(front == end){
        
        printf("%d", a[front]);
        return;
    }


    printf("%d %d ", a[front],a[end]);



    printFrontEnd(a, front +1, end-1);

}

int main() {
    
    int n;
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)         
    {
       scanf("%d",&a[i]);
    }

    printFrontEnd(a,0, n-1);
    

    return 0;
}