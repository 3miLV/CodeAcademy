#include "friend.h"

Friend::Friend(){
    std::cout << "constructor" << std::endl;
};

Friend::Friend(std::string name, int weight, int age){
    this->name = name;
    this->weight = weight;
    this->age = age;
};

Friend::~Friend(){
    std::cout << "destructor" << std::endl;
};

void Friend::setName(std::string name){
    this->name = name;
}

void Friend::setWeight(int weight){
    this->weight = weight;
}

void Friend::setAge(int age){
    this->age = age;
}

std::string Friend::getName() const{
    return name;
}

int Friend::getWeight() const{
    return weight;
}

int Friend::getAge() const{
    return age;
}