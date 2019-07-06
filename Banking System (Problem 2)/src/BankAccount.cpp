#include "BankAccount.h"
/// Constructor which only sets the balance (used in Client())
BankAccount::BankAccount(double _balance)
{
    balance = _balance;
}
// checks if the amount wanted is available and if so withdraws it
void BankAccount::withdraw(double amount){
    if(amount<=balance){
        balance -= amount;
        cout << "New balance is: " << balance << endl;
    }else{
        cout<<" Too much !"<<endl;
        cout<<" Your account has an amount less than that you want to withdraw " << endl;
    }
}
// depositing the mentions amount
void BankAccount::deposit(double amount){
    balance += amount;
    cout << "New balance is: " << balance << endl;
}
// sets the account id
void BankAccount::setAccountID(string id){
    accountID = id;
}
// returns the account id
string BankAccount::getAccountID(){
    return accountID;
}
// returns the balance
double BankAccount::getBalance(){
    return balance;
}
