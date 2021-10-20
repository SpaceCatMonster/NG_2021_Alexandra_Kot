#include <iostream>

using namespace std;

int main()
{
    int number =0;
    int sum = 0;

    cout<<"Enter any number: ";
    cin>>number;

    do{
        int temp = number %10;
        sum = sum + temp;
        number=number/10;
    }while(number>0);

    cout<<"Sum of numbers in number: "<<sum;
    return 0;
}
