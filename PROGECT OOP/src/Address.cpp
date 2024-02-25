#include "Address.h"

Address::Address(){
    place = "";
    type = "";
    desc = "";
}

Address::~Address(){
    //dtor
}

void Address::set_place(string p){
    place = p;
}

void Address::set_type(string t){
    type = t;
}

void Address::set_desc(string d){
    desc = d;
}

string Address::get_place(){
    return place;
}

string Address::get_type(){
    return type;
}

string Address::get_desc(){
    return desc;
}
