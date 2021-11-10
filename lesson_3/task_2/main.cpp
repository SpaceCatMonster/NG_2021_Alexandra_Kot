#include <iostream>

using namespace std;

int main()
{
    int bank_acc[10] = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    int acc_pin_code[10] = {1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009};
    int enter_number = 0, enter_pin_or_money = 0;

    while(true){
        cout<<"Bank account: ";
        cin>>enter_number;
        if(enter_number>10 || enter_number<0){
            cout<<"Wrong bank account!"<<endl;
            continue;
        }

        cout<<endl;

        cout<<"Enter PIN for "<<enter_number<<" account: ";
        cin>>enter_pin_or_money;
        if(acc_pin_code[enter_number]!=enter_pin_or_money){
            cout<<"Wrong PIN!"<<endl;
            continue;
        }

        cout<<endl;

        cout<<"Your money: "<<bank_acc[enter_number]<<" $"<<endl;
        cout<<"What I can do?"<<endl
            <<"1 - add money"<<endl
            <<"2 - withdraw money"<<endl;

        cout<<endl;
        cin>>enter_pin_or_money;

        switch(enter_pin_or_money){
            case 1:{
                cout<<"How much? ";
                cin>>enter_pin_or_money;
                bank_acc[enter_number] = bank_acc[enter_number] + enter_pin_or_money;
                break;
            }

            case 2:{
                cout<<"How much? ";
                cin>>enter_pin_or_money;
                bank_acc[enter_number] = bank_acc[enter_number] - enter_pin_or_money;
                if(bank_acc[enter_number]==0 ||bank_acc[enter_number]<0){
                    bank_acc[enter_number] = 0;
                }
                break;
            }

            default:{
                cout<<"Wrong operation!";
                continue;
            }
        }
        system("cls");
    }
}
