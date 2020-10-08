#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 7, y = 10;
	bool flag = x > 5 && (y < 9 || y == 10);

	double sum = 21231231.15647984956151849;
	cout << setprecision(16) << sum << endl;
	return 0;
}