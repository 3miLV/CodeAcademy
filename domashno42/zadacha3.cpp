/*
Напишете програма, която чете N цели числа от конзола и ги обръща с
помощта на стек
*/
#include <iostream>
#include <algorithm>
#include <stack>

void print(std::stack<int> numStack)
{
    while(!numStack.empty())
    {
        std::cout << numStack.top() << " ";
        numStack.pop();
    }
}

int main()
{
    int n;
    std::stack<int> iNums ;
    while(n != 0){
        std::cin >> n;
        iNums.push(n);
    }
    iNums.pop(); //remove last 0 element
    print(iNums);
}