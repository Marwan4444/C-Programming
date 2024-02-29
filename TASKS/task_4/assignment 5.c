
#include <stdio.h>

int main()
{
    int n=0;
   printf("enter the number :");
   scanf("%d",&n);
   

 int  c=n&(n-1);
 if (c==0)
 {
     printf("ture");
 }
else
printf("false");
 
  
    return 0;
}
