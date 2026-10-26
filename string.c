// #include <stdio.h>

// int main() {

//     char s[10];

//     scanf("%s", s);

//     printf("%d",s[9]);
    
//     return 0;
// }
#include <stdio.h>

int main() {

    char s[4];

  
    fgets(s,4,stdin);

    printf("%s",s);
    
    return 0;
}