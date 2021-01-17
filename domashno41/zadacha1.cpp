/*
Напишете програма, която намира най-дългата последователност във
вектор. Използвайте итератор.
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main(){
    int temp = 1, count = 1, elem = 0, counts=0;
    std::vector<int> iVect{1,2,2,2,3,3,4,4,4,4,4,5,5,6,7,4,8,9,9,9};
    //std::sort(iVect.begin(), iVect.end());
    std::vector<int>::iterator it = iVect.begin();
    while (it != iVect.end()){
        ++it;
        if(*it == *(it + 1)){
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

    auto rez = std::adjacent_find (iVect.begin(), iVect.end());
    //if(rez != iVect.end()){
    //    std::cout << *rez << std::endl;
    //}
    return 0;
}
