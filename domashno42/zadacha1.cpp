/*Напишете програма, която чете от конзолата последователност от
положителни цели числа. Последователността приключва, когато се
въведе числото 0. Изчислете и отпечатайте сумата и средно
аритметичната стойност на всички елементи от последователността.
Използвайте свързан списък. */

#include <iostream>
#include <list>

int sum(std::list<int> my_list)
{
    int result = 0;
    while(!my_list.empty())
    {
        result += my_list.back();
        my_list.pop_back();
    }
    return result;
}

int main()
{
    int num = 1;
    std::list<int> num_list;
    while(num != 0)
    {
        std::cin >> num;
        num_list.push_back(num);
    }
    num_list.pop_back(); // remove last 0 element
    std::cout << sum(num_list) << std::endl;
    if(num_list.empty())
        std::cout << "списъкът е празен" << std::endl;
        exit(1);
    if(num_list.size() == 1)
        std::cout << num_list.front() << std::endl;
    else
        std::cout << (double)sum(num_list) / (num_list.size()) << std::endl;
    return 0;
}
