#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>

class Account{
private:
    float *balance;
    Account(const Account &source);
public:
    std::string compare_balance1(const Account &&bal2);
    std::string compare_balance(const Account &&bal1, const Account &&bal2);
    Account();
    Account(float bal);
    Account(Account &&source);
    //Account(float balance);
    float getBalance() const;
    ~Account();
};
#endif
