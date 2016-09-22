
#include <iostream>
#include <sstream>
#include <math.h>

#include "../include/boomslangcore.h"

//Constructors
boomslang_Double::boomslang_Double(){data = 0;}
boomslang_Double::~boomslang_Double(){}
boomslang_Double::boomslang_Double(const double& d){data = d;}
boomslang_Double::boomslang_Double(const int& i){data = i;}
boomslang_Double::boomslang_Double(const bool& b){data = b;}
boomslang_Double::boomslang_Double(const unsigned int& b){data = b;}
boomslang_Double::boomslang_Double(const boomslang_Byte& b){data = b.data;}
boomslang_Double::boomslang_Double(const boomslang_Boolean& b){data = b.data;}
boomslang_Double::boomslang_Double(const boomslang_UnsignedInteger& b){data = b.data;}

boomslang_Double::operator double(){
    return data;
}
boomslang_Double::operator boomslang_Integer(){
    return boomslang_Integer( (int)(data) );
}
boomslang_Double::operator boomslang_UnsignedInteger(){
    return boomslang_UnsignedInteger( (unsigned int)(data) );
}
boomslang_Double::operator boomslang_Byte(){
    return boomslang_Byte( (char)(data) );
}

//Assignment
void boomslang_Double::operator=(boomslang_Double other){
    data = other.data;
}
//Addition Assignment
void boomslang_Double::operator+=(boomslang_Double other){
    data += other.data;
}
//Subtraction Assignment
void boomslang_Double::operator-=(boomslang_Double other){
    data -= other.data;
}
//Multiplication Assignment
void boomslang_Double::operator*=(boomslang_Double other){
    data *= other.data;
}
//Division Assignment
void boomslang_Double::operator/=(boomslang_Double other){
    data /= other.data;
}
boomslang_Double boomslang_Double::operator++(int){
    return boomslang_Double( data++ );
}
boomslang_Double boomslang_Double::operator--(int){
    return boomslang_Double( data-- );
}
boomslang_Double boomslang_Double::operator++(){
    return boomslang_Double( data++ );
}
boomslang_Double boomslang_Double::operator--(){
    return boomslang_Double( data-- );
}

//Addition
boomslang_Double boomslang_Double::operator+(const boomslang_Double& other){
    return this->data + other.data;
}
boomslang_Double boomslang_Double::operator+(const boomslang_Double& other) const{
    return this->data + other.data;
}

//Subtraction
boomslang_Double boomslang_Double::operator-(const boomslang_Double& other){
    return this->data - other.data;
}
boomslang_Double boomslang_Double::operator-(const boomslang_Double& other) const{
    return this->data - other.data;
}

//Oppisite
boomslang_Double boomslang_Double::operator-(){
    return boomslang_Double(-data);
}
boomslang_Double boomslang_Double::operator-() const{
    return boomslang_Double(-data);
}

//Multiplication
boomslang_Double boomslang_Double::operator*(const boomslang_Double& other){
    return this->data * other.data;
}
boomslang_Double boomslang_Double::operator*(const boomslang_Double& other) const{
    return this->data * other.data;
}

//Division
boomslang_Double boomslang_Double::operator/(const boomslang_Double& other){
    return this->data / other.data;
}
boomslang_Double boomslang_Double::operator/(const boomslang_Double& other) const{
    return this->data / other.data;
}

//Conversion
boomslang_String boomslang_Double::boomslang_toString(){
    std::stringstream conversion;
    conversion << data;
    return boomslang_String(conversion.str());
}
boomslang_UnsignedInteger boomslang_Double::boomslang_toUnsignedInteger(){
    if(data >= 0){
        return boomslang_UnsignedInteger(floor(data));
    }
    else {
        return boomslang_UnsignedInteger(floor(-data));
    }
}
boomslang_Integer boomslang_Double::boomslang_toInteger(){
    return boomslang_Integer(data);
}
boomslang_Byte boomslang_Double::boomslang_toByte(){
    return boomslang_Byte(data);
}
boomslang_Boolean boomslang_Double::boomslang_toBoolean(){
    if(data == 1){
        return boomslang_Boolean(true);
    }
    else {
        return boomslang_Boolean(false);
    }
}
boomslang_Float boomslang_Double::boomslang_toFloat(){
    return boomslang_Float(data);
}

//Comparison
bool boomslang_Double::operator==(boomslang_Double other){
    return (data == other.data);
}
bool boomslang_Double::operator==(boomslang_Double other) const{
    return (data == other.data);
}
bool boomslang_Double::operator!=(boomslang_Double other){
    return !(data == other.data);
}
bool boomslang_Double::operator!=(boomslang_Double other) const{
    return !(data == other.data);
}
bool boomslang_Double::operator>(boomslang_Double other){
    return (data > other.data);
}
bool boomslang_Double::operator>(boomslang_Double other) const{
    return (data > other.data);
}
bool boomslang_Double::operator<(boomslang_Double other){
    return (data < other.data);
}
bool boomslang_Double::operator<(boomslang_Double other) const{
    return (data < other.data);
}
bool boomslang_Double::operator>=(boomslang_Double other){
    return (data >= other.data);
}
bool boomslang_Double::operator>=(boomslang_Double other) const{
    return (data >= other.data);
}
bool boomslang_Double::operator<=(boomslang_Double other){
    return (data <= other.data);
}
bool boomslang_Double::operator<=(boomslang_Double other) const{
    return (data <= other.data);
}

//Console methods
void boomslang_Double::boomslang_output() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str() << std::endl;
}
void boomslang_Double::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if( ! (std::istringstream(input) >> data) ) data = 0;
}
void boomslang_Double::boomslang_print() const{
    std::ostringstream convert;
    convert << data;
    std::cout << convert.str();
}
