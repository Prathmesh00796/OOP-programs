#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    char ch ;
    int choice, i, amount,transaction_count = 0,lineCount =0;
    float balance = 0.0 ;
    string str_transaction ;
    ifstream in;
    ofstream out;

    do{
        cout << "1. Deposite\n2. Withdraw\n3. Last 10 Transactions\n4. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Amount: ";
            cin >> amount;
            str_transaction = ("+ " + to_string(amount) +'\t' +"Balance: "+to_string(balance) + '\n') ;
            out.open("database.txt",ios::app);
            out << str_transaction;
            out.close();
            balance += amount ;
            cout<<"Rs "<<amount<<" Deposited \tBalance: "<<balance<<endl;
            break;
        case 2:
            cout<<"Enter Amount: ";
            cin>>amount ;
            if(amount > balance){
                cout<<"Not Enough Balance!" ;
                break;
            }
            str_transaction = ("- " + to_string(amount) + '\t' +"Balance: "+to_string(balance) + '\n') ;
            out.open("database.txt",ios::app);
            out<<str_transaction;
            out.close();
            balance -= amount ;
            cout<<"Rs "<<amount<<" Withdrawl Successfull \tBalance: "<<balance<<endl;
            break;
        case 3:
            in.open("database.txt");
            in.seekg(ios::beg);
            lineCount = 0 ;
            while(in.get(ch)){
                if(ch == '\n')
                    ++lineCount;
            }
            in.clear();
            in.seekg(ios::beg);
            i = 1 ;
            while(getline(in,str_transaction)){
                if(i > lineCount - 10){
                    cout<<str_transaction<<endl;
                }  
                ++i;
            }
            in.close();
            break;
        case 4:
            exit(0);
        default:
            cout<<"Please Enter Valid Option"<<endl;   
        }
    }while (true);
    return 0;
}
