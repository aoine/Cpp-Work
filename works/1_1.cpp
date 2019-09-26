#include <iostream>
using namespace std;

class S
{
private:
	double r;
public:
	void sr()
	{
		cout <<"r = ";
		cin >> r;
	}
	void sc()
	{
		cout << "S = " << 3.1415926*r*r << "\n\n";
	}
};

int main()
{
	S js;
	js.sr();
	js.sc();
	return 0;
}
