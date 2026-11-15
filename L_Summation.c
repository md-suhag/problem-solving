#include <stdio.h>

void calculateSum (int a[], long long int *sum, int index, int n){

    if(n == index){
        return;
    }

    *sum = a[index] + *sum;

    calculateSum(a,sum, index+1, n);
}


int main() {
    
    int n;

    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    long long int sum = 0;

    calculateSum(a, &sum, 0, n);
    

    printf("%lld", sum);
    return 0;
}