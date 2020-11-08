#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b); // прототип
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (g(s*s ,t +1)+g(t*t , s +1))/(1 + g(s + t, s * t) *g(s+t,s*t));
	cout << "c = " << c << endl;
	return 0;
}
double g(const double a, const double b)
{
	return (sin(a)*b) / (a*a+b*b);
}