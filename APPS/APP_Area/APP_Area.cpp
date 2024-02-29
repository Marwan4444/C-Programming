
#include <iostream>
using namespace std;

int main()
{
    cout<<"1_Circle\t2_Triangle\t3_Square\t4_Rectangle\t5_Rhombus\t6_Trapezoid\t7_Parallelogram\n";
    cout<<"choose the shape\n";

    char shape ;

    cin>>shape;
    switch(shape)
    {
    case '1':
        cout<<"enter the radius\n";
        float radius;
        cin>>radius;
        cout<<"the area of the Circle = "<<radius*radius*3.14;
        break;

    case  '2':
        cout<<"enter the Base and height\n";
        float Base,height;
        cin>>Base>>height;
        cout<<"the area of the Triangle = "<<.5* Base*height;
        break;

    case  '3':
        cout<<"enter the Length of the side \n" ;
        float Lenght;
        cin>>Lenght;
        cout<<"the area of the Square = "<<Lenght*Lenght;
        break;

    case  '4':
        cout<<"enter the lenght and width\n";
        float lenght,width;
        cin>>lenght>>width;
        cout<<"the area of Rectangle = "<<lenght*width;
        break;

    case  '5':
        cout<<"enter the Diameter1 and Diameter2\n";
        float Diameter1,Diameter2;
        cin>>Diameter1>>Diameter2;
        cout<<"the area of Rhombus = "<<.5*Diameter1* Diameter2;
        break;

    case  '6':
        cout<<"enter the base1,base2 and Hight\n" ;
        float base1,base2, Hight;
        cin>> base1>>base2>>Hight;
        cout<<"the area of Trapezoid = "<<(base1+base2)*.5*Hight;
        break;

    case  '7':
        cout<<"enter the Base and Hight\n" ;
        float _Base, _Hight;
        cin>> _Base>>_Hight;
        cout<<"the area of Parallelogram = "<<_Base*_Hight;
        break;

    }
    return 0;
}
