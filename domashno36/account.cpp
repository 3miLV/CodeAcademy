#include "account.h"

Account::Account(){

};

Account::Account(float balance){
    this->balance = &balance;
};

float Account::getBalance() const{
    return *balance;
}

Account::Account(Account &&source)
    :balance(source.balance){
        source.balance = nullptr;
    }


 std::string Account::compare_balance(const Account &&bal1, const Account &&bal2){
     std::cout << &bal1 << " " << &bal2 << std::endl;
    if(&bal1 == &bal2){
        return "подали сте един и същ обект.";
    }
    if(bal1.balance < bal2.balance){
        return "баланс2 е поголям от баланс1.";
    }
    else if(bal1.balance > bal2.balance){
         return "баланс1 е поголям от баланс2.";
    }
    return "балансите са равни";
}