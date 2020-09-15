/* 07/13/2018
 AccntDriver.cpp
 C.E.
 Last Updated: 07/17/2018
 Program is to create array of bank accounts. User sets dollar and cent values, invalid values will be rejected and passed to the exception handler.
 */

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
    int Size; //size of array
    string name;
    int dollar;
    int cent;
    
    
    cout << "Enter the number of accounts to create: " << endl;
    cin >> Size;
    Account *accts[Size];
   
    for(int i = 0; i < Size; i++)
    {
    
        cout << "Enter the name of the account: " << endl;
        cin >> name;
     
        cout << "Enter dollar amount" << endl;
        cin >> dollar;
       
        cout << "Enter cents amount for account" << endl;
        cin >> cent;
    
        try
        {
            accts[i] = new Account(name, dollar, cent);
            cout << "Account Created" << endl;
            
        }
        catch (InvalidDollars)
        {
            accts[i] = new Account(name);
            cout << "You entered an invalid dollar amount. Created empty account. \n";
        }
        
        catch (InvalidCents)
        {
            accts[i]= new Account(name);
            cout << "You enterd an invalid cents amount. Created empty account. \n";
        }
    }
  
    cout << "Current Accounts:" << endl;
    
    for(int index = 0; index < Size; index++)
    {
        cout << "Account Number: " << accts[index]->get_account_number() << endl;
        cout << "Account holder name: " << accts[index]->get_name() << endl;
        cout << "Dollars: " << accts[index]->get_dollars() << endl;
        cout << "Cents: " << accts[index]->get_cents() << endl;
    }
    
    return 0;
}
