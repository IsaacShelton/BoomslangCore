
#include <iostream>
#include <sstream>
#include <math.h>

#include "../include/boomslangcore.h"

//Constructors
boomslang_Float::boomslang_Float(){data = 0;}
boomslang_Float::~boomslang_Float(){}
boomslang_Float::boomslang_Float(const double& d){data = d;}
boomslang_Float::boomslang_Float(const float& d){data = d;}
boomslang_Float::boomslang_Float(const int& i){data = i;}
boomslang_Float::boomslang_Float(const bool& b){data = b;}
boomslang_Float::boomslang_Float(const unsigned int& b){data = b;}
boomslang_Float::boomslang_Float(const boomslang_Byte& b){data = b.data;}
boomslang_Float::boomslang_Float(const boomslang_Boolean& b){data = b.data;}
boomslang_Float::boomslang_Float(const boomslang_UnsignedInteger& b){data = b.data;}

boomslang_Float::operator double(){
    return data;
}
boomslang_Float::operator boomslang_Integer(){
    return boomslang_Integer( (int)(data) );
}
boomslang_Float::operator boomslang_UnsignedInteger(){
    return boomslang_UnsignedInteger( (unsigned int)(data) );
}
boomslang_Float::operator boomslang_Byte(){
    return boomslang_Byte( (char)(data) );
}


//Assignment
void boomslang_Float::operator=(boomslang_Float other){
    data = other.data;
}
//Addition Assignment
void boomslang_Float::operator+=(boomslang_Float other){
    data += other.data;
}
//Subtraction Assignment
void boomslang_Float::operator-=(boomslang_Float other){
    data -= other.data;
}
//Multiplication Assignment
void boomslang_Float::operator*=(boomslang_Float other){
    data *= other.data;
}
//Division Assignment
void boomslang_Float::operator/=(boomslang_Float other){
    data /= other.data;
}
boomslang_Float boomslang_Float::operator++(int){
    return boomslang_Float( data++ );
}
boomslang_Float boomslang_Float::operator--(int){
    return boomslang_Float( data-- );
}
boomslang_Float boomslang_Float::operator++(){
    return boomslang_Float( data++ );
}
boomslang_Float boomslang_Float::operator--(){
    return boomslang_Float( data-- );
}

//Addition
boomslang_Float boomslang_Float::operator+(const boomslang_Float& other){
    return this->data + other.data;
}
boomslang_Float boomslang_Float::operator+(const boomslang_Float& other) const{
    return this->data + other.data;
}

//Subtraction
boomslang_Float boomslang_Float::operator-(const boomslang_Float& other){
    return this->data - other.data;
}
boomslang_Float boomslang_Float::operator-(const boomslang_Float& other) const{
    return this->data - other.data;
}

//Oppisite
boomslang_Float boomslang_Float::operator-(){
    return boomslang_Float(-data);
}
boomslang_Float boomslang_Float::operator-() const{
    return boomslang_Float(-data);
}

//Multiplication
boomslang_Float boomslang_Float::operator*(const boomslang_Float& other){
    return this->data * other.data;
}
boomslang_Float boomslang_Float::operator*(const boomslang_Float& other) const{
    return this->data * other.data;
}

//Division
boomslang_Float boomslang_Float::operator/(const boomslang_Float& other){
    return this->data / other.data;
}
boomslang_Float boomslang_Float::operator/(const boomslang_Float& other) const{
    return this->data / other.data;
}

//Conversion
boomslang_String boomslang_Float::boomslang_toString(){
    std::stringstream conversion;
    conversion << data;
    return boomslang_String(conversion.str());
}
boomslang_UnsignedInteger boomslang_Float::boomslang_toUnsignedInteger(){
    if(data >= 0){
        return boomslang_UnsignedInteger(floor(data));
    }
    else {
        return boomslang_UnsignedInteger(floor(-data));
    }
}
boomslang_Integer boomslang_Float::boomslang_toInteger(){
    return boomslang_Integer(data);
}
boomslang_Byte boomslang_Float::boomslang_toByte(){
    return boomslang_Byte(data);
}
boomslang_Boolean boomslang_Float::boomslang_toBoolean(){
    if(data == 1){
        return boomslang_Boolean(true);
    }
    else {
        return boomslang_Boolean(false);
    }
}
boomslang_Double boomslang_Float::boomslang_toDouble(){
    return boomslang_Double(data);
}

//Comparison
bool boomslang_Float::operator==(boomslang_Float other){
    return (data == other.data);
}
bool boomslang_Float::operator==(boomslang_Float other) const{
    return (data == other.data);
}
bool boomslang_Float::operator!=(boomslang_Float other){
    return !(data == other.data);
}
bool boomslang_Float::operator!=(boomslang_Float other) const{
    return !(data == other.data);
}
bool boomslang_Float::operator>(boomslang_Float other){
    return (data > other.data);
}
bool boomslang_Float::operator>(boomslang_Float other) const{
    return (data > other.data);
}
bool boomslang_Float::operator<(boomslang_Float other){
    return (data < other.data);
}
bool boomslang_Float::operator<(boomslang_Float other) const{
    return (data < other.data);
}
bool boomslang_Float::operator>=(boomslang_Float other){
    return (data >= other.data);
}
bool boomslang_Float::operator>=(boomslang_Float other) const{
    return (data >= other.data);
}
bool boomslang_Float::operator<=(boomslang_Float other){
    return (data <= other.data);
}
bool boomslang_Float::operator<=(boomslang_Float other) const{
    return (data <= other.data);
}

//Console methods
void boomslang_Float::boomslang_output() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_Float::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if( ! (std::istringstream(input) >> data) ) data = 0;
}
void boomslang_Float::boomslang_print() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
