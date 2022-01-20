#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int count = 0, length, code = 0;

    cout <<"Enter your phrase: ";
    getline(cin, input);
    cout <<"Enter code(number): ";
    cin>>code;
    length = (int)input.length();

    for (count = 0; count < length; count++){

        if (isalpha(input[count])){

            input[count] = tolower(input[count]);
            for (int i = 0; i < code; i++){

                if (input[count] == 'z'){
                    input[count] = 'a';
                }else{
                    input[count]++;
                }
            }
        }
    }

    cout << "Results: " << input << endl;

}
