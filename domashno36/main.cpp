#include "friend.h"
#include "account.h"

int main(){
    Friend myFriend;
    myFriend.setName("Pesho Peshev");
    myFriend.setWeight(85);
    myFriend.setAge(30);
    Friend *otherFriend = new Friend("Petar Petrov", 76, 43);
    std::cout << myFriend.getName() << " тежи " << myFriend.getWeight() << " килограма и е на " << myFriend.getAge() << " години"<< std::endl;
    std::cout << otherFriend->getName() << std::endl;
    delete otherFriend;
    Friend last(Friend("Ivan", 99, 33));
    std::cout << last.getName() << std::endl;

    Account acc1(23.20);
    Account acc2(26.20);
    Account compare;
    std::string rez = compare.compare_balance(acc1.getBalance(), acc1.getBalance());
    std::cout << rez << std::endl;
    return 0;
}