/* know the number  is odd or even*/
#include <stdio.h>

int main()
{
   int num ,a;
   printf("enter the nember ");
   scanf("%d",&num);
    a =num%2;
    
    if(0==a)
    printf("the number is even");
    else 
    printf("the number is odd");

   
   
    return 0;
}




**************************************

/*user write 10 numbers and find sum and average them*/
#include <stdio.h>

int main()
{
 int i=1,n,avr,sum;
 
 printf("enter the numbers\n");
 
   sum=0; 
  for(;i<=10;i++)
  { 
      printf("number %d : ",i);
      scanf("%d",&n);
 
    sum+=n;
  }
avr=sum/10;
printf("sum =%d\n",sum);
printf("average =%d",avr);   
    return 0;
}


********************************************

/* ask the user enter the value , find sum and mul and print it */
#include <stdio.h>


int main()
{

int x,y,sum,mul;
printf ("enter the numbers \n");
scanf("%d%d",&x,&y);
sum =x+y;
mul =x*y;
printf("sum =%d\nmul =%d",sum,mul);
 
 return 0;

}
