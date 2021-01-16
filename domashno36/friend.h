#ifndef _FRIEND_H_
#define _FRIEND_H_
#include <iostream>

class Friend{
private:
    std::string name;
    int weight;
    int age;
public:
    std::string getName() const;
    int getWeight() const;
    int getAge() const;
    void setName(std::string name);
    void setWeight(int weight);
    void setAge(int age);
    Friend();
    Friend(std::string name, int weight, int age);
    Friend(const Friend&);
    ~Friend();
};
#endif