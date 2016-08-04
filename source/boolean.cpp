
#include <iostream>
#include "../include/boomslangcore.h"

boomslang_Boolean::boomslang_Boolean(){data = false;}
boomslang_Boolean::boomslang_Boolean(bool what){data = what;}
boomslang_Boolean::boomslang_Boolean(const boomslang_Number& what){data = (what.data == 1) ? true : false;}
boomslang_Boolean::boomslang_Boolean(const boomslang_Integer& what){data = (what.data == 1) ? true : false;}
boomslang_Boolean::boomslang_Boolean(const boomslang_UnsignedInteger& what){data = (what.data == 1) ? true : false;}
boomslang_Boolean::~boomslang_Boolean(){}

boomslang_Boolean::operator bool(){
    return data;
}

//Assignment
void boomslang_Boolean::operator=(boomslang_Boolean other){
    data = other.data;
}
void boomslang_Boolean::operator+=(boomslang_Boolean other){
    data += other.data;
}
void boomslang_Boolean::operator-=(boomslang_Boolean other){
    data -= other.data;
}
void boomslang_Boolean::operator*=(boomslang_Boolean other){
    data = (data && other.data);
}
void boomslang_Boolean::operator/=(boomslang_Boolean other){
    data = true;
}

boomslang_Boolean boomslang_Boolean::operator+(const boomslang_Boolean& other){
    return boomslang_Boolean(data + other.data);
}
boomslang_Boolean boomslang_Boolean::operator-(const boomslang_Boolean& other){
    return boomslang_Boolean(data - other.data);
}
boomslang_Boolean boomslang_Boolean::operator*(const boomslang_Boolean& other){
    return boomslang_Boolean(data && other.data);
}
boomslang_Boolean boomslang_Boolean::operator/(const boomslang_Boolean& other){
    return boomslang_Boolean(true);
}
boomslang_Boolean boomslang_Boolean::operator-(){
    return boomslang_Boolean(!data);
}
boomslang_Boolean boomslang_Boolean::operator+(const boomslang_Boolean& other) const{
    return boomslang_Boolean(data + other.data);
}
boomslang_Boolean boomslang_Boolean::operator-(const boomslang_Boolean& other) const{
    return boomslang_Boolean(data - other.data);
}
boomslang_Boolean boomslang_Boolean::operator*(const boomslang_Boolean& other) const{
    return boomslang_Boolean(data && other.data);
}
boomslang_Boolean boomslang_Boolean::operator/(const boomslang_Boolean& other) const{
    return boomslang_Boolean(true);
}
boomslang_Boolean boomslang_Boolean::operator-() const{
    return boomslang_Boolean(!data);
}

//Comparison
boomslang_Boolean boomslang_Boolean::operator==(boomslang_Boolean other){
    return boomslang_Boolean(data == other.data);
}
boomslang_Boolean boomslang_Boolean::operator!=(boomslang_Boolean other){
    return boomslang_Boolean(data != other.data);
}
boomslang_Boolean boomslang_Boolean::operator>(boomslang_Boolean other){
    return boomslang_Boolean(data > other.data);
}
boomslang_Boolean boomslang_Boolean::operator<(boomslang_Boolean other){
    return boomslang_Boolean(data < other.data);
}
boomslang_Boolean boomslang_Boolean::operator>=(boomslang_Boolean other){
    return boomslang_Boolean(true);
}
boomslang_Boolean boomslang_Boolean::operator<=(boomslang_Boolean other){
    return boomslang_Boolean(true);
}
boomslang_Boolean boomslang_Boolean::operator!(){
    if(data == true){
        return boomslang_Boolean(false);
    }
    else {
        return boomslang_Boolean(true);
    }
}
boomslang_Boolean boomslang_Boolean::operator==(boomslang_Boolean other) const{
    return boomslang_Boolean(data == other.data);
}
boomslang_Boolean boomslang_Boolean::operator!=(boomslang_Boolean other) const{
    return boomslang_Boolean(data != other.data);
}
boomslang_Boolean boomslang_Boolean::operator>(boomslang_Boolean other) const{
    return boomslang_Boolean(data > other.data);
}
boomslang_Boolean boomslang_Boolean::operator<(boomslang_Boolean other) const{
    return boomslang_Boolean(data < other.data);
}
boomslang_Boolean boomslang_Boolean::operator>=(boomslang_Boolean other) const{
    return boomslang_Boolean(true);
}
boomslang_Boolean boomslang_Boolean::operator<=(boomslang_Boolean other) const{
    return boomslang_Boolean(true);
}
boomslang_Boolean boomslang_Boolean::operator!() const{
    if(data == true){
        return boomslang_Boolean(false);
    }
    else {
        return boomslang_Boolean(true);
    }
}

//Conversion
boomslang_String boomslang_Boolean::boomslang_toString(){
    if(data == true){
        return boomslang_String("true");
    } else {
        return boomslang_String("false");
    }
}
boomslang_Number boomslang_Boolean::boomslang_toNumber(){
    if(data == true){
        return boomslang_Number(1);
    } else {
        return boomslang_Number(0);
    }
}
boomslang_Integer boomslang_Boolean::boomslang_toInteger(){
    if(data == true){
        return boomslang_Integer(1);
    } else {
        return boomslang_Integer(0);
    }
}
boomslang_UnsignedInteger boomslang_Boolean::boomslang_toUnsignedInteger(){
    if(data == true){
        return boomslang_UnsignedInteger(1);
    } else {
        return boomslang_UnsignedInteger(0);
    }
}
boomslang_Byte boomslang_Boolean::boomslang_toByte(){
    if(data == true){
        return boomslang_Byte(1);
    } else {
        return boomslang_Byte(0);
    }
}

//Console methods
void boomslang_Boolean::boomslang_output(){
    if(data == true){
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}
void boomslang_Boolean::boomslang_input(){
    std::string input;
    std::getline(std::cin,input);

    if(input == "true" or input == "yes" or input == "1"){
        data = 1;
    } else {
        data = 0;
    }
}
void boomslang_Boolean::boomslang_print(){
    if(data == true){
        std::cout << "true";
    } else {
        std::cout << "false";
    }
}
