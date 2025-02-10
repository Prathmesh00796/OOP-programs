#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount
{
private:
    // BankAccount Class 
    string accountHolder;
    int accountNumber;
    string accountType;
    double balance;

public:
    // BankAccount Class member functions
    BankAccount()
    { // Default Constructor
        accountHolder = '-';
        accountNumber = 0;
        accountType = '-';
        balance = 0;
    }
    BankAccount(string accountHolder, int accountNumber, string accountType, double balance)
    { // Parameterized Constrctor
        this->accountHolder = accountHolder;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }
    string getAccountHolder()
    { 
	// getter function
        return accountHolder;
    }
    int getAccountNumber()
    { 
	// getter function
        return accountNumber;
    }
    string getAccountType()
    { 
	// getter function
        return accountType;
    }
    double getBalance()
    { 
	// getter function
        return balance;
    }
    void setAccountType(string newType)
    { 
	// mutator/setter function
        accountType = newType;
        cout << "Updated Account Type to " << newType << endl << endl;
    }

    // Functional methods
    void deposit(double amount)
    {
        // if deposite amount was 0 or negative then the deposite function will not work
        if (amount > 0)
        {
            cout << "-------------------------------" << endl;
            cout << "Balance         " <<setw(6)<<right<< balance <<endl;
            balance += amount;
            cout << "Depositing      " <<setw(6)<<right<< amount << endl;
            cout << "New Balance     " <<setw(6)<<right<<  balance << endl << endl;
        }else{
            cout<<"Please Enter valid amount"<<endl<<endl;
        }
    }
    void withdraw(double amount)
    {
        // should not withdrow if the withdrawal amount was greater then the balance
        if (amount <= balance)
        {
            cout << "-------------------------------" << endl;
            cout << "Balance          "<< setw(6) << right << balance <<endl;
            balance -= amount;
            cout << "Withdrawing      "<< setw(6) << right << amount << endl;
            cout << "New Balance      "<< setw(6) << right << balance << endl << endl;
        }else{
            cout<<"Not sufficient amount to withdraw!"<<endl<<endl;
        }
    }
    void displayAccountDetails()
    { // getter function
        cout << "Account Holder: " << accountHolder << endl
             << "Account Number: " << accountNumber << endl
             << "Account Type  : " << accountType << endl
             << "Balance       : " << balance << endl << endl;
    }
};

int main()
{
    string accountHolder;
    int accountNumber;
    string accountType;
    double balance;

    BankAccount account1;
    // default construction call
    account1.displayAccountDetails();

    cout << "Enter Name: ";
    getline(cin,accountHolder);
    // srand(time(0)) statement helps to generate every time a random number
    srand(time(0));
    accountNumber = 100000 + rand() % 899999; // generates a random number from 100000 to 999999
    accountType = '-';
    int ch;
    do {
        cout << "Select Account Type: " << endl
             << "1 Savings Account" << endl
             << "2 Current Account" << endl
             << "3 Salary Account" << endl
             << "4 DEMAT Account" << endl
             << "5 NRI Account" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            accountType = "Savings";
            break;
        case 2:
            accountType = "Current";
            break;
        case 3:
            accountType = "Salary";
            break;
        case 4:
            accountType = "DEMAT";
            break;
        case 5:
            accountType = "NRI";
            break;
        default:
            cout << "Please Enter Valid Account Type!" << endl;
        }
    } while (accountType == "-");
    cout << endl << "Enter Balance: ";
    cin >> balance;
    cout << endl << endl;

    // Parameterized constructor call
    BankAccount account2(accountHolder, accountNumber, accountType, balance);
    account2.displayAccountDetails();

    double depositAmount;
    cout << "Deposit amount: ";
    cin >> depositAmount;
    account2.deposit(depositAmount);

    double withdrawAmount;
    cout << "Withdraw amount: ";
    cin >> withdrawAmount;
    account2.withdraw(withdrawAmount);

    // getter function call for account2 object
    account2.getAccountHolder();
    account2.getAccountNumber();
    account2.getAccountType();
    account2.getBalance();

    string newAccountType;
    cout << "Enter new account type: ";
    cin >> newAccountType;
    // mutator function to update account type variable value
    account2.setAccountType(newAccountType);

    // getter function call for account2 object
    account2.displayAccountDetails();

    return 0;
}
