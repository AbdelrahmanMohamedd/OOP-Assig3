#ifndef CLIENT_H
#define CLIENT_H
#include <bits/stdc++.h>
#include <BankAccount.h>
#include <SavingBankAccount.h>
using namespace std;
class Client
{
    string name, phoneNumber, address;
    int accountType;                     // variable to let the client choose the account type 1-basic 2-saving
    public:
        BankAccount *bankAccountPointer;
        Client();
        void printInfo();
};
#endif
