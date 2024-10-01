#include <iostream>
#include <cmath>

using namespace std;



double g(double a, double b) {

	return sin(a * b) / (a * a + b * b);
}

int main() {
	double s, t;
	double res;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	res = (g(s * s, t + 1) + g(t * t, s + 1)) / (1 + g(s + t, s * t));
	cout << "result is " << res << endl;
	return 0;
}

