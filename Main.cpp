#include<iostream>
using namespace std;
int main()
{
    int Pin;
    int Original_Pin=4545;
    int Balance=4500;
    int Withraw;
    int Deposit;
    char choice;


  
    cout<<"Enter Pin: ";
    cin>>Pin;
    if (Original_Pin==Pin)
    {
        cout<<"==== Pin Correct===="<<endl;
        cout<<"====     Menu   ===="<<endl;
        cout<<"1. Check Balance"<<Balance<<endl;
        cout<<"2. Withraw"<<Withraw<<endl<<"3. Deposit"<<endl;
        cout<<"4. Exit"<<endl;

        switch (choice)
        {
        case 1:
            cout<<Balance;
            break;
        
        case 2:
        cout<<Withraw;
        break;

        case 3:
        cout<<Deposit;
        break;

        case 4:
        cout<<exit;
        break;
        
        default:
        cout<<"Select any Option !";
            break;
        }
    }
    else
    {
    cout<<"Wrong Pin";
    }
    return 0;


}