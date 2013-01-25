#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	char *a = "vbc";
	char *b = "def";
	char *c = "xyz";


       cout << a << &a << endl;
       cout << b << &b << endl;
       cout << c << &c << endl;

	if(a<b && a<c)
		cout << a << endl ;
	else if (b<c)
		cout << b << endl;
	else 
		cout << c << endl;
	
	cout << strcmp(a,b) << endl;
	cout << strcmp(c,b) << endl;
	cout << strcmp(c,b) << endl;
	cout << strcmp(c,c) << endl;

	return 0;
}
