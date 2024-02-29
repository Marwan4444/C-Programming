#include<stdio.h>
/*
long toBin(int);

int main()
{
    long bno;
    int dno;
	printf("\n\n Function : convert decimal to binary :\n");
	printf("-------------------------------------------\n");
    printf(" Input any decimal number : ");
    scanf("%d",&dno);
    bno = toBin(dno);
    printf("\n The Binary value is : %ld\n\n",bno);

    return 0;
}
long toBin(int dno)
{
    long bno=0,remainder,f=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    return bno;
}

void printBinary(float number)
 {

    int  test =0;
    int arr[8];

    for( int i =1 ;i<=8 ;i++)
    {
        test=number/2;

        if( number >= (test*2)+1 )
        {

           arr[i-1]=1;


        }
        else
        {

            arr[i-1]=0;

        }
        number=number/2;

    }

    for( int i=0 ;i<8;i++)
    {

        printf("%i",arr[i]);
    }

 }*/
