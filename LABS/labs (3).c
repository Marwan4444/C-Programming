/*swap  2 number*/
#include <stdio.h>
 int x=10;
 int y=20;
void swap ();  
  
int main()
{
   printf("x=%d\n",x);
   printf("y=%d\n",y);
   swap();
   printf("x=%d\n",x);
   printf("y=%d",y);
    
    return 0;
}

void swap ()
{
    int z; 
    z=x;
    x=y;
    y=z;
}
 

*************************************************************



/* max number */
#include <stdio.h>
 
int max (int x,int y);  
  
int main()
{
  
   int res,x,y;
  printf("enter 1 value"); 
    scanf("%d",&x);
    printf("enter 2 value"); 
    scanf("%d",&y);

res= max (x,y);
printf("the max =%d",res);
    return 0;
}

int max (int x,int y)
{
    int z;
    if(x>y)
    z=x;
    else
    z=y;
  
    
    return z;
}    


**************************************************************


/*print from n to 1*/
#include <stdio.h>
int fun(int);

int main()
{
   int n=0;
   scanf("%d",&n);
   fun(n);
 
    return 0;
}

int fun(int n) 
{
     if (n<1)
     return 1;
       printf("%d\t",n);
     fun(n-1);
}



**********************************************************


/* use array to find summation and average*/
#include <stdio.h>

int main()
{
   int arr[10];
   int i;
   for(i=0;i<10;i++)
   {
       printf("enter the number %d :",i);
       scanf("%d",&arr[i]);
       
   }
   
  int sum=0;
  float avr;
 for(i=9;i>=0;i--)
 {
    sum =sum +arr[i];
    
 }
 printf("sum =%d\n",sum);
 avr =sum/10;
 printf("average =%f",avr);
 
 
    return 0;
}



*************************************************************

//user enter 10 numbers and print it in reverse
#include <stdio.h>


int main()
{
   int arr[10];
   int i;
   for(i=0;i<10;i++)
   {
       printf("enter teh number %d :",i);
       scanf("%d",&arr[i]);
       
   }
   
   
 for(i=9;i>0;i--)
 {
     printf("%d\n",arr[i]);
 }
 
    return 0;
}




























