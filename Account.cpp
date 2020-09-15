#include <string>
#include "Account.h"


//static count of accounts
int Account::count = 1;

//static function to increment accounts
int Account::make_account_number()
{
    return count++;
}

//constructors
Account::Account()  //Create an Account with no arguments passed
{
    account_number = make_account_number();
    dollars = 0;
    cents = 0;
    name = "";
}

Account::Account(std::string n) //Create an Account with only a name argument
{
    account_number = make_account_number();
    name = n;
    dollars = 0;
    cents= 0;
}

Account::Account(std::string n, int d, int c) //Create Account with name, dollars, and cents arguments
{
    account_number = make_account_number();
    set_name(n);
    set_dollars(d);
    set_cents(c);
}

//getters
int Account::get_account_number()
{
    return account_number;
}

int Account::get_dollars()
{
    return dollars;
}

int Account::get_cents()
{
    return cents;
}

std::string Account::get_name()
{
    return name;
}

//setters
void Account::set_dollars(int d)
{
    if (d >= 0)
        dollars = d;
    else
    {
        throw InvalidDollars();
    }
}

void Account::set_cents(int c)
{
    if (c >= 0 && c < 100)
        cents = c;
    else
    {
        throw InvalidCents();
    }
}

void Account::set_name(std::string n)
{
    name = n;
}
