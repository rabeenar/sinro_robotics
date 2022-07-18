#include <stdio.h>
#include <string.h>
int main() {
    int l=0,i=0;
    char a[]="hello",b[5];
    l=strlen(a);
    printf("%s\n",a);
    printf("Length is %d\nEnter characters:",l);
    for(i=0;i<l;i++)
    {
    scanf("%c",&b[i]);
    }
   for(i=0;i<l;i++)
   {
    printf("%c",b[i]);
    }
    return 0;
}
