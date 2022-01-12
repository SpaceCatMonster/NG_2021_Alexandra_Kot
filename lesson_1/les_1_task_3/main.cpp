#include <iostream>

using namespace std;

int main()
{
    int a =5;
    int b =3;
    cout<<"Before: "<<a<<" "<<b<<endl;
    a = a+b;
    b= a-b;
    a= (b-a)*-1;
    cout<<"After: "<<a<<" "<<b<<endl;
}
