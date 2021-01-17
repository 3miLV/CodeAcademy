/*
Дадена е следната последователност:
S1 = N;
S2 = S1 + 1;
S3 = 2*S1 + 1;
S4 = S1 + 2;
S5 = S2 + 1;
S6 = 2*S2 + 1;
S7 = S2 + 2;
...
Напишете програма, за да отпечатате първите 100 елемента за
зададено N. Използвайте опашка.
Пример: N = 2
Последователност: 2, 3, 5, 4, 4, 7, 5, 6, 11, 7, 5, 9, 6, ...
*/

#include <iostream>
#include <queue>
#include <iterator>
#include <algorithm>

int main()
{
    int N=2, i = 1, S1,S2,S3,S4;
    std::queue<int> iQueue;
    S1 = N;
    iQueue.push(S1);
    while(i <= 100)
    {
        S2 = S1 + 1;
        S3 = 2 * S1 + 1;
        S4 = S1 + 2;
        S1 = S2;
        iQueue.push(S2);
        iQueue.push(S3);
        iQueue.push(S4);
        i++;

        
    }

    //auto it = iQueue.front();
    while(!iQueue.empty()){
        std::cout << iQueue.front()<< " ";
        iQueue.pop();
    }
}