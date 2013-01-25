#include<iostream>
// #include "class1.hpp"
using namespace std;
// see class1.hpp for class declaration
class Cat
{
public:
int& get_age() ;
int get_weight() const;
int get_height() const;  // we could not change member variables when using const
friend void set_heightX(Cat &,int);
Cat(int,int,int);
~Cat();

void set_age(int);
void set_height(int);
void set_weight(int);

private:
int age; 
int weight;
int height; 

};

void set_heightX(Cat &ref, int val)
{
ref.height=val;
}

Cat::Cat(int a,int b,int c)
{
cout << "calling constructor for cat" <<"\n";
age=a;
height=b;
weight=c;
}

Cat::~Cat()
{
cout << "called destructor for cat" << "\n";
}

int& Cat::get_age()
{
return age;
}

int Cat::get_height() const
{
return height;
}


int Cat::get_weight() const
{
return weight;
}


void Cat::set_age(int a)
{
age=a;
}


void Cat::set_weight(int a)
{
weight=a;
}


inline void Cat::set_height(int a)
{
height=a;
}

int main()
{
Cat frissy(1,5,3);
Cat &meowref=frissy; // reference to frissy, meowref is an alias to frissy
Cat *meowpoint = new Cat(14,15,16);

cout << "\n";
cout << "initial height is" << frissy.get_height();

set_heightX(frissy,100);
cout << "\n \n";

cout << "height of frissy is" << frissy.get_height();
cout << "\n";

int &a = frissy.get_age();  // wrong programming practice, having a reference to a private variable
a=10;

cout << "initial constructor parameters" << "\n";

cout << "age is " << frissy.get_age() << "\n" << "weight is " << meowref.get_weight() << "\n" ; 

frissy.set_age(2);
frissy.set_height(10);
frissy.set_weight(6);

cout << "\n \n";
cout << "initial constructor parameters for meowpoint" << "\n";

cout << "age is " << meowpoint->get_age() << "\n" << "weight is " << meowpoint->get_weight() << "\n" ; 

meowpoint->set_age(2);
meowpoint->set_height(10);
meowpoint->set_weight(6);

cout << "giving different age, height" << "\n";

cout << "age is " << frissy.get_age() << "\n" << "weight is " << frissy.get_weight() << "\n" ; 

delete meowpoint;

return 0;
}
