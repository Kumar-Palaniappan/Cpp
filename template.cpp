#include<iostream>
using namespace std;

template<class T>
T min(T a, T b, T c)
{
	if(a<b && a<c)
		return a;
	else if(b<c)
		return b;
	else
		return c;
}

int main()
{
	int a=1,b=-1,c=3;
	cout << min<int> (a,b,c) << " \n";
	return 0;
}
