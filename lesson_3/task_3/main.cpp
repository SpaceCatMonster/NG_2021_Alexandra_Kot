#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int array_1[4] = {0};
    int array_2[4] = {0};
    int number_1 = 0, number_2 = 0;

    for(int i = 0; i<4; i++){
        array_1[i] = rand() % 10;
    }

    for(int i = 0; i<4; i++){
        array_2[i] = rand() % 10;
    }

    for(int i = 0; i<4; i++){
        cout << array_1[i] << " ";
    }
    cout<<endl;
    for(int i = 0; i<4; i++){
        cout << array_2[i] << " ";
    }
    cout<<endl<<endl;
    number_1 = array_1[0]*1000 + array_1[1]*100 + array_1[2]*10 + array_1[3];
    number_2 = array_2[0]*1000 + array_2[1]*100 + array_2[2]*10 + array_2[3];

    cout<<"Got: "<< number_1<< " + "<< number_2<<endl;
    cout<<"Result: "<<number_1 + number_2<<endl;
}
