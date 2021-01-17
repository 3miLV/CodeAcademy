#include "friend.h"
#include "account.h"

int main(){
    Account acc1(Account{23.20});
    Account acc2(Account{26.20});
    //std::string rez = compare.compare_balance(acc1.getBalance(), acc1.getBalance());
    std::string rez = acc1.compare_balance(acc2.getBalance());
    std::cout << rez << std::endl;
    return 0;
}
