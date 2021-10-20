#include <iostream>

using namespace std;

int main()
{
    int number=0, sum =0;
    cout<<"Enter number: ";
    cin>>number;

    int first=number;
    int last = number %10;
    while (first > 9)
        first = first / 10;

    if(last==first){
        sum = sum + last;
    }

    while(number>0){
        int temp = number %10;
        int temp_next = number % 100 /10;
        if(temp==temp_next){
            sum = sum + temp;
        }
        number=number/10;
    };

    cout<<"Hash Code: "<<sum;

}
