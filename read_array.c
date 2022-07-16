#include <stdio.h>
int i=0,j=0;
int a[3][3];
int main() {
    // Write C code here
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
         scanf("%d",&a[i][j]);  
       
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
         printf("%d\t",a[i][j]);  
       
        }
        printf("\n");
    }
    return 0;
}
