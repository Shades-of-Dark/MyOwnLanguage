#include <iostream>   // input output stream
#include <cmath>


using namespace std;
// statically typed language because we define a set in stone type for each variable
int main() {
    cout <<  "Enter radius ";
    double radius;
    cin >>  radius;

    const double pi = 3.14;
    double area = pow(radius, 2) * pi;
    cout << area;

    return 0;
} 