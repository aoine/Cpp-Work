#include <iostream>
using namespace std;

class S
{
private:
	int a, b, m;
public:
	void SR() { cin >> a >> b; }
	void JS() { m = a * b; }
	void SC() { cout << "Ãæ»ý=" << m; }
};

int main()
{
	S m;
	m.SR();
	m.JS();
	m.SC();
	return 0;
}