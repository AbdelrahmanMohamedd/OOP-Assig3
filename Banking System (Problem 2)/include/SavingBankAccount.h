#ifndef SAVINGBANKACCOUNT_H
#define SAVINGBANKACCOUNT_H
#include <bits/stdc++.h>
#include "BankAccount.h"
using namespace std;
class SavingBankAccount: public BankAccount
{
   double minimumBalance;
   public:
        SavingBankAccount(double _balance);
        void withdraw(double amount);
        void deposit(double amount);
};
#endif
