#include <iostream>

using namespace std;

class car
{
private:
    static int c;
public:
    int getcounter()
    {
        return c;
    }
    car()
    {
    c++;
    }
    ~car()
    {
        c--;
    }

};

class calc
{
int feet ,inche;

public:
    calc(){}
    calc (int f,int i):feet(f),inche(i){}

     calc operator +(calc c1)
     {
         int f= feet+c1.feet;
         int i= inche+c1.inche;
         return calc(f,i);

     }
   int getfeet()
   {
       return feet;
   }


};
class person
{
    private:

int  age;
string name;

public:
    person()
    {
        cout<<"welcome\n";
      name ="unkonw";
       age =0;
    }
    person ( string n, int a ):name (n), age(a){}
       void display ()
     {
         cout<<"welcome "<<endl<<name<<endl<<age<<endl;

     }
     void setname(string n)
     {
         name =n;
     }
     string getname()
     {
         return name;
     }

     ~person(){ cout<<"\nBYE"; }
} ;


class student : public person  // inheritance
{
    int gpa;
    int level;

public:
   student(): gpa(1),level(0){cout<<"marwan\n";}
   student(string n,int a ,int gp ,int l ):person(n,a) // use  method form baseor perant class
   {

       gpa =gp;
       level= l;

   }

      void setgpa(int gp)
     {
         gpa =gp;
     }
     int getgpa()
     {
         return gpa;
     }
    void display() // over riding
    {
      person::display();
      cout<<gpa<<endl<<level;

    }

~student(){ cout<<"bye";}

};
 class shape
 {
 public:
     void area(){cout<< "the area =";}


 };
 class rectangle : public shape
 {
     int lenght, wideth;

     public:
    int area(int l, int w)
    {
        cout<<"the area ="<<l*w;

    }

 };
  class square : public shape
 {
     int lenght;

     public:
    int area(int l)
    {
        cout<<"the area ="<<l*l;

    }

 };
int main()
{

rectangle rec;
rec.area(4,5);
square s;
printf("marwan");

s.area(7);




    return 0;
}
