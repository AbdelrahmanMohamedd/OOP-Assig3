#include "BankApplication.h"
// this Constructor is like a simple user interface or main screen,that combine all classes together.
BankApplication::BankApplication()
{   base:
    cout<<" ===================================================\n";
	cout<<"        Welcome to FCI Banking Application \n";
	cout<<" ===================================================\n";
    cout << " 1. Create a New Account " << endl;
    cout << " 2. List Clients and Accounts" << endl;
    cout << " 3. Withdraw Money" << endl;
    cout << " 4. Deposit Money" << endl;
    cout << " 0. Exit" << endl;
    int choice;
    cin >> choice;
    switch(choice){
    case 0:
        cout<<"Thank you !"<<endl;
        break;
    case 1:
        addClient();
        numberOfClients++;
        goto base;
        break;
    case 2:
        for(int i=0; i<clients.size(); i++){
            clients[i].printInfo();
        }
        goto base;
        break;
    case 3:
        {
        cout << "Enter account ID: ";
        string ID;
        cin >> ID;
        cout << endl;
        for(int i=0; i<clients.size(); i++){
            if(ID == clients[i].bankAccountPointer->getAccountID()){
                cout << "Enter amount to withdraw: ";
                double amount;
                cin >> amount;
                cout << endl;
                clients[i].bankAccountPointer->withdraw(amount);
                goto base;
            }
        }
        cout << "Couldn't find an account with that ID" << endl;
        cout << endl;
        goto base;
        break;
        }
    case 4:
        {
        cout<<"Enter account ID: ";
        string ID;
        cin >> ID;
        cout<<endl;
        for(int i=0; i<clients.size(); i++){
            if(ID == clients[i].bankAccountPointer->getAccountID()){
                cout << "Enter The Amount to deposit: ";
                double amount;
                cin >> amount;
                cout << endl;
                clients[i].bankAccountPointer->deposit(amount);
                goto base;}}
        cout << "there is no account Avaliable with this ID"<<"\n" << endl;
        goto base;
        break;
        }
    default:
        cout<<" Error,Invalid choice" << endl;
        goto base;
        break;
    }
}
// takes no parameters, calls the idGenerator and creates a new client object and returns it with the ID
void BankApplication::addClient(){
    Client client;
    cout << idGenerator() << endl;
    client.bankAccountPointer->setAccountID(idGenerator());
    clients.push_back(client);
}
// generates a unique ID for each client and returns it as a string
string BankApplication::idGenerator(){
    stringstream ss;
    ss << numberOfClients;
    string str = ss.str();
    while(str.length()!=3){
        str = '0' + str;
    }
    string id = "FCI-" + str;
    return id;
}
