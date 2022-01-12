#include <iostream>

using namespace std;

int main()
{
    int length = 0;
    cout<<"Enter length of square side: ";
    cin>>length;

    cout<<endl;

    for(int i=0;i<length;i++){
        cout<<"*";
    }

    cout<<endl;

    for(int i=0;i<length-2;i++){
        cout<<"*";
        for(int j=0;j<length-2;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    for(int i=0;i<length;i++){
        cout<<"*";
    }

}
