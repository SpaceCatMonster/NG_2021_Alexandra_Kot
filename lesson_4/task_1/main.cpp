#include <iostream>

using namespace std;

int main()
{
    int punctuation_marks = 0, empty_space = 0;;
    char sentence[20] = {'A'};
    cout<<"Enter sentence (MAX characters: 20): ";
    cin.getline(sentence, 20);

    for(int i=0;i<20;i++){
        if(int(sentence[i])<1){
            empty_space++;
        }

        if(int(sentence[i])<65 || int(sentence[i])>90){
            if(int(sentence[i])<97||int(sentence[i])>122){
                punctuation_marks++;
            }
        }
    }

    cout<<"Number of punctuation marks: "<<punctuation_marks-empty_space;
}
