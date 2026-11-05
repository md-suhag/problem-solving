// #include <stdio.h>

// int main() {
    
//     int n;
//     scanf("%d",&n);

//     int star = 1;
//     int space = n-1;

//     for(int i=1;i<=n;i++){

        
//         for(int j= 1;j<=space;j++){
//             printf(" ");
//         }
//         for(int j=1; j<=star;j++){
//             printf("*");
//         }


//         printf("\n");
//         star+=2;
//         space--;

//     }

//     return 0;
// }

// -------------------------------
// //  upside down pyramid pattern
// -------------------------------

// #include <stdio.h>

// int main() {
    
//     int n;
//     scanf("%d",&n);

//     int star = n+(n-1);
//     int space = 0;

//     for(int i=1;i<=n;i++){

        
//         for(int j= 1;j<=space;j++){
//             printf(" ");
//         }
//         for(int j=1; j<=star;j++){
//             printf("*");
//         }


//         printf("\n");
//         star-=2;
//         space++;

//     }

//     return 0;
// }


// diamond  pyramid pattern


#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    
    int star = 1;
    int space = n-1;
    
    for(int i=1;i<=n;i++){

        
        for(int j= 1;j<=space;j++){
            printf(" ");
        }
        for(int j=1; j<=star;j++){
            printf("*");
        }


        printf("\n");
        star+=2;
        space--;

    }

    int star2 = (n-1)+(n-2);
    int space2 = 1;

    for(int i=1;i<=n;i++){

        
 

        for(int j= 1;j<=space2;j++){
            printf(" ");
        }
        for(int j=1; j<=star2;j++){
            printf("*");
        }


        printf("\n");
        star2-=2;
        space2++;

    }

    return 0;
}