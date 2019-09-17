#include <iostream>
using namespace std;

template<typename T>
T Max(T x1, T x2)
{
	return (x1 > x2 ? x1 : x2);
}

int main()
{
	cout<<Max(11, 2)<<endl;
	cout<<Max(11.1, 2.2)<<endl;
} 
