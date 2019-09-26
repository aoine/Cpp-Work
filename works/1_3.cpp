#include <iostream>
using namespace std;

class SUM
{
public:
	double js(double x, double y)
	{
		return x+y;
	}
};

int main()
{
	SUM h;
	double a, b, s;
	cin >> a >> b;
	s = h.js(a,b);
	cout << "x+y = " << s << "\n\n";
	return 0;
}
