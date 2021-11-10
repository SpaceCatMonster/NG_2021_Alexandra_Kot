#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0};
    int number = 0;

    for(int i = 0;i<10;i++){
        cout<<"Enter #"<<i+1<<" number in array: ";
        cin>>arr[i];
    }

    cout<<"Which number to add to the others? ";
    cin>>number;

    cout<<"New array"<<endl;
    for(int i = 0;i<10;i++){
        cout<<"#"<<i+1<<" "<<arr[i]+number<<endl;
    }
}
