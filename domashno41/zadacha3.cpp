/*
Напишете програма, която премахва от дадена последователност всички
числа, които са степен на двойката.
*/

#include <iostream>
#include <iterator>
#include <vector>
#include <cmath>

int main(){
    std::vector<int> iVect{16, 22, 9, 876, 225, 3, 89, 13, 67, 4};
    std::vector<int>::iterator it = iVect.begin();
    if(fmod(*it, sqrt(*it)) == 0)
        iVect.erase(it);
    while(it != iVect.end()){
        it++;
        if(fmod(*it, sqrt(*it)) == 0){
            iVect.erase(it);
        }
    }
    std::vector<int>::iterator it1 = iVect.begin();
    while(it1 != iVect.end()){
        std::cout << *it1 << " ";
        ++it1;
    }
    std::cout << '\n';
    return 0;
}
