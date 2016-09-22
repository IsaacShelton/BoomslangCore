
#include <iostream>
#include <sstream>
#include <math.h>

#include "../include/boomslangcore.h"

//Constructors
boomslang_Integer::boomslang_Integer(){data = 0;}
boomslang_Integer::~boomslang_Integer(){}
boomslang_Integer::boomslang_Integer(const double& d){
    if(d >= 0){
        data = floor(d);
    }
    else {
        data = floor(-d);
    }
}
boomslang_Integer::boomslang_Integer(const bool& b){data = b;}
boomslang_Integer::boomslang_Integer(const unsigned int& u){data = u;}
boomslang_Integer::boomslang_Integer(const int& i){data = i;}
boomslang_Integer::boomslang_Integer(const boomslang_Byte& b){data = b.data;}
boomslang_Integer::boomslang_Integer(const boomslang_Boolean& b){data = b.data;}
boomslang_Integer::boomslang_Integer(const boomslang_Double& b){
    data = floor(b.data);
}

boomslang_Integer::operator int(){
    return data;
}

//Assignment
void boomslang_Integer::operator=(boomslang_Integer other){
    data = other.data;
}
//Addition Assignment
void boomslang_Integer::operator+=(boomslang_Integer other){
    data += other.data;
}
//Subtraction Assignment
void boomslang_Integer::operator-=(boomslang_Integer other){
    data -= other.data;
}
//Multiplication Assignment
void boomslang_Integer::operator*=(boomslang_Integer other){
    data *= other.data;
}
//Division Assignment
void boomslang_Integer::operator/=(boomslang_Integer other){
    data /= other.data;
}
boomslang_Integer boomslang_Integer::operator++(int){
    return boomslang_Integer( data++ );
}
boomslang_Integer boomslang_Integer::operator--(int){
    return boomslang_Integer( data-- );
}
boomslang_Integer boomslang_Integer::operator++(){
    return boomslang_Integer( data++ );
}
boomslang_Integer boomslang_Integer::operator--(){
    return boomslang_Integer( data-- );
}

//Addition
boomslang_Integer boomslang_Integer::operator+(const boomslang_Integer& other){
    return this->data + other.data;
}
boomslang_Integer boomslang_Integer::operator+(const boomslang_Integer& other) const{
    return this->data + other.data;
}

//Subtraction
boomslang_Integer boomslang_Integer::operator-(const boomslang_Integer& other){
    return this->data - other.data;
}
boomslang_Integer boomslang_Integer::operator-(const boomslang_Integer& other) const{
    return this->data - other.data;
}

//Multiplication
boomslang_Integer boomslang_Integer::operator*(const boomslang_Integer& other){
    return this->data * other.data;
}
boomslang_Integer boomslang_Integer::operator*(const boomslang_Integer& other) const{
    return this->data * other.data;
}

//Division
boomslang_Integer boomslang_Integer::operator/(const boomslang_Integer& other){
    return this->data / other.data;
}
boomslang_Integer boomslang_Integer::operator/(const boomslang_Integer& other) const{
    return this->data / other.data;
}

//Opposite
boomslang_Integer boomslang_Integer::operator-(){
    return -this->data;
}
boomslang_Integer boomslang_Integer::operator-() const{
    return -this->data;
}

//Conversion
boomslang_String boomslang_Integer::boomslang_toString(){
    std::stringstream conversion;
    conversion << data;
    return boomslang_String(conversion.str());
}
boomslang_Double boomslang_Integer::boomslang_toDouble(){
    return boomslang_Double(data);
}
boomslang_UnsignedInteger boomslang_Integer::boomslang_toUnsignedInteger(){
    if(data >= 0){
        return boomslang_UnsignedInteger(data);
    }
    else {
        return boomslang_UnsignedInteger(-data);
    }
}
boomslang_Byte boomslang_Integer::boomslang_toByte(){
    return boomslang_Byte(data);
}
boomslang_Boolean boomslang_Integer::boomslang_toBoolean(){
    if(data == 1){
        return boomslang_Boolean(true);
    }
    else {
        return boomslang_Boolean(false);
    }
}
boomslang_Float boomslang_Integer::boomslang_toFloat(){
    return boomslang_Float(data);
}

//Comparison
bool boomslang_Integer::operator==(boomslang_Integer other){
    return (data == other.data);
}
bool boomslang_Integer::operator==(boomslang_Integer other) const{
    return (data == other.data);
}
bool boomslang_Integer::operator!=(boomslang_Integer other){
    return !(data == other.data);
}
bool boomslang_Integer::operator!=(boomslang_Integer other) const{
    return !(data == other.data);
}
bool boomslang_Integer::operator>(boomslang_Integer other){
    return (data > other.data);
}
bool boomslang_Integer::operator>(boomslang_Integer other) const{
    return (data > other.data);
}
bool boomslang_Integer::operator<(boomslang_Integer other){
    return (data < other.data);
}
bool boomslang_Integer::operator<(boomslang_Integer other) const{
    return (data < other.data);
}
bool boomslang_Integer::operator>=(boomslang_Integer other){
    return (data >= other.data);
}
bool boomslang_Integer::operator>=(boomslang_Integer other) const{
    return (data >= other.data);
}
bool boomslang_Integer::operator<=(boomslang_Integer other){
    return (data <= other.data);
}
bool boomslang_Integer::operator<=(boomslang_Integer other) const{
    return (data <= other.data);
}

//Console methods
void boomslang_Integer::boomslang_output() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_Integer::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if( ! (std::istringstream(input) >> data) ) data = 0;
}
void boomslang_Integer::boomslang_print() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
