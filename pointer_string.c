#include <stdio.h>
#include <string.h>
int main() {
   char a[10],b[10];
   int i=0,l=0,c[20],s=0;
   int *ptr;
   printf("Enter 2 strings:");
   scanf("%s",a);
   scanf("%s",b);
   strcat(a,b);
   l=strlen(a);
   printf("Concatenated string:%s\nLength is:%d\n",a,l);
   printf("Enter each number:");
   for(i=1;i<=l;i++){
       scanf("%d",&c[i]);
       s=s+c[i];
   }
   ptr=&s;
   printf("Address of pointer=%p\nValue of pointer=%d",ptr,*ptr);

    return 0;
}
