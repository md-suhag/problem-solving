#include <stdio.h>
#include <stdbool.h>

int main() {
     int n;
    scanf("%d",&n);

    long long int a[n];


    for(int i= 0;i<=n-1;i++){

        scanf("%lld ", &a[i]);
    }

    long long int start = 0;
    long long int end = n-1;

    bool isPalindrome = true;
    while(start < end){

        if(a[start] != a[end]){
         
            isPalindrome = false;
            break;
    
        }

        start++;
        end--;

    }
    if(isPalindrome){
        printf("YES");

    }else{
        printf("NO");

    }
    
    return 0;
}