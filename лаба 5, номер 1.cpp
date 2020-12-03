#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double help(double xn, double xk, double dx) {
for (double x = xn; x <= xk + dx; x += dx) {
double F = pow(x*(pow(x, 2)+x+1), 1/5) * log(abs(sin(x)/x));
cout << "x = " << x << ' ' << "F = " << F << endl;
}
return 0;
}
int main() {
help(1, 5, 0.2);
return 0;
}

