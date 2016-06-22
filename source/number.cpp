
#include <iostream>
#include <sstream>
#include <math.h>

#include "../include/boomslangcore.h"

//Constructors
boomslang_Number::boomslang_Number(){data = 0;}
boomslang_Number::~boomslang_Number(){}
boomslang_Number::boomslang_Number(const double& d){data = d;}
boomslang_Number::boomslang_Number(const int& i){data = i;}
boomslang_Number::boomslang_Number(const bool& b){data = b;}
boomslang_Number::boomslang_Number(const uint32_t& b){data = b;}
boomslang_Number::boomslang_Number(const boomslang_Byte& b){data = b.data;}
boomslang_Number::boomslang_Number(const boomslang_Boolean& b){data = b.data;}
boomslang_Number::boomslang_Number(const boomslang_UnsignedInteger& b){data = b.data;}

boomslang_Number::operator bool(){
    return data;
}
boomslang_Number::operator int(){
    return data;
}
boomslang_Number::operator unsigned int(){
    return data;
}
boomslang_Number::operator double(){
    return data;
}
boomslang_Number::operator float(){
    return data;
}
boomslang_Number::operator boomslang_Integer(){
    return boomslang_Integer( (int)(data) );
}
boomslang_Number::operator boomslang_UnsignedInteger(){
    return boomslang_UnsignedInteger( (unsigned int)(data) );
}
boomslang_Number::operator boomslang_Byte(){
    return boomslang_Byte( (uint8_t)(data) );
}


//Assignment
void boomslang_Number::operator=(boomslang_Number other){
    data = other.data;
}
//Addition Assignment
void boomslang_Number::operator+=(boomslang_Number other){
    data += other.data;
}
//Subtraction Assignment
void boomslang_Number::operator-=(boomslang_Number other){
    data -= other.data;
}
//Multiplication Assignment
void boomslang_Number::operator*=(boomslang_Number other){
    data *= other.data;
}
//Division Assignment
void boomslang_Number::operator/=(boomslang_Number other){
    data /= other.data;
}

//Addition
boomslang_Number boomslang_Number::operator+(const boomslang_Number& other){
    return this->data + other.data;
}
boomslang_Number boomslang_Number::operator+(const boomslang_Number& other) const{
    return this->data + other.data;
}

//Subtraction
boomslang_Number boomslang_Number::operator-(const boomslang_Number& other){
    return this->data - other.data;
}
boomslang_Number boomslang_Number::operator-(const boomslang_Number& other) const{
    return this->data - other.data;
}

//Oppisite
boomslang_Number boomslang_Number::operator-(){
    return boomslang_Number(-data);
}
boomslang_Number boomslang_Number::operator-() const{
    return boomslang_Number(-data);
}

//Multiplication
boomslang_Number boomslang_Number::operator*(const boomslang_Number& other){
    return this->data * other.data;
}
boomslang_Number boomslang_Number::operator*(const boomslang_Number& other) const{
    return this->data * other.data;
}

//Division
boomslang_Number boomslang_Number::operator/(const boomslang_Number& other){
    return this->data / other.data;
}
boomslang_Number boomslang_Number::operator/(const boomslang_Number& other) const{
    return this->data / other.data;
}

//Conversion
boomslang_String boomslang_Number::boomslang_toString(){
    std::stringstream conversion;
    conversion << data;
    return boomslang_String(conversion.str());
}
boomslang_UnsignedInteger boomslang_Number::boomslang_toUnsignedInteger(){
    if(data >= 0){
        return boomslang_UnsignedInteger(floor(data));
    }
    else {
        return boomslang_UnsignedInteger(floor(-data));
    }
}
boomslang_Integer boomslang_Number::boomslang_toInteger(){
    return boomslang_Integer(data);
}
boomslang_Byte boomslang_Number::boomslang_toByte(){
    return boomslang_Byte(data);
}

//Comparison
bool boomslang_Number::operator==(boomslang_Number other){
    return (data == other.data);
}
bool boomslang_Number::operator==(boomslang_Number other) const{
    return (data == other.data);
}
bool boomslang_Number::operator!=(boomslang_Number other){
    return !(data == other.data);
}
bool boomslang_Number::operator!=(boomslang_Number other) const{
    return !(data == other.data);
}
bool boomslang_Number::operator>(boomslang_Number other){
    return (data > other.data);
}
bool boomslang_Number::operator>(boomslang_Number other) const{
    return (data > other.data);
}
bool boomslang_Number::operator<(boomslang_Number other){
    return (data < other.data);
}
bool boomslang_Number::operator<(boomslang_Number other) const{
    return (data < other.data);
}
bool boomslang_Number::operator>=(boomslang_Number other){
    return (data >= other.data);
}
bool boomslang_Number::operator>=(boomslang_Number other) const{
    return (data >= other.data);
}
bool boomslang_Number::operator<=(boomslang_Number other){
    return (data <= other.data);
}
bool boomslang_Number::operator<=(boomslang_Number other) const{
    return (data <= other.data);
}

//Console methods
void boomslang_Number::boomslang_output(){
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_Number::boomslang_output() const{
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
void boomslang_Number::boomslang_print() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
