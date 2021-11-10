#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_text;
    int punctuation_marks = 0;
    getline(cin, input_text);
    for(int i=0;i<input_text.size();i++){
        if(input_text[i]==' '||input_text[i]==','||input_text[i]=='.'||input_text[i]=='"'||input_text[i]=='\''||input_text[i]==','||input_text[i]=='!'||input_text[i]=='?'){
            punctuation_marks++;
        }
    }
    cout<<"Number of punctuation marks: "<<punctuation_marks;
}
