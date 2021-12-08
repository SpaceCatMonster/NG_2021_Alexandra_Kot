#include <iostream>

using namespace std;

void draw_vert_line(int hm){//How Much
    for(int i=0;i<hm;i++){
        cout<<"*";
    }
}

void draw_sides(int hm){
    cout<<endl;
    for(int j=0; j<hm;j++){
        cout<<"*";
        for(int i=0;i<hm;i++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

}

void draw_square(int size){
    draw_vert_line(size);
    draw_sides(size-2);
    draw_vert_line(size);
}

int main()
{
    int length = 0;
    cout<<"Enter length of square side: ";
    cin>>length;
    cout<<endl;

    draw_square(5);

}
