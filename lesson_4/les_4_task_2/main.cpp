#include <iostream>

using namespace std;

int main()
{
    int empty_space_1 = 0;
    int empty_space_2 = 0;
    int similar = 0;
    char sentence_1[20] = {0};
    char sentence_2[20] = {0};

    cout<<"Enter first sentence: ";
    cin.getline(sentence_1, 20);
    cout<<"Enter second sentence: ";
    cin.getline(sentence_2, 20);

    for(int i=0;i<20;i++){
        if(int(sentence_1[i])<1){
            empty_space_1++;
        }
        if(int(sentence_2[i])<1){
            empty_space_2++;
        }
        if(sentence_1[i]==sentence_2[i]){
            similar++;

        }
    }

    if(similar - empty_space_1==sizeof (sentence_1)-empty_space_1){
        cout<<"Sentences are equal"<<endl;
    }else{
        cout<<"Sentences are NOT equal"<<endl;
    }
}
