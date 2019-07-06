#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <bits/stdc++.h>
using namespace std;
class BankAccount
{   protected:
        string accountID;
        double balance;
    public:
        BankAccount(double _balance);
        virtual void withdraw(double amount);
        virtual void deposit(double amount);
        void   setAccountID(string id);
        string getAccountID();
        double getBalance();
};
#endif
