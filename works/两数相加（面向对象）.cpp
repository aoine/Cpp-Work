#include <iostream>
using namespace std;

class Sum
{
private:
	double a, b;
public:
	void SR() { cout << "a=";	 cin >> a;	cout << "b=";	cin >> b; }
	void SC() { cout <<"a+b=" << a + b << endl; }
};

int main()
{
	Sum h;
	h.SR();
	h.SC();
	return 0;
}