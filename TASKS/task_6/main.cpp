
/******************** find prime number ******************/
#include <iostream>

using namespace std;

void prime(int x){
     bool b=1; 
    for( int i=2;i<x;i++)
    {
     if (x%i==0)
        b=0;
    }
/***************/
if(b==1)
{
cout<<"prime";
}
else if(b==0)
cout<<"not prime";
}

/**************/
int main()
{
   prime(81);

    return 0;
}
