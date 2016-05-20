
#include <iostream>
#include <sstream>

#include "../include/boomslangcore.h"

//Constructors
boomslang_Number::boomslang_Number(){data = 0;}
boomslang_Number::~boomslang_Number(){}
boomslang_Number::boomslang_Number(const double& d){data = d;}
boomslang_Number::boomslang_Number(const int& i){data = i;}
boomslang_Number::boomslang_Number(const bool& b){data = b;}
boomslang_Number::boomslang_Number(const boomslang_Byte& b){data = b.data;}
boomslang_Number::boomslang_Number(const boomslang_Boolean& b){data = b.data;}

boomslang_Number::operator bool(){
    return data;
}

//Assignment
void boomslang_Number::operator=(boomslang_Number other){
    data = other.data;
}

//Addition
boomslang_Number boomslang_Number::operator+(const boomslang_Number& other){
    return this->data + other.data;
}

//Subtraction
boomslang_Number boomslang_Number::operator-(const boomslang_Number& other){
    return this->data - other.data;
}

//Oppisite
boomslang_Number boomslang_Number::operator-(){
    return boomslang_Number(-data);
}

//Multiplication
boomslang_Number boomslang_Number::operator*(const boomslang_Number& other){
    return this->data * other.data;
}

//Division
boomslang_Number boomslang_Number::operator/(const boomslang_Number& other){
    return this->data / other.data;
}

//Conversion
boomslang_String boomslang_Number::boomslang_string(){
    std::stringstream conversion;
    conversion << data;
    return boomslang_String(conversion.str());
}

//Comparison
bool boomslang_Number::operator==(boomslang_Number other){
    return (data == other.data);
}
bool boomslang_Number::operator>(boomslang_Number other){
    return (data > other.data);
}
bool boomslang_Number::operator<(boomslang_Number other){
    return (data < other.data);
}
bool boomslang_Number::operator>=(boomslang_Number other){
    return (data >= other.data);
}
bool boomslang_Number::operator<=(boomslang_Number other){
    return (data <= other.data);
}

//Console methods
void boomslang_Number::boomslang_output(){
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_Number::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if( ! (std::istringstream(input) >> data) ) data = 0;
}
void boomslang_Number::boomslang_print(){
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
