
#include <string>
#include <iostream>
#include <sstream>

#include "../include/boomslangcore.h"

//Constructors
boomslang_String::boomslang_String(){data = "";}
boomslang_String::~boomslang_String(){}
boomslang_String::boomslang_String(const boomslang_String& s){data = s.data;}
boomslang_String::boomslang_String(const std::string& s){data = s;}

//Assignment
void boomslang_String::operator=(boomslang_String other){
    data = other.data;
}
void boomslang_String::operator=(std::string& other){
    data = other;
}

//Addition Assignment
void boomslang_String::operator+=(boomslang_String other){
    data += other.data;
}
//Subtraction Assignment
void boomslang_String::operator-=(boomslang_String other){
    // Do nothing
}
//Multiplication Assignment
void boomslang_String::operator*=(boomslang_String other){
    // Do nothing
}
//Division Assignment
void boomslang_String::operator/=(boomslang_String other){
    // Do nothing
}

//Addition
boomslang_String boomslang_String::operator+(const boomslang_String& other){
    return this->data + other.data;
}
boomslang_String boomslang_String::operator+(const boomslang_String& other) const{
    return this->data + other.data;
}
boomslang_String boomslang_String::operator+(const std::string& other){
    return this->data + other;
}

//Comparison
bool boomslang_String::operator==(boomslang_String other){
    return data == other.data;
}
bool boomslang_String::operator==(boomslang_String other) const{
    return data == other.data;
}
bool boomslang_String::operator!=(boomslang_String other){
    return data != other.data;
}
bool boomslang_String::operator!=(boomslang_String other) const{
    return data != other.data;
}

//Conversion
boomslang_Number boomslang_String::boomslang_toNumber(){
    double result;
    std::stringstream(data) >> result;
    return boomslang_Number(result);
}
boomslang_Positive boomslang_String::boomslang_toPositive(){
    double result;
    std::stringstream(data) >> result;
    return boomslang_Positive(result);
}
boomslang_Integer boomslang_String::boomslang_toInteger(){
    double result;
    std::stringstream(data) >> result;
    return boomslang_Integer(result);
}

boomslang_String::operator std::string(){
    return data;
}
boomslang_String::operator const char*(){
    return data.c_str();
}

//Console methods
void boomslang_String::boomslang_output(){
    std::cout << data << std::endl;
}
void boomslang_String::boomslang_output() const{
    std::cout << data << std::endl;
}
void boomslang_String::boomslang_input(){
    std::getline(std::cin,data);
}
void boomslang_String::boomslang_print(){
    std::cout << data;
}
void boomslang_String::boomslang_print() const{
    std::cout << data;
}
void boomslang_String::boomslang_wait(){
    std::string s;
    std::getline(std::cin,s);
}void boomslang_String::boomslang_wait() const{
    std::string s;
    std::getline(std::cin,s);
}
