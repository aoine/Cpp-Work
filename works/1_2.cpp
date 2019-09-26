#include <iostream>
using namespace std;

class S
{
private:
	double l1, l2, h;
public:
	void sr()
	{
		cout << "上底 = ";
		cin >> l1;
		cout << "下底 = ";
		cin >> l2;
		cout << "高   = ";
		cin >> h;
		cout << "\n";
	}
	void sc()
	{
		cout << "面积 = " << (l1+l2)*h/2 << "\n\n";
	}
};

int main()
{
	S mj;
	mj.sr();
	mj.sc();
	return 0;
}