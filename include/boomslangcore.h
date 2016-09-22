#ifndef BOOMSLANGCORE_H_INCLUDED
#define BOOMSLANGCORE_H_INCLUDED

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <initializer_list>

#define boomslang_self  (*this)
#define boomslang_true  boomslang_Boolean(1)
#define boomslang_false boomslang_Boolean(0)

typedef unsigned int boomslang_uint;
typedef int boomslang_int;
typedef float boomslang_float;
typedef double boomslang_double;
typedef short boomslang_short;
typedef unsigned short boomslang_ushort;
typedef long boomslang_long;
typedef unsigned long boomslang_ulong;
typedef bool boomslang_bool;
typedef char boomslang_char;
typedef unsigned char boomslang_uchar;

class boomslang_String;
class boomslang_Double;
class boomslang_Float;
class boomslang_UnsignedInteger;
class boomslang_Byte;
class boomslang_Boolean;
class boomslang_Integer;

//Default Exceptions
class boomslang_Error;
class boomslang_Exception;
class boomslang_NotFound;
class boomslang_Invalid;
class boomslang_OutOfIndex;
class boomslang_MemoryFailure;
class boomslang_ZeroDivision;

//Base string template
class boomslang_String{
    public:
    std::string data;
    boomslang_String();
    ~boomslang_String();
    boomslang_String(const boomslang_String&);
    boomslang_String(const std::string&);
    void operator=(const boomslang_String&);
    void operator+=(const boomslang_String&);
    void operator-=(const boomslang_String&);
    void operator*=(const boomslang_String&);
    void operator/=(const boomslang_String&);
    void operator=(std::string&);
    boomslang_String operator+(const boomslang_String&);
    boomslang_String operator+(const boomslang_String&) const;
    boomslang_String operator+(const std::string&);
    bool operator==(boomslang_String);
    bool operator==(boomslang_String) const;
    bool operator!=(boomslang_String);
    bool operator!=(boomslang_String) const;
    boomslang_Double boomslang_toDouble();
    boomslang_Float boomslang_toFloat();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    operator std::string();
    operator const char*();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print() const;
    void boomslang_wait() const;
    void boomslang_fail() const;
    void boomslang_printError() const;
    void boomslang_log() const;
    void boomslang_printLog() const;
};

//Base Double class
class boomslang_Double{
    public:
    double data;
    boomslang_Double();
    ~boomslang_Double();
    boomslang_Double(const double&);
    boomslang_Double(const int&);
    boomslang_Double(const bool&);
    boomslang_Double(const unsigned int&);
    boomslang_Double(const boomslang_Byte&);
    boomslang_Double(const boomslang_Boolean&);
    boomslang_Double(const boomslang_UnsignedInteger&);
    void operator=(boomslang_Double);
    void operator+=(boomslang_Double);
    void operator-=(boomslang_Double);
    void operator*=(boomslang_Double);
    void operator/=(boomslang_Double);
    boomslang_Double operator++(int);
    boomslang_Double operator--(int);
    boomslang_Double operator++();
    boomslang_Double operator--();
    boomslang_Double operator+(const boomslang_Double&);
    boomslang_Double operator-(const boomslang_Double&);
    boomslang_Double operator*(const boomslang_Double&);
    boomslang_Double operator/(const boomslang_Double&);
    boomslang_Double operator-();
    boomslang_Double operator+(const boomslang_Double&) const;
    boomslang_Double operator-(const boomslang_Double&) const;
    boomslang_Double operator*(const boomslang_Double&) const;
    boomslang_Double operator/(const boomslang_Double&) const;
    boomslang_Double operator-() const;
    bool operator==(boomslang_Double);
    bool operator!=(boomslang_Double);
    bool operator>(boomslang_Double);
    bool operator<(boomslang_Double);
    bool operator>=(boomslang_Double);
    bool operator<=(boomslang_Double);
    bool operator==(boomslang_Double) const;
    bool operator!=(boomslang_Double) const;
    bool operator>(boomslang_Double) const;
    bool operator<(boomslang_Double) const;
    bool operator>=(boomslang_Double) const;
    bool operator<=(boomslang_Double) const;
    operator double();
    operator boomslang_Integer();
    operator boomslang_UnsignedInteger();
    operator boomslang_Byte();
    boomslang_String boomslang_toString();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    boomslang_Float boomslang_toFloat();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print() const;
};

//Base Double class
class boomslang_Float{
    public:
    float data;
    boomslang_Float();
    ~boomslang_Float();
    boomslang_Float(const double&);
    boomslang_Float(const float&);
    boomslang_Float(const int&);
    boomslang_Float(const bool&);
    boomslang_Float(const unsigned int&);
    boomslang_Float(const boomslang_Byte&);
    boomslang_Float(const boomslang_Boolean&);
    boomslang_Float(const boomslang_UnsignedInteger&);
    void operator=(boomslang_Float);
    void operator+=(boomslang_Float);
    void operator-=(boomslang_Float);
    void operator*=(boomslang_Float);
    void operator/=(boomslang_Float);
    boomslang_Float operator++(int);
    boomslang_Float operator--(int);
    boomslang_Float operator++();
    boomslang_Float operator--();
    boomslang_Float operator+(const boomslang_Float&);
    boomslang_Float operator-(const boomslang_Float&);
    boomslang_Float operator*(const boomslang_Float&);
    boomslang_Float operator/(const boomslang_Float&);
    boomslang_Float operator-();
    boomslang_Float operator+(const boomslang_Float&) const;
    boomslang_Float operator-(const boomslang_Float&) const;
    boomslang_Float operator*(const boomslang_Float&) const;
    boomslang_Float operator/(const boomslang_Float&) const;
    boomslang_Float operator-() const;
    bool operator==(boomslang_Float);
    bool operator!=(boomslang_Float);
    bool operator>(boomslang_Float);
    bool operator<(boomslang_Float);
    bool operator>=(boomslang_Float);
    bool operator<=(boomslang_Float);
    bool operator==(boomslang_Float) const;
    bool operator!=(boomslang_Float) const;
    bool operator>(boomslang_Float) const;
    bool operator<(boomslang_Float) const;
    bool operator>=(boomslang_Float) const;
    bool operator<=(boomslang_Float) const;
    operator double();
    operator boomslang_Double();
    operator boomslang_Integer();
    operator boomslang_UnsignedInteger();
    operator boomslang_Byte();
    boomslang_String boomslang_toString();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    boomslang_Double boomslang_toDouble();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print() const;
};

//Base positive class
class boomslang_UnsignedInteger{
    public:
    unsigned int data;
    boomslang_UnsignedInteger();
    ~boomslang_UnsignedInteger();
    boomslang_UnsignedInteger(const double&);
    boomslang_UnsignedInteger(const int&);
    boomslang_UnsignedInteger(const bool&);
    boomslang_UnsignedInteger(const unsigned int&);
    boomslang_UnsignedInteger(const boomslang_Byte&);
    boomslang_UnsignedInteger(const boomslang_Boolean&);
    boomslang_UnsignedInteger(const boomslang_Double&);
    void operator=(boomslang_UnsignedInteger);
    void operator+=(boomslang_UnsignedInteger);
    void operator-=(boomslang_UnsignedInteger);
    void operator*=(boomslang_UnsignedInteger);
    void operator/=(boomslang_UnsignedInteger);
    boomslang_UnsignedInteger operator++(int);
    boomslang_UnsignedInteger operator--(int);
    boomslang_UnsignedInteger operator++();
    boomslang_UnsignedInteger operator--();
    boomslang_UnsignedInteger operator+(const boomslang_UnsignedInteger&);
    boomslang_UnsignedInteger operator-(const boomslang_UnsignedInteger&);
    boomslang_UnsignedInteger operator*(const boomslang_UnsignedInteger&);
    boomslang_UnsignedInteger operator/(const boomslang_UnsignedInteger&);
    boomslang_UnsignedInteger operator+(const boomslang_UnsignedInteger&) const;
    boomslang_UnsignedInteger operator-(const boomslang_UnsignedInteger&) const;
    boomslang_UnsignedInteger operator*(const boomslang_UnsignedInteger&) const;
    boomslang_UnsignedInteger operator/(const boomslang_UnsignedInteger&) const;
    bool operator==(boomslang_UnsignedInteger);
    bool operator!=(boomslang_UnsignedInteger);
    bool operator>(boomslang_UnsignedInteger);
    bool operator<(boomslang_UnsignedInteger);
    bool operator>=(boomslang_UnsignedInteger);
    bool operator<=(boomslang_UnsignedInteger);
    bool operator==(boomslang_UnsignedInteger) const;
    bool operator!=(boomslang_UnsignedInteger) const;
    bool operator>(boomslang_UnsignedInteger) const;
    bool operator<(boomslang_UnsignedInteger) const;
    bool operator>=(boomslang_UnsignedInteger) const;
    bool operator<=(boomslang_UnsignedInteger) const;
    operator unsigned int();
    boomslang_String boomslang_toString();
    boomslang_Double boomslang_toDouble();
    boomslang_Float boomslang_toFloat();
    boomslang_Integer boomslang_toInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print() const;
};

//Base integer class
class boomslang_Integer{
    public:
    int data;
    boomslang_Integer();
    ~boomslang_Integer();
    boomslang_Integer(const double&);
    boomslang_Integer(const bool&);
    boomslang_Integer(const int&);
    boomslang_Integer(const unsigned int&);
    boomslang_Integer(const boomslang_Byte&);
    boomslang_Integer(const boomslang_Boolean&);
    boomslang_Integer(const boomslang_Double&);
    void operator=(boomslang_Integer);
    void operator+=(boomslang_Integer);
    void operator-=(boomslang_Integer);
    void operator*=(boomslang_Integer);
    void operator/=(boomslang_Integer);
    boomslang_Integer operator++(int);
    boomslang_Integer operator--(int);
    boomslang_Integer operator++();
    boomslang_Integer operator--();
    boomslang_Integer operator+(const boomslang_Integer&);
    boomslang_Integer operator-(const boomslang_Integer&);
    boomslang_Integer operator*(const boomslang_Integer&);
    boomslang_Integer operator/(const boomslang_Integer&);
    boomslang_Integer operator-();
    boomslang_Integer operator+(const boomslang_Integer&) const;
    boomslang_Integer operator-(const boomslang_Integer&) const;
    boomslang_Integer operator*(const boomslang_Integer&) const;
    boomslang_Integer operator/(const boomslang_Integer&) const;
    boomslang_Integer operator-() const;
    bool operator==(boomslang_Integer);
    bool operator!=(boomslang_Integer);
    bool operator>(boomslang_Integer);
    bool operator<(boomslang_Integer);
    bool operator>=(boomslang_Integer);
    bool operator<=(boomslang_Integer);
    bool operator==(boomslang_Integer) const;
    bool operator!=(boomslang_Integer) const;
    bool operator>(boomslang_Integer) const;
    bool operator<(boomslang_Integer) const;
    bool operator>=(boomslang_Integer) const;
    bool operator<=(boomslang_Integer) const;
    operator int();
    boomslang_String boomslang_toString();
    boomslang_Double boomslang_toDouble();
    boomslang_Float boomslang_toFloat();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print() const;
};

//Base byte class
class boomslang_Byte{
    public:
    char data;
    boomslang_Byte();
    ~boomslang_Byte();
    boomslang_Byte(const double&);
    boomslang_Byte(const int&);
    boomslang_Byte(const bool&);
    boomslang_Byte(const char&);
    boomslang_Byte(const unsigned int&);
    boomslang_Byte(const boomslang_Double&);
    boomslang_Byte(const boomslang_Integer&);
    boomslang_Byte(const boomslang_UnsignedInteger&);
    void operator=(boomslang_Byte);
    void operator+=(boomslang_Byte);
    void operator-=(boomslang_Byte);
    void operator*=(boomslang_Byte);
    void operator/=(boomslang_Byte);
    boomslang_Byte operator++(int);
    boomslang_Byte operator--(int);
    boomslang_Byte operator++();
    boomslang_Byte operator--();
    boomslang_Byte operator+(const boomslang_Byte&);
    boomslang_Byte operator-(const boomslang_Byte&);
    boomslang_Byte operator*(const boomslang_Byte&);
    boomslang_Byte operator/(const boomslang_Byte&);
    boomslang_Byte operator-();
    boomslang_Byte operator+(const boomslang_Byte&) const;
    boomslang_Byte operator-(const boomslang_Byte&) const;
    boomslang_Byte operator*(const boomslang_Byte&) const;
    boomslang_Byte operator/(const boomslang_Byte&) const;
    boomslang_Byte operator-() const;
    bool operator==(boomslang_Byte);
    bool operator!=(boomslang_Byte);
    bool operator>(boomslang_Byte);
    bool operator<(boomslang_Byte);
    bool operator>=(boomslang_Byte);
    bool operator<=(boomslang_Byte);
    bool operator==(boomslang_Byte) const;
    bool operator!=(boomslang_Byte) const;
    bool operator>(boomslang_Byte) const;
    bool operator<(boomslang_Byte) const;
    bool operator>=(boomslang_Byte) const;
    bool operator<=(boomslang_Byte) const;
    operator char();
    boomslang_String boomslang_toString();
    boomslang_Double boomslang_toDouble();
    boomslang_Float boomslang_toFloat();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    boomslang_Boolean boomslang_toBoolean();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print() const;
};

// Base Boolean class
class boomslang_Boolean{
    public:
    bool data;
    boomslang_Boolean();
    boomslang_Boolean(bool);
    boomslang_Boolean(const boomslang_Double&);
    boomslang_Boolean(const boomslang_Integer&);
    boomslang_Boolean(const boomslang_UnsignedInteger&);
    ~boomslang_Boolean();
    void operator=(boomslang_Boolean);
    void operator+=(boomslang_Boolean);
    void operator-=(boomslang_Boolean);
    void operator*=(boomslang_Boolean);
    void operator/=(boomslang_Boolean);
    boomslang_Boolean operator+(const boomslang_Boolean&);
    boomslang_Boolean operator-(const boomslang_Boolean&);
    boomslang_Boolean operator*(const boomslang_Boolean&);
    boomslang_Boolean operator/(const boomslang_Boolean&);
    boomslang_Boolean operator-();
    boomslang_Boolean operator+(const boomslang_Boolean&) const;
    boomslang_Boolean operator-(const boomslang_Boolean&) const;
    boomslang_Boolean operator*(const boomslang_Boolean&) const;
    boomslang_Boolean operator/(const boomslang_Boolean&) const;
    boomslang_Boolean operator-() const;
    boomslang_Boolean operator==(boomslang_Boolean);
    boomslang_Boolean operator!=(boomslang_Boolean);
    boomslang_Boolean operator>(boomslang_Boolean);
    boomslang_Boolean operator<(boomslang_Boolean);
    boomslang_Boolean operator>=(boomslang_Boolean);
    boomslang_Boolean operator<=(boomslang_Boolean);
    boomslang_Boolean operator!();
    boomslang_Boolean operator==(boomslang_Boolean) const;
    boomslang_Boolean operator!=(boomslang_Boolean) const;
    boomslang_Boolean operator>(boomslang_Boolean) const;
    boomslang_Boolean operator<(boomslang_Boolean) const;
    boomslang_Boolean operator>=(boomslang_Boolean) const;
    boomslang_Boolean operator<=(boomslang_Boolean) const;
    boomslang_Boolean operator!() const;
    operator bool();
    boomslang_String boomslang_toString();
    boomslang_Double boomslang_toDouble();
    boomslang_Float boomslang_toFloat();
    boomslang_Integer boomslang_toInteger();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Byte boomslang_toByte();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print() const;
    void boomslang_wait() const;
};

//Base list class
template <class what>
class boomslang_List{
    public:
    std::vector<what> data;

    boomslang_List();
    ~boomslang_List();
    boomslang_List(std::initializer_list<what>);
    what& operator[](int);
    what& operator[](int) const;
    boomslang_List<what> operator+(const boomslang_List<what>&);
    void operator+=(const boomslang_List<what>&);
    void operator+=(const what&);
    void boomslang_clear();
    void boomslang_append(const boomslang_List<what>&);
    void boomslang_append(const what&);
    void boomslang_prepend(const boomslang_List<what>&);
    void boomslang_prepend(const what&);
    void boomslang_insert(const boomslang_List<what>&, const boomslang_Integer&);
    void boomslang_insert(const what&, const boomslang_Integer&);
    void boomslang_remove();
    void boomslang_remove(const boomslang_Integer&);

    what& boomslang_get(const boomslang_Integer&);
    boomslang_Integer boomslang_length();
};

//Base array class
template <class what>
class boomslang_Array{
    public:
    what* data = NULL;
    size_t length = 0;

    boomslang_Array();
    boomslang_Array(const boomslang_Integer&);
    boomslang_Array(const boomslang_Array<what>&);
    ~boomslang_Array();
    void operator=(const boomslang_Array<what>&);
    void boomslang_resize(const boomslang_Integer&);
    what& boomslang_get(const boomslang_Integer&);
    void boomslang_clear();

    boomslang_Integer boomslang_length();
};

//Base map class
template <class key, class what>
class boomslang_Map{
    public:
    std::map<key, what> data;

    boomslang_Map();
    ~boomslang_Map();
};

//Default Exception templates
class boomslang_Error{
    public:
    boomslang_String cause;

    boomslang_Error();
    boomslang_Error(boomslang_String);
    boomslang_String boomslang_getCause();
};
class boomslang_Exception{
    public:
    boomslang_String cause;

    boomslang_Exception();
    boomslang_Exception(boomslang_String);
    boomslang_String boomslang_getCause();
};
class boomslang_NotFound: public boomslang_Exception{
    public:
    boomslang_NotFound();
    boomslang_NotFound(boomslang_String);
};
class boomslang_Invalid: public boomslang_Exception{
    public:
    boomslang_Invalid();
    boomslang_Invalid(boomslang_String);
};
class boomslang_OutOfIndex: public boomslang_Exception{
    public:
    boomslang_OutOfIndex();
    boomslang_OutOfIndex(boomslang_String);
};
class boomslang_MemoryFailure: public boomslang_Exception{
    public:
    boomslang_MemoryFailure();
    boomslang_MemoryFailure(boomslang_String);
};
class boomslang_ZeroDivision: public boomslang_Exception{
    public:
    boomslang_ZeroDivision();
    boomslang_ZeroDivision(boomslang_String);
};

//Base List functions
template <class what> boomslang_List<what>::boomslang_List(){}
template <class what> boomslang_List<what>::~boomslang_List(){}
template <class what> boomslang_List<what>::boomslang_List(std::initializer_list<what> array_data){
    this->boomslang_clear();

    for(what object: array_data){
        data.push_back(object);
    }
}
template <class what> what& boomslang_List<what>::operator[](int index){
    if(index < data.size() and index >= 0) return data[index]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
}
template <class what> what& boomslang_List<what>::operator[](int index) const{
    if(index < data.size() and index >= 0) return data[index]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
}
template <class what> boomslang_List<what> boomslang_List<what>::operator+(const boomslang_List<what>& another_list){
    boomslang_List<what> new_list;

    for(int i = 0; i < data.size(); i++){
        new_list.data.push_back(data[i]);
    }

    for(int i = 0; i < another_list.data.size(); i++){
        new_list.data.push_back(another_list[i]);
    }
    return new_list;
}
template <class what> void boomslang_List<what>::operator+=(const boomslang_List<what>& another_list){
    for(int i = 0; i < another_list.data.size(); i++){
        data.push_back(another_list[i]);
    }
}
template <class what> void boomslang_List<what>::operator+=(const what& other){
    data.push_back(other);
}

template <class what> void boomslang_List<what>::boomslang_append(const what& other){
    data.push_back(other);
}
template <class what> void boomslang_List<what>::boomslang_append(const boomslang_List<what>& another_list){
    for(int i = 0; i < another_list.data.size(); i++){
        data.push_back(another_list[i]);
    }
}

template <class what> void boomslang_List<what>::boomslang_prepend(const what& other){
    data.insert(data.begin(), other);
}
template <class what> void boomslang_List<what>::boomslang_prepend(const boomslang_List<what>& another_list){
    for(int i = another_list.data.size()-1; i > -1; i--){
        data.insert(data.begin(), another_list[i]);
    }
}

template <class what> void boomslang_List<what>::boomslang_insert(const what& other, const boomslang_Integer& where){
    if((int) where.data <= (int) data.size() and (int) where.data>-1){
        data.insert(data.begin() + (int) where.data, other);
    } else if((int) where.data > (int) data.size()){
        data.push_back(other);
    } else {
        data.insert(data.begin(), other);
    }
}
template <class what> void boomslang_List<what>::boomslang_insert(const boomslang_List<what>& another_list, const boomslang_Integer& where){
    if((int) where.data <= (int) data.size() and (int) where.data>-1){
        for(int i = another_list.data.size()-1; i > -1; i--){
            data.insert(data.begin() + (int) where.data, another_list[i]);
        }
    } else if((int) where.data > (int) data.size()){
        for(int i = 0; i < another_list.data.size(); i++){
            data.push_back(another_list[i]);
        }
    } else {
        for(int i = another_list.data.size()-1; i > -1; i--){
            data.insert(data.begin(), another_list[i]);
        }
    }
}

template <class what> void boomslang_List<what>::boomslang_remove(){
    if(data.size() > 0) data.pop_back();
}
template <class what> void boomslang_List<what>::boomslang_remove(const boomslang_Integer& where){
    if((int) where.data <= (int) data.size() and -1 < (int) where.data){
        data.erase(data.begin() + (int) where.data);
    } else if((int) where.data > (int) data.size()){
        if(data.size() > 0) data.pop_back();
    } else {
        data.erase(data.begin());
    }
}

template <class what> void boomslang_List<what>::boomslang_clear(){
    data.clear();
}

template <class what> what& boomslang_List<what>::boomslang_get(const boomslang_Integer& n){
    return data[ int(n.data) ];
}

template <class what> boomslang_Integer boomslang_List<what>::boomslang_length(){
    return boomslang_Integer(data.size());
}

//Base Array Functions
template <class what> boomslang_Array<what>::boomslang_Array(){}
template <class what> boomslang_Array<what>::boomslang_Array(const boomslang_Integer& len){
    data = new what[(int) len.data];
}
template <class what> boomslang_Array<what>::boomslang_Array(const boomslang_Array<what>& other){
    delete[] data;
    data = new what[other.length];

    for(size_t i = 0; i < other.length; i++){
        data[i] = other.data[i];
    }
}
template <class what> boomslang_Array<what>::~boomslang_Array(){
    delete[] data;
}
template <class what> void boomslang_Array<what>::operator=(const boomslang_Array<what>& other){
    delete[] data;
    data = new what[other.length];

    for(size_t i = 0; i < other.length; i++){
        data[i] = other.data[i];
    }
}
template <class what> void boomslang_Array<what>::boomslang_resize(const boomslang_Integer& len){
    delete[] data;
    data = new what[(int) len.data];
}
template <class what> what& boomslang_Array<what>::boomslang_get(const boomslang_Integer& index){
    return data[(int) index.data];
}
template <class what> void boomslang_Array<what>::boomslang_clear(){
    delete[] data;
    data = NULL;
}
template <class what> boomslang_Integer boomslang_Array<what>::boomslang_length(){
    return boomslang_Integer(length);
}

//Base Map Functions
template <class key, class what> boomslang_Map<key,what>::boomslang_Map(){}
template <class key, class what> boomslang_Map<key,what>::~boomslang_Map(){}

//Die function
void boomslang_die();

#endif // BOOMSLANGCORE_H_INCLUDED
