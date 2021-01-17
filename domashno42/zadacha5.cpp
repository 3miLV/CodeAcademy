/*
Напишете програма, която намира колко пъти цели числа се срещат в
даден масив.
Пример: масив = {3, 4, 4, 2, 3, 3, 4, 3, 2}
2  2 пъти
3  4 пъти
4  3 пъти
*/
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main(){
    int temp = 1, count = 1, elem = 0, counts=0;
    std::vector<int> iVect{1,2,2,2,3,3,4,4,4,4,4,5,5,6,7,4,8,9,9,9};
    std::sort(iVect.begin(), iVect.end());
    std::vector<int>::iterator it = iVect.begin();
    while (it != iVect.end()){
        if(*it == *next(it)){
            temp++;
        }else{
            count = temp;
            elem = *it;
            std::cout << "елемент: "<< elem << " се среща: " << temp << " пъти" <<std::endl;
            temp = 1;
        } 
        it++;
    }
    if(count == 1){
        std::cout << "Няма повтарящи се елементи";
    }else
        std::cout << "Най голяма последователост е на елемент: " << elem << ", " << count << " пъти." << std::endl;

    return 0;
}