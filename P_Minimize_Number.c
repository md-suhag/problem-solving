#include <stdio.h>

void minimizeNumber(int a[], int* totalOperations, int n){

    int isOddFound = 0;
for (int i = 0; i < n; i++)
{
    if(a[i]%2 == 0){
        a[i] = a[i]/2;

    }else{
        isOddFound = 1;
        break;;
    
    }
}

    if(isOddFound ==1){
        return;
    }

    *totalOperations = *totalOperations +1;
     minimizeNumber(a,totalOperations, n);

}

int main() {
    
    int n;

    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int totalOperations = 0;
    minimizeNumber(a, &totalOperations, n);

    printf("%d",totalOperations);
    
    return 0;
}