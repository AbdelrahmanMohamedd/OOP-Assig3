#include "SavingBankAccount.h"
// This Constructor sets the minimum balance and the balance from the inherited class BankAccount
SavingBankAccount::SavingBankAccount(double _balance): BankAccount(_balance)
{
    minimumBalance = 1000.0;
    starting_balance:
    if(_balance>=minimumBalance){
        balance = _balance;
    }else{
        cout << "Starting balance must not be less than 1000 L.E."<<endl;
        cout << "Try enter the balance again: "<<endl;
        cin >> _balance;
        cout << endl;
        goto starting_balance;
    }
}
// withdraws amount if balance after won't be less than minimum balance
void SavingBankAccount::withdraw(double amount){
    if(balance-amount<=minimumBalance){
        balance -= amount;
        cout << "New balance is: " << balance << endl;
    }else{
        cout << "Minimum balance must not be less than 1000 L.E." << endl;
    }
}
// deposits amount if equal or bigger than 100
void SavingBankAccount::deposit(double amount){
    if(amount>=100){
        balance += amount;
    }else{
        cout << "Minimum deposit amount must be 100 L.E. or more" << endl;
    }
}
