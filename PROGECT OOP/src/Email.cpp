#include "Email.h"

Email::Email(){
    email = "";
    type = "";
    desc = "";
}

Email::~Email(){
    //dtor
}

void Email::set_email(string e){
    email = e;
}

void Email::set_type(string t){
    type = t;
}

void Email::set_desc(string d){
    desc = d;
}

string Email::get_email(){
    return email;
}

string Email::get_type(){
    return type;
}

string Email::get_desc(){
    return desc;
}
