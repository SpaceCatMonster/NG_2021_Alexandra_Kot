#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    d = pow(b,2) - (4*a*c); //D = b^2 - 4ac
    cout<<"Your discriminant is "<<d<<endl;

    if(d<0){
        cout<<"Roots of a square equation cannot be found";
    }else if(d==0){
        int res = (-b+sqrt(d))/(2*a);
        cout<<"Root of a square equation is "<<res;
    }else{
        int res1 = (-b+sqrt(d))/(2*a);
        int res2 = (-b-sqrt(d))/(2*a);
        cout<<"Roots of a square equation are "<<res1<<" and "<<res2;
    }
}
