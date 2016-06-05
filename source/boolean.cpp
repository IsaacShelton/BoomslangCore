
#include <iostream>
#include "../include/boomslangcore.h"

boomslang_Boolean::boomslang_Boolean(){data = false;}
boomslang_Boolean::boomslang_Boolean(const bool& what){data = what;}
boomslang_Boolean::boomslang_Boolean(const boomslang_Number& what){data = bool(what.data);}
boomslang_Boolean::~boomslang_Boolean(){}

boomslang_Boolean::operator bool(){
    return data;
}

//Assignment
void boomslang_Boolean::operator=(boomslang_Boolean other){
    data = other.data;
}

//Comparison
bool boomslang_Boolean::operator==(boomslang_Boolean other){
    return (data == other.data);
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
