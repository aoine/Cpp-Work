#include <iostream>
using namespace std;

class S
{
private:
	double l1, l2, h;
public:
	void sr()
	{
		cout << "�ϵ� = ";
		cin >> l1;
		cout << "�µ� = ";
		cin >> l2;
		cout << "��   = ";
		cin >> h;
		cout << "\n";
	}
	void sc()
	{
		cout << "��� = " << (l1+l2)*h/2 << "\n\n";
	}
};

int main()
{
	S mj;
	mj.sr();
	mj.sc();
	return 0;
}