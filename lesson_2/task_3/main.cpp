#include <iostream>

using namespace std;

int main()
{
    int length = 0;
    cout<<"Enter length of square side: ";
    cin>>length;
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(i==0||i==length-1){
                cout<<"*";
            }else{
                if(j==0||j==length-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }

        }
        cout<<endl;
    }
}
