

#include <iostream>
#include <sstream>

#include "../include/boomslangcore.h"

//Constructors
boomslang_Byte::boomslang_Byte(){data = 0;}
boomslang_Byte::~boomslang_Byte(){}
boomslang_Byte::boomslang_Byte(const double& d){data = d;}
boomslang_Byte::boomslang_Byte(const int& i){data = i;}
boomslang_Byte::boomslang_Byte(const bool& b){data = b;}
boomslang_Byte::boomslang_Byte(const boomslang_Number& n){data = n.data;}

boomslang_Byte::operator bool(){
    return data;
}

//Assignment
void boomslang_Byte::operator=(boomslang_Byte other){
    data = other.data;
}

//Addition
boomslang_Byte boomslang_Byte::operator+(const boomslang_Byte& other){
    return this->data + other.data;
}

//Subtraction
boomslang_Byte boomslang_Byte::operator-(const boomslang_Byte& other){
    return this->data - other.data;
}

//Multiplication
boomslang_Byte boomslang_Byte::operator*(const boomslang_Byte& other){
    return this->data * other.data;
}

//Division
boomslang_Byte boomslang_Byte::operator/(const boomslang_Byte& other){
    return this->data / other.data;
}

//Comparison
bool boomslang_Byte::operator==(boomslang_Byte other){
    return (data == other.data);
}

//Console methods
void boomslang_Byte::boomslang_output(){
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_Byte::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if( ! (std::istringstream(input) >> data) ) data = 0;
}
void boomslang_Byte::boomslang_print(){
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
