#include "Phone.h"
#include <iostream>
using namespace std;

Phone::Phone(){
    phone = "";
    type = "";
    desc = "";
}

Phone::~Phone(){
    //dtor
}

void Phone::set_phone(string p){
    phone = p;
}

void Phone::set_type(string t){
   type=t;
}

void Phone::set_desc(string d){
    desc = d;
}

string Phone::get_phone(){
    return phone;
}
string Phone::get_type(){
  return type;
}

string Phone::get_desc(){
    return desc;
}
