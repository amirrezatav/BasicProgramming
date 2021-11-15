#include <iostream>
#include<math.h>
using namespace std;

#define PI 3.1415926 // name of 3.1415926 is PI // PI just name 

int main()
{
    const double pi = 3.1415926; // Value of pi is 3.1415926 !! pi is double 
    double cosx = 1;
    int sign = 1;
    int n = 15;
    long long int fact = 1;
    double xd; // degree
    double x; // rad
    cin >> xd;
    x = xd * pi/180;
    double powerx = 1;
    for (size_t i = 1; i <=  2*n; i+=2)
    {
        fact *= i * (i+1);
        powerx *= x * x;
        sign *= -1;
        cosx += sign * powerx/fact;
    }
    cout << "Cos x = " << cosx << endl;
    cout << "Cos x c++ = " <<  cos(x);
    return 0;
}
