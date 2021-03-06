
#include <iostream>
#include <sstream>

#include "../include/boomslangcore.h"

//Constructors
boomslang_Byte::boomslang_Byte(){data = 0;}
boomslang_Byte::~boomslang_Byte(){}
boomslang_Byte::boomslang_Byte(const double& d){data = d;}
boomslang_Byte::boomslang_Byte(const int& i){data = i;}
boomslang_Byte::boomslang_Byte(const char& u){data = u;}
boomslang_Byte::boomslang_Byte(const unsigned int& u){data = u;}
boomslang_Byte::boomslang_Byte(const bool& b){data = b;}
boomslang_Byte::boomslang_Byte(const boomslang_Double& n){data = n.data;}
boomslang_Byte::boomslang_Byte(const boomslang_Integer& n){data = n.data;}
boomslang_Byte::boomslang_Byte(const boomslang_UnsignedInteger& n){data = n.data;}

boomslang_Byte::operator char(){
    return data;
}

//Assignment
void boomslang_Byte::operator=(boomslang_Byte other){
    data = other.data;
}
void boomslang_Byte::operator+=(boomslang_Byte other){
    data += other.data;
}
void boomslang_Byte::operator-=(boomslang_Byte other){
    data -= other.data;
}
void boomslang_Byte::operator*=(boomslang_Byte other){
    data *= other.data;
}
void boomslang_Byte::operator/=(boomslang_Byte other){
    data /= other.data;
}
boomslang_Byte boomslang_Byte::operator++(int){
    return boomslang_Byte( data++ );
}
boomslang_Byte boomslang_Byte::operator--(int){
    return boomslang_Byte( data-- );
}
boomslang_Byte boomslang_Byte::operator++(){
    return boomslang_Byte( data++ );
}
boomslang_Byte boomslang_Byte::operator--(){
    return boomslang_Byte( data-- );
}

//Addition
boomslang_Byte boomslang_Byte::operator+(const boomslang_Byte& other){
    return this->data + other.data;
}
boomslang_Byte boomslang_Byte::operator+(const boomslang_Byte& other) const{
    return this->data + other.data;
}

//Subtraction
boomslang_Byte boomslang_Byte::operator-(const boomslang_Byte& other){
    return this->data - other.data;
}
boomslang_Byte boomslang_Byte::operator-(const boomslang_Byte& other) const{
    return this->data - other.data;
}

//Multiplication
boomslang_Byte boomslang_Byte::operator*(const boomslang_Byte& other){
    return this->data * other.data;
}
boomslang_Byte boomslang_Byte::operator*(const boomslang_Byte& other) const{
    return this->data * other.data;
}

//Division
boomslang_Byte boomslang_Byte::operator/(const boomslang_Byte& other){
    return this->data / other.data;
}
boomslang_Byte boomslang_Byte::operator/(const boomslang_Byte& other) const{
    return this->data / other.data;
}

//Opposite
boomslang_Byte boomslang_Byte::operator-(){
    return this->data;
}
boomslang_Byte boomslang_Byte::operator-() const{
    return this->data;
}

//Conversion
boomslang_String boomslang_Byte::boomslang_toString(){
    std::stringstream conversion;
    conversion << data;
    return boomslang_String(conversion.str());
}
boomslang_Double boomslang_Byte::boomslang_toDouble(){
    return boomslang_Double(data);
}
boomslang_Float boomslang_Byte::boomslang_toFloat(){
    return boomslang_Float(data);
}
boomslang_UnsignedInteger boomslang_Byte::boomslang_toUnsignedInteger(){
    if(data >= 0){
        return boomslang_UnsignedInteger(data);
    }
    else {
        return boomslang_UnsignedInteger(-data);
    }
}
boomslang_Integer boomslang_Byte::boomslang_toInteger(){
    return boomslang_Integer(data);
}
boomslang_Boolean boomslang_Byte::boomslang_toBoolean(){
    if(data == 1){
        return boomslang_Boolean(true);
    }
    else {
        return boomslang_Boolean(false);
    }
}

//Comparison
bool boomslang_Byte::operator==(boomslang_Byte other){
    return (data == other.data);
}
bool boomslang_Byte::operator==(boomslang_Byte other) const{
    return (data == other.data);
}
bool boomslang_Byte::operator!=(boomslang_Byte other){
    return !(data == other.data);
}
bool boomslang_Byte::operator!=(boomslang_Byte other) const{
    return !(data == other.data);
}
bool boomslang_Byte::operator>(boomslang_Byte other){
    return (data > other.data);
}
bool boomslang_Byte::operator>(boomslang_Byte other) const{
    return (data > other.data);
}
bool boomslang_Byte::operator<(boomslang_Byte other){
    return (data < other.data);
}
bool boomslang_Byte::operator<(boomslang_Byte other) const{
    return (data < other.data);
}
bool boomslang_Byte::operator>=(boomslang_Byte other){
    return (data >= other.data);
}
bool boomslang_Byte::operator>=(boomslang_Byte other) const{
    return (data >= other.data);
}
bool boomslang_Byte::operator<=(boomslang_Byte other){
    return (data <= other.data);
}
bool boomslang_Byte::operator<=(boomslang_Byte other) const{
    return (data <= other.data);
}

//Console methods
void boomslang_Byte::boomslang_output() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_Byte::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if( ! (std::istringstream(input) >> data) ) data = 0;
}
void boomslang_Byte::boomslang_print() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
