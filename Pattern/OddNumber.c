#include <stdio.h>

int main() {
    int k=1;
 for(int i=1;i<=4;i++)
 {
     for(int j=1;j<=5;j++)
     {
        printf(" %2d",k); 
       k+=2;
     }
     printf("\n");
 }

    return 0;
}
