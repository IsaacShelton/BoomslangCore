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

class boomslang_String;
class boomslang_Number;
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
    boomslang_Number boomslang_toNumber();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    operator std::string();
    operator const char*();
    void boomslang_output();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print();
    void boomslang_print() const;
    void boomslang_wait();
    void boomslang_wait() const;
};

//Base number class
class boomslang_Number{
    public:
    double data;
    boomslang_Number();
    ~boomslang_Number();
    boomslang_Number(const double&);
    boomslang_Number(const int&);
    boomslang_Number(const bool&);
    boomslang_Number(const uint32_t&);
    boomslang_Number(const boomslang_Byte&);
    boomslang_Number(const boomslang_Boolean&);
    boomslang_Number(const boomslang_UnsignedInteger&);
    void operator=(boomslang_Number);
    void operator+=(boomslang_Number);
    void operator-=(boomslang_Number);
    void operator*=(boomslang_Number);
    void operator/=(boomslang_Number);
    boomslang_Number operator+(const boomslang_Number&);
    boomslang_Number operator-(const boomslang_Number&);
    boomslang_Number operator*(const boomslang_Number&);
    boomslang_Number operator/(const boomslang_Number&);
    boomslang_Number operator-();
    boomslang_Number operator+(const boomslang_Number&) const;
    boomslang_Number operator-(const boomslang_Number&) const;
    boomslang_Number operator*(const boomslang_Number&) const;
    boomslang_Number operator/(const boomslang_Number&) const;
    boomslang_Number operator-() const;
    bool operator==(boomslang_Number);
    bool operator!=(boomslang_Number);
    bool operator>(boomslang_Number);
    bool operator<(boomslang_Number);
    bool operator>=(boomslang_Number);
    bool operator<=(boomslang_Number);
    bool operator==(boomslang_Number) const;
    bool operator!=(boomslang_Number) const;
    bool operator>(boomslang_Number) const;
    bool operator<(boomslang_Number) const;
    bool operator>=(boomslang_Number) const;
    bool operator<=(boomslang_Number) const;
    operator bool();
    operator int();
    operator unsigned int();
    operator double();
    operator float();
    operator boomslang_Integer();
    operator boomslang_UnsignedInteger();
    operator boomslang_Byte();
    boomslang_String boomslang_toString();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    void boomslang_output();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print();
    void boomslang_print() const;
};

//Base positive class
class boomslang_UnsignedInteger{
    public:
    uint32_t data;
    boomslang_UnsignedInteger();
    ~boomslang_UnsignedInteger();
    boomslang_UnsignedInteger(const double&);
    boomslang_UnsignedInteger(const int32_t&);
    boomslang_UnsignedInteger(const bool&);
    boomslang_UnsignedInteger(const uint32_t&);
    boomslang_UnsignedInteger(const boomslang_Byte&);
    boomslang_UnsignedInteger(const boomslang_Boolean&);
    boomslang_UnsignedInteger(const boomslang_Number&);
    void operator=(boomslang_UnsignedInteger);
    void operator+=(boomslang_UnsignedInteger);
    void operator-=(boomslang_UnsignedInteger);
    void operator*=(boomslang_UnsignedInteger);
    void operator/=(boomslang_UnsignedInteger);
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
    operator bool();
    operator int();
    operator unsigned int();
    operator double();
    operator float();
    boomslang_String boomslang_toString();
    boomslang_Number boomslang_toNumber();
    boomslang_Integer boomslang_toInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    void boomslang_output();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print();
    void boomslang_print() const;
};

//Base integer class
class boomslang_Integer{
    public:
    int32_t data;
    boomslang_Integer();
    ~boomslang_Integer();
    boomslang_Integer(const double&);
    boomslang_Integer(const bool&);
    boomslang_Integer(const int32_t&);
    boomslang_Integer(const uint32_t&);
    boomslang_Integer(const boomslang_Byte&);
    boomslang_Integer(const boomslang_Boolean&);
    boomslang_Integer(const boomslang_Number&);
    void operator=(boomslang_Integer);
    void operator+=(boomslang_Integer);
    void operator-=(boomslang_Integer);
    void operator*=(boomslang_Integer);
    void operator/=(boomslang_Integer);
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
    operator bool();
    operator int();
    operator unsigned int();
    operator double();
    operator float();
    boomslang_String boomslang_toString();
    boomslang_Number boomslang_toNumber();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Byte boomslang_toByte();
    boomslang_Boolean boomslang_toBoolean();
    void boomslang_output() const;
    void boomslang_output();
    void boomslang_input();
    void boomslang_print() const;
    void boomslang_print();
};

//Base byte class
class boomslang_Byte{
    public:
    uint8_t data;
    boomslang_Byte();
    ~boomslang_Byte();
    boomslang_Byte(const double&);
    boomslang_Byte(const int32_t&);
    boomslang_Byte(const bool&);
    boomslang_Byte(const uint8_t&);
    boomslang_Byte(const uint32_t&);
    boomslang_Byte(const boomslang_Number&);
    boomslang_Byte(const boomslang_Integer&);
    boomslang_Byte(const boomslang_UnsignedInteger&);
    void operator=(boomslang_Byte);
    void operator+=(boomslang_Byte);
    void operator-=(boomslang_Byte);
    void operator*=(boomslang_Byte);
    void operator/=(boomslang_Byte);
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
    operator bool();
    operator int();
    operator unsigned int();
    operator double();
    operator float();
    boomslang_String boomslang_toString();
    boomslang_Number boomslang_toNumber();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    boomslang_Boolean boomslang_toBoolean();
    void boomslang_output();
    void boomslang_input();
    void boomslang_print();
};

// Base Boolean class
class boomslang_Boolean{
    public:
    bool data;
    boomslang_Boolean();
    boomslang_Boolean(bool);
    boomslang_Boolean(const boomslang_Number&);
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
    boomslang_Number boomslang_toNumber();
    boomslang_Integer boomslang_toInteger();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Byte boomslang_toByte();
    void boomslang_output();
    void boomslang_input();
    void boomslang_print();
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
    what& operator[](const boomslang_Number&);
    what& operator[](const boomslang_Number&) const;
    boomslang_List<what> operator+(const boomslang_List<what>&);
    void operator+=(const boomslang_List<what>&);
    void operator+=(const what&);
    void boomslang_clear();
    void boomslang_append(const boomslang_List<what>&);
    void boomslang_append(const what&);
    void boomslang_prepend(const boomslang_List<what>&);
    void boomslang_prepend(const what&);
    void boomslang_insert(const boomslang_List<what>&, const boomslang_Number&);
    void boomslang_insert(const what&, const boomslang_Number&);
    void boomslang_insert(const boomslang_List<what>&, const boomslang_Integer&);
    void boomslang_insert(const what&, const boomslang_Integer&);
    void boomslang_remove();
    void boomslang_remove(const boomslang_Integer&);
    void boomslang_remove(const boomslang_Number&);

    what& boomslang_get(const boomslang_Number&);
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
    boomslang_Array(const boomslang_Number&);
    boomslang_Array(const boomslang_Integer&);
    boomslang_Array(const boomslang_Array<what>&);
    ~boomslang_Array();
    void operator=(const boomslang_Array<what>&);
    void boomslang_resize(const boomslang_Number&);
    void boomslang_resize(const boomslang_Integer&);
    what& boomslang_get(const boomslang_Number&);
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
template <class what> what& boomslang_List<what>::operator[](const boomslang_Number& index){
    if((int)index.data < data.size() and (int)index.data >= 0) return data[(int)index.data]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
}
template <class what> what& boomslang_List<what>::operator[](const boomslang_Number& index) const{
    if((int)index.data < data.size() and (int)index.data >= 0) return data[(int)index.data]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
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

template <class what> void boomslang_List<what>::boomslang_insert(const what& other, const boomslang_Number& where){
    if((int) where.data <= (int) data.size() and (int) where.data>-1){
        data.insert(data.begin() + (int) where.data, other);
    } else if((int) where.data > (int) data.size()){
        data.push_back(other);
    } else {
        data.insert(data.begin(), other);
    }
}
template <class what> void boomslang_List<what>::boomslang_insert(const boomslang_List<what>& another_list, const boomslang_Number& where){
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
template <class what> void boomslang_List<what>::boomslang_remove(const boomslang_Number& where){
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

template <class what> what& boomslang_List<what>::boomslang_get(const boomslang_Number& n){
    return data[ int(n.data) ];
}

template <class what> what& boomslang_List<what>::boomslang_get(const boomslang_Integer& n){
    return data[ int(n.data) ];
}

template <class what> boomslang_Integer boomslang_List<what>::boomslang_length(){
    return boomslang_Integer(data.size());
}

//Base Array Functions
template <class what> boomslang_Array<what>::boomslang_Array(){}
template <class what> boomslang_Array<what>::boomslang_Array(const boomslang_Number& len){
    data = new what[(int) len.data];
}
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
template <class what> void boomslang_Array<what>::boomslang_resize(const boomslang_Number& len){
    delete[] data;
    data = new what[(int) len.data];
}
template <class what> void boomslang_Array<what>::boomslang_resize(const boomslang_Integer& len){
    delete[] data;
    data = new what[(int) len.data];
}
template <class what> what& boomslang_Array<what>::boomslang_get(const boomslang_Number& index){
    return data[(int) index.data];
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
