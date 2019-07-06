#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H
#include <bits/stdc++.h>
#include "Client.h"
using namespace std;
class BankApplication
{   vector<Client> clients;     //to store list of clients
    int numberOfClients = 1;    //counter for the no of clients
    public:
        BankApplication();
        void addClient();
        string idGenerator();
};
#endif
