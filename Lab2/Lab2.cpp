#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	//double a;
	//double z1;
	double z2;
	cout << "a = "; cin >> a;
	z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
	z2 = tan(2 * a) + 1 / cos(2 * a);
	//cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
