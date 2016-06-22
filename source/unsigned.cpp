
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <math.h>

#include "../include/boomslangcore.h"

//Constructors
boomslang_UnsignedInteger::boomslang_UnsignedInteger(){data = 0;}
boomslang_UnsignedInteger::~boomslang_UnsignedInteger(){}
boomslang_UnsignedInteger::boomslang_UnsignedInteger(const double& d){
    if(d >= 0){
        data = floor(d);
    }
    else {
        data = floor(-d);
    }
}
boomslang_UnsignedInteger::boomslang_UnsignedInteger(const int32_t& i){data = i;}
boomslang_UnsignedInteger::boomslang_UnsignedInteger(const bool& b){data = b;}
boomslang_UnsignedInteger::boomslang_UnsignedInteger(const uint32_t& u){data = u;}
boomslang_UnsignedInteger::boomslang_UnsignedInteger(const boomslang_Byte& b){data = b.data;}
boomslang_UnsignedInteger::boomslang_UnsignedInteger(const boomslang_Boolean& b){data = b.data;}
boomslang_UnsignedInteger::boomslang_UnsignedInteger(const boomslang_Number& b){
    if(b.data >= 0){
        data = floor(b.data);
    }
    else {
        data = floor(-b.data);
    }
}

boomslang_UnsignedInteger::operator bool(){
    return data;
}
boomslang_UnsignedInteger::operator int(){
    return data;
}
boomslang_UnsignedInteger::operator unsigned int(){
    return data;
}
boomslang_UnsignedInteger::operator double(){
    return data;
}
boomslang_UnsignedInteger::operator float(){
    return data;
}

//Assignment
void boomslang_UnsignedInteger::operator=(boomslang_UnsignedInteger other){
    data = other.data;
}
//Addition Assignment
void boomslang_UnsignedInteger::operator+=(boomslang_UnsignedInteger other){
    data += other.data;
}
//Subtraction Assignment
void boomslang_UnsignedInteger::operator-=(boomslang_UnsignedInteger other){
    data -= other.data;
}
//Multiplication Assignment
void boomslang_UnsignedInteger::operator*=(boomslang_UnsignedInteger other){
    data *= other.data;
}
//Division Assignment
void boomslang_UnsignedInteger::operator/=(boomslang_UnsignedInteger other){
    data /= other.data;
}

//Addition
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator+(const boomslang_UnsignedInteger& other){
    return this->data + other.data;
}
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator+(const boomslang_UnsignedInteger& other) const{
    return this->data + other.data;
}

//Subtraction
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator-(const boomslang_UnsignedInteger& other){
    return this->data - other.data;
}
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator-(const boomslang_UnsignedInteger& other) const{
    return this->data - other.data;
}

//Multiplication
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator*(const boomslang_UnsignedInteger& other){
    return this->data * other.data;
}
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator*(const boomslang_UnsignedInteger& other) const{
    return this->data * other.data;
}

//Division
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator/(const boomslang_UnsignedInteger& other){
    return this->data / other.data;
}
boomslang_UnsignedInteger boomslang_UnsignedInteger::operator/(const boomslang_UnsignedInteger& other) const{
    return this->data / other.data;
}

//Conversion
boomslang_String boomslang_UnsignedInteger::boomslang_toString(){
    std::stringstream conversion;
    conversion << data;
    return boomslang_String(conversion.str());
}
boomslang_Number boomslang_UnsignedInteger::boomslang_toNumber(){
    return boomslang_Number(data);
}
boomslang_Integer boomslang_UnsignedInteger::boomslang_toInteger(){
    return boomslang_Integer(data);
}

//Comparison
bool boomslang_UnsignedInteger::operator==(boomslang_UnsignedInteger other){
    return (data == other.data);
}
bool boomslang_UnsignedInteger::operator==(boomslang_UnsignedInteger other) const{
    return (data == other.data);
}
bool boomslang_UnsignedInteger::operator!=(boomslang_UnsignedInteger other){
    return !(data == other.data);
}
bool boomslang_UnsignedInteger::operator!=(boomslang_UnsignedInteger other) const{
    return !(data == other.data);
}
bool boomslang_UnsignedInteger::operator>(boomslang_UnsignedInteger other){
    return (data > other.data);
}
bool boomslang_UnsignedInteger::operator>(boomslang_UnsignedInteger other) const{
    return (data > other.data);
}
bool boomslang_UnsignedInteger::operator<(boomslang_UnsignedInteger other){
    return (data < other.data);
}
bool boomslang_UnsignedInteger::operator<(boomslang_UnsignedInteger other) const{
    return (data < other.data);
}
bool boomslang_UnsignedInteger::operator>=(boomslang_UnsignedInteger other){
    return (data >= other.data);
}
bool boomslang_UnsignedInteger::operator>=(boomslang_UnsignedInteger other) const{
    return (data >= other.data);
}
bool boomslang_UnsignedInteger::operator<=(boomslang_UnsignedInteger other){
    return (data <= other.data);
}
bool boomslang_UnsignedInteger::operator<=(boomslang_UnsignedInteger other) const{
    return (data <= other.data);
}

//Console methods
void boomslang_UnsignedInteger::boomslang_output(){
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_UnsignedInteger::boomslang_output() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_UnsignedInteger::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if( ! (std::istringstream(input) >> data) ) data = 0;
}
void boomslang_UnsignedInteger::boomslang_print(){
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
void boomslang_UnsignedInteger::boomslang_print() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}

