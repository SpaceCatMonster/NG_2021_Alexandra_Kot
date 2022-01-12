#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double mass = 0;
    int s = 300;

    cout<<"How heavy is a spaceship: ";
    cin>>mass;

    double fuel = 0;
    mass = mass/3;
    mass = round(mass);
    fuel = (mass - 2)*s;

    cout<<"This is how much fuel you needed: ";
    cout<<fuel;
    return 0;
}
