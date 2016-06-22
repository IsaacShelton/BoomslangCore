#ifndef BOOMSLANGCORE_H_INCLUDED
#define BOOMSLANGCORE_H_INCLUDED

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <initializer_list>

#define boomslang_self (*this)

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
    void operator=(boomslang_String);
    void operator+=(boomslang_String);
    void operator-=(boomslang_String);
    void operator*=(boomslang_String);
    void operator/=(boomslang_String);
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

//Base number template
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
    boomslang_String boomslang_toString();
    boomslang_UnsignedInteger boomslang_toUnsignedInteger();
    boomslang_Integer boomslang_toInteger();
    void boomslang_output();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print();
    void boomslang_print() const;
};

//Base positive template
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
    void boomslang_output();
    void boomslang_output() const;
    void boomslang_input();
    void boomslang_print();
    void boomslang_print() const;
};

//Base integer template
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
    void boomslang_output() const;
    void boomslang_output();
    void boomslang_input();
    void boomslang_print() const;
    void boomslang_print();
};

//Base byte template
class boomslang_Byte{
    public:
    uint8_t data;
    boomslang_Byte();
    ~boomslang_Byte();
    boomslang_Byte(const double&);
    boomslang_Byte(const int&);
    boomslang_Byte(const bool&);
    boomslang_Byte(const boomslang_Number&);
    void operator=(boomslang_Byte);
    boomslang_Byte operator+(const boomslang_Byte&);
    boomslang_Byte operator-(const boomslang_Byte&);
    boomslang_Byte operator*(const boomslang_Byte&);
    boomslang_Byte operator/(const boomslang_Byte&);
    bool operator==(boomslang_Byte);
    operator bool();
    void boomslang_output();
    void boomslang_input();
    void boomslang_print();

    #ifdef BOOMSLANGDEFINE_Byte
    BOOMSLANGDEFINE_Byte;
    #endif // BOOMSLANGDEFINE_Byte
};

// Base Boolean template
class boomslang_Boolean{
    public:
    bool data;
    boomslang_Boolean();
    boomslang_Boolean(const bool&);
    boomslang_Boolean(const boomslang_Number&);
    ~boomslang_Boolean();
    void operator=(boomslang_Boolean);
    bool operator==(boomslang_Boolean);
    operator bool();
    boomslang_String boomslang_toString();
    boomslang_Number boomslang_toNumber();
    void boomslang_output();
    void boomslang_input();
    void boomslang_print();
};

//Base list template
template <class what>
class boomslang_List{
    public:
    std::vector<what*> data;

    typedef typename std::vector<what*>::iterator iterator;
    typedef typename std::vector<what*>::const_iterator const_iterator;

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
    iterator begin() {return data.begin();}
    const_iterator begin() const {return data.begin();}
    const_iterator cbegin() const {return data.cbegin();}
    iterator end() {return data.end();}
    const_iterator end() const {return data.end();}
    const_iterator cend() const {return data.cend();}
    void boomslang_clear();
    void boomslang_append(const boomslang_List<what>&);
    void boomslang_append(const what&);
    void boomslang_prepend(const boomslang_List<what>&);
    void boomslang_prepend(const what&);
    void boomslang_insert(const boomslang_List<what>&, const boomslang_Number&);
    void boomslang_insert(const what&, const boomslang_Number&);
    void boomslang_remove();
    void boomslang_remove(const boomslang_Number&);
};

//Base map template
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
template <class what> boomslang_List<what>::~boomslang_List(){
    this->boomslang_clear();
}
template <class what> boomslang_List<what>::boomslang_List(std::initializer_list<what> array_data){
    this->boomslang_clear();

    for(what object: array_data){
        data.push_back( new what(object) );
    }
}
template <class what> what& boomslang_List<what>::operator[](int index){
    if(index < data.size() and index >= 0) return *data[index]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
}
template <class what> what& boomslang_List<what>::operator[](int index) const{
    if(index < data.size() and index >= 0) return *data[index]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
}
template <class what> what& boomslang_List<what>::operator[](const boomslang_Number& index){
    if((int)index.data < data.size() and (int)index.data >= 0) return *data[(int)index.data]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
}
template <class what> what& boomslang_List<what>::operator[](const boomslang_Number& index) const{
    if((int)index.data < data.size() and (int)index.data >= 0) return *data[(int)index.data]; else throw boomslang_OutOfIndex(boomslang_String("Element not in List"));
}
template <class what> boomslang_List<what> boomslang_List<what>::operator+(const boomslang_List<what>& another_list){
    boomslang_List<what> new_list;

    for(int i = 0; i < data.size(); i++){
        new_list.data.push_back( new what(*data[i]) );
    }

    for(int i = 0; i < another_list.data.size(); i++){
        new_list.data.push_back( new what(another_list[i]) );
    }
    return new_list;
}
template <class what> void boomslang_List<what>::operator+=(const boomslang_List<what>& another_list){
    for(int i = 0; i < another_list.data.size(); i++){
        data.push_back( new what(another_list[i]) );
    }
}
template <class what> void boomslang_List<what>::operator+=(const what& other){
    data.push_back( other.clone() );
}

template <class what> void boomslang_List<what>::boomslang_append(const what& other){
    data.push_back( new what(other) );
}
template <class what> void boomslang_List<what>::boomslang_append(const boomslang_List<what>& another_list){
    for(int i = 0; i < another_list.data.size(); i++){
        data.push_back( new what(another_list[i]) );
    }
}

template <class what> void boomslang_List<what>::boomslang_prepend(const what& other){
    data.insert(data.begin(), new what(other));
}
template <class what> void boomslang_List<what>::boomslang_prepend(const boomslang_List<what>& another_list){
    for(int i = another_list.data.size()-1; i > -1; i--){
        data.insert(data.begin(),new what(another_list[i]));
    }
}

template <class what> void boomslang_List<what>::boomslang_insert(const what& other, const boomslang_Number& where){
    if((int)where.data <= (int)data.size() and (int)where.data>-1){
        data.insert(data.begin() + (int)where.data, new what(other));
    } else if((int)where.data > (int)data.size()){
        data.push_back( new what(other) );
    } else {
        data.insert(data.begin(), new what(other));
    }
}
template <class what> void boomslang_List<what>::boomslang_insert(const boomslang_List<what>& another_list, const boomslang_Number& where){
    if((int)where.data <= (int)data.size() and (int)where.data>-1){
        for(int i = another_list.data.size()-1; i > -1; i--){
            data.insert(data.begin() + (int)where.data,new what(another_list[i]));
        }
    } else if((int)where.data > (int)data.size()){
        for(int i = 0; i < another_list.data.size(); i++){
            data.push_back( new what(another_list[i]) );
        }
    } else {
        for(int i = another_list.data.size()-1; i > -1; i--){
            data.insert(data.begin(),new what(another_list[i]));
        }
    }
}

template <class what> void boomslang_List<what>::boomslang_remove(){
    if(data.size > 0) data.pop_back();
}
template <class what> void boomslang_List<what>::boomslang_remove(const boomslang_Number& where){
    if((int)where.data <= (int)data.size() and -1 < (int)where.data){
        data.erase(data.begin() + (int)where.data);
    } else if((int)where.data > (int)data.size()){
        if(data.size() > 0) data.pop_back();
    } else {
        data.erase(data.begin());
    }
}

template <class what> void boomslang_List<what>::boomslang_clear(){
    for(int i = 0; i < data.size(); i++){
        delete data[i];
    }
    data.clear();
}

//Base Map Functions
template <class key, class what> boomslang_Map<key,what>::boomslang_Map(){}
template <class key, class what> boomslang_Map<key,what>::~boomslang_Map(){}

//Die function
void boomslang_die();

#endif // BOOMSLANGCORE_H_INCLUDED
