#include "Client.h"
// This Constructor creates an Object for the client and allocate a value to all variables
Client::Client()
{
    cin.ignore();    //to avoid the error in the cins
    cout << "Name: ";
    getline(cin,name);
    cout << "Address: ";
    getline(cin,address);
    cout << "Phone Number: ";
    cin >> phoneNumber;
    typeofacc:
    cout << "Enter 1 for basic account, 2 for saving account: ";
    cin >> accountType;
    double _balance;
    cout << "Enter starting balance: ";
    cin >> _balance;
    if(accountType == 1){
        bankAccountPointer = new BankAccount(_balance);
    }else if(accountType == 2){
        bankAccountPointer = new SavingBankAccount(_balance);
    }else{
        cout << "Erorr,Invalid type" << endl;
        goto typeofacc;
    }
}
// showing for client's Information
void Client::printInfo(){
    cout << "-------------------------- " << name << " ---------------------------"<<endl;
    cout << "Address: "<< address <<endl;
    cout << "Phone: " << phoneNumber <<endl;
    cout << "Account ID: " << bankAccountPointer->getAccountID()<<endl;
    if(accountType == 1){
        cout << " (Basic)" << endl;
    }else{
        cout << " (Saving)" << endl;
    }
    cout << "Balance: " << bankAccountPointer->getBalance() << endl << "----------------------------------" << endl;
}
