#include <stdio.h>

void sum (int x, int y){

    long long int result = x+y;

    printf("%lld",result);
}

int main() {
    
    int x,y;
    scanf("%d %d",&x,&y);

sum(x,y);

    return 0;
}