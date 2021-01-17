#include "account.h"

Account::Account(){

};

Account::Account(float bal){
    balance = new float;
    *balance = bal;
};

float Account::getBalance() const{
    return *balance;
}

Account::Account(Account &&source)
    :balance(source.balance){
        source.balance = nullptr;
        std::cout<< "Move constructor  data "<< *balance << std::endl;
    }

Account::~Account(){
    if(balance != nullptr){
        std::cout << "Destuctor free data for " << *balance << std::endl;
    }else{
        std::cout << "Destructor free data from nullptr " << *balance << std::endl;
    }
    delete balance;
}


 std::string Account::compare_balance(const Account &&bal1){
    std::cout << this->balance << " " << bal1.balance << std::endl;
    if(this->balance == bal1.balance){
        return "подали сте един и същ обект.";
    }
    if(*this->balance < *bal1.balance){
        return "баланс2 е поголям от баланс1.";
    }
    else if(*this->balance > *bal1.balance){
         return "баланс1 е поголям от баланс2.";
    }
    return "балансите са равни";
}
