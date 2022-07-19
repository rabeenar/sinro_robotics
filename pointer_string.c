#include <stdio.h>
#include <string.h>
int main() {
   char a[10],b[10];
   int i=0,l=0,c[20];
   printf("Enter 2 strings:");
   scanf("%s",a);
   scanf("%s",b);
   strcat(a,b);
   l=strlen(a);
   printf("Concatenated string:%s\nLength is:%d",a,l);
  printf("Enter each number:");
   for(i=0;i<=l;i++){
       scanf("%d",&c[i]);
   }

    return 0;
}
