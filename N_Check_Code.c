#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int a, b;
    scanf("%d %d",&a,&b);

    char s[a+b+2];

    scanf("%s",s);

    bool ans = 1;

    for (int i = 0; i < a+b+1; i++)
    {
         if(i== a){
            if(s[i] != '-'){
                ans =0;
            }
            continue;
        }


        if(!(s[i] >='0' && s[i]<='9')){
            ans=0;
        }

       
    }

    if(ans==0){

        printf("No");
    }else{
        printf("Yes");
    }
    
    
    
    return 0;
}