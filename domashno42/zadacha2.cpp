/*
Напишете метод, който намира най-дългата последователност
на еднакви числа в даден масив. Използвайте свързан списък.
*/
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>



int main(){
    int temp = 1, count = 1, elem = 0, counts=0;
    std::list<int> iList{1,2,2,2,3,3,4,4,4,4,4,5,5,6,7,4,8,9,9,9};
    //std::sort(iVect.begin(), iVect.end());
    std::list<int>::iterator it = iList.begin();
    while (it != iList.end()){
        ++it;
        if(*it == *next(it)){
            temp++;
        }else{
            if(temp > count){
                count = temp;
                elem = *it;
            }
            temp = 1;
        }
    }
    if(count == 1){
        std::cout << "Няма повтарящи се елементи";
    }else
        std::cout << "Най голяма последователост е на елемент: " << elem << ", " << count << " пъти." << std::endl;

    return 0;
}

