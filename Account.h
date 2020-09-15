#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class InvalidDollars{};
class InvalidCents{};

class Account{
private:
    int account_number;               //the account number
    int dollars;                      //the account dollar value
    int cents;                        //the account cents value
    std::string name;                 //account holder name
    static int count;                 //holds the current number of accounts
    static int make_account_number(); //returns the next available account number

public:
    //constructors
    Account();  //Create an Account with no arguments passed
    Account(std::string n); //Create an Account with only a name argument
    Account(std::string n, int d, int c); //Create an Account with name, dollars, and cents arguments

    //getters
    int get_account_number(); //get the account number
    int get_dollars();        //get the dollar value
    int get_cents();          //get the cents value
    std::string get_name();   //get the account holder name

    //setters
    void set_dollars(int d);  //set the dollar value
    void set_cents(int c);    //set the cents value
    void set_name(std::string n);//set the account holder name
};

#endif
