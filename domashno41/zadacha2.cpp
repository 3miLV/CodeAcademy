//Напишете програма, която чете няколко изречения от конзола и ги обръща.
#include <iostream>
#include <algorithm>

int main(int argc, char* argv[]){

    std::string str ;
    std::getline(std::cin, str);
    std::reverse(str.begin(), str.end());
    std::cout << str << '\n';

    return 0;
}
