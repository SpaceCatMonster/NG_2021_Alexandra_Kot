#include <iostream>
#include <math.h>

using namespace std;

double hmf(double m, int s){//How Much Fuel
    m = m/3;
    m = round(m);
    double fuel = (m - 2)*s;
    return fuel;
}

int main()
{
    double mass = 0;
    int s = 300;

    cout<<"How heavy is a spaceship: ";
    cin>>mass;

    cout<<"This is how much fuel you needed: ";
    cout<<hmf(mass, s);
    return 0;
}
