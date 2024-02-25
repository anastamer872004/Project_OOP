#include "Contact.h"
        //constructor
Contact::Contact(){
    id = -1;
    fname = "";
    lname = "";
    gender = "";
    city  = "";
    note = "";
    phone = new Phone [5];
    email = new Email[5];
    address = new Address[5];
    date   = new Date[5];
}

        //destructor
Contact::~Contact(){
    delete [] phone;
    delete [] email;
    delete [] address;
    delete [] date;
}
        //add  Date
 void Contact::add_date(){

    for(int i = 0 ; i < 5 ; i ++){

        cout<<"  day : ";    getline(cin,input);     date[i].set_day(input);
        cout<<"  month :  "; getline(cin,input);     date[i].set_month(input);
        cout<<"  year : ";   getline(cin,input);     date[i].set_year(input);

        return;
   }
}

        //add  phone
void Contact::add_phone(){

    for(int i = 0 ; i < 5 ; i ++){

        cout<<"  PHONE : "; getline(cin,input);       phone[i].set_phone(input);
        cout<<"  TYPE :  "; getline(cin,input);       phone[i].set_type(input);
        cout<<"  DESCRIPTION : "; getline(cin,input); phone[i].set_desc(input);

        cout<<"  ANOTHER PHONE ? Y/N : ";   cin>>c;

        if(c == 'y' || c == 'Y'){//y
            cin.ignore();
            continue;
        }
        else
            break;
    }
    cin.ignore();
}

        //add email
void Contact::add_email(){


    for(int i = 0 ; i < 5 ; i ++){

        cout<<"  EMAIL : "; getline(cin,input);     email[i].set_email(input);
        cout<<"  TYPE : ";  getline(cin,input);     email[i].set_type(input);
        cout<<"  DESCRIPTION : ";   getline(cin,input); email[i].set_desc(input);

        cout<<"  ANOTHER Email ? Y/N : ";   cin>>c;

        if(c == 'y' || c == 'Y'){
            cin.ignore();
            continue;
        }
        else
            break;
    }
    cin.ignore();
}

        //add address
void Contact::add_address(){

    for(int i = 0 ; i < 5 ; i ++){


        cout<<"  ADDRESS : "; getline(cin,input);     address[i].set_place(input);
        cout<<"  TYPE : ";  getline(cin,input);     address[i].set_type(input);
        cout<<"  DESCRIPTION : ";   getline(cin,input); address[i].set_desc(input);

        cout<<"  ANOTHER ADDRESS ? Y/N : ";   cin>>c;

        if(c == 'y' || c == 'Y'){
            cin.ignore();
            continue;
        }
        else
            cin.ignore();
            break;
    }
     return;
}

        //edit phone
void Contact::edit_phone(){
    if (phone[0].get_phone() == "")
        cout<<"  NO PHONE INSERTED\n";

    cout<<"  PHONE TO BE EDITED : "; cin>>input;
    cin.ignore();

    for(int i = 0 ; i < 5 ; i++){
        if(phone[i].get_phone() == input){
            cout<<"  NEW PHONE : "; getline(cin,input);  phone[i].set_phone(input);
            cout<<"  TYPE : ";      getline(cin,input);  phone[i].set_type(input);
            cout<<"  DESCRIPTION : ";   getline(cin,input); phone[i].set_desc(input);
            return;
        }
    }
    cout<<"  NO MATCHING PHONE\n";
}

        //edit email
void Contact::edit_email(){
    if (email[0].get_email() == "")
        cout<<"  NO Email INSERTED\n";


    cout<<"  EMAIL TO BE EDITED : "; cin>>input;
    cin.ignore();
    int i;
    for( i = 0 ; i < 5 ; i++){
        if(email[i].get_email() == input){
            cout<<"  NEW EMAIL : "; getline(cin,input);  email[i].set_email(input);
            cout<<"  TYPE : ";  getline(cin,input);     email[i].set_type(input);
            cout<<"  DESCRIPTION : ";   getline(cin,input); email[i].set_desc(input);
            break;
        }
    }
    cout<<"  NO MATCHING EMAIL\n";
}

        //edit address
void Contact::edit_address(){
    if (address[0].get_place() == "")
        cout<<"  NO ADDRESS INSERTED\n";


    cout<<"  ADDRESS TO BE EDITED : "; cin>>input;
    cin.ignore();

    for(int i = 0 ; i < 5 ; i++){
        if(address[i].get_place() == input){
            cout<<"  NEW ADDRESS : "; getline(cin,input);  address[i].set_place(input);
            cout<<"  TYPE : ";  getline(cin,input);     address[i].set_type(input);
            cout<<"  DESCRIPTION : ";   getline(cin,input); address[i].set_desc(input);
            break;
        }

        else if(i == 4)
            cout<<"  NO MATCHING ADDRESS\n";
    }
}
        //edit date
void Contact::edit_date(){
    if (date[0].get_day() == "")
        cout<<"  NO DATE INSERTED\n";


    cout<<"  DATE TO BE EDITED : "; cin>>input;
    cin.ignore();

    for(int i = 0 ; i < 5 ; i++){
        if(date[i].get_day() == input){
            cout<<"  NEW DAY : "; getline(cin,input);  date[i].set_day(input);
            cout<<"  month : ";  getline(cin,input);   date[i].set_month(input);
            cout<<"  year : ";   getline(cin,input);   date[i].set_year(input);
            break;
        }

        else if(i == 4)
            cout<<"  NO MATCHING DATE\n";
    }
}


        // delete phone
void Contact::delete_phone(){

    if(phone[0].get_phone() == ""){
        cout<<"  NO PHONE INSERTED\n";
        return;
    }

    cout<<"  PHONE TO BE DELETED : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(phone[i].get_phone())){
            phone[i] = {};
            return;
        }

        else if(i == 4)
            cout<<"  NO MATCHING PHONE\n";
    }

}

        //delete email
void Contact::delete_email(){

    if(email[0].get_email() == ""){
        cout<<"  NO EMAIL INSERTED\n";
        return;
    }

    cout<<"  EMAIL TO BE DELETED : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(email[i].get_email())){
            email[i] = {};
            return;
        }

        else if(i == 4)
            cout<<"  NO MATCHING EMAIL\n";
    }

}

        //delete address
void Contact::delete_address(){

    if(address[0].get_place() == ""){
        cout<<"  NO ADDRESS INSERTED\n";
        return;
    }

    cout<<"  ADDRESS TO BE DELETED : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(address[i].get_place())){
            phone[i] = {};
            return;
        }

        else if(i == 4)
            cout<<"  NO MATCHING ADDRESS\n";
    }

}

        // delete date
void Contact::delete_date(){

    if(date[0].get_day() == ""){
        cout<<"  NO DATE INSERTED\n";
        return;
    }

    cout<<"  DATE TO BE DELETED : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(date[i].get_day())){
            date[i] = {};
            return;
        }

        else if(i == 4)
            cout<<"  NO MATCHING DATE\n";
    }

}



        //phone search
bool Contact::search_Phone(){

    if(phone[0].get_phone() == ""){
        cout<<"  NO PHONE INSERTED\n";
        return false;
    }

    cout<<"  PHONE TO SEARCH : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(phone[i].get_phone()))
            return true;
    }
    return false;
}

        //email search
bool Contact::search_email(){

    if(email[0].get_email() == ""){
        cout<<"  NO EMAIL INSERTED\n";
        return false;
    }

    cout<<"  EMAIL TO SEARCH : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(email[i].get_email()))
            return true;
    }
    return false;
}

        //address search
bool Contact::search_address(){

    if(address[0].get_place() == ""){
        cout<<"  NO ADDRESS INSERTED\n";
        return false;
    }


    cout<<"  ADDRESS TO SEARCH : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(address[i].get_place()))
            return true;
    }
    return false;
}

        //date search
bool Contact::search_date(){

    if(date[0].get_day() == ""){
        cout<<"  NO DATE INSERTED\n";
        return false;
    }

    cout<<"  DATE TO SEARCH : "; getline(cin,input);

    for(int i = 0 ; i < 5 ; i++){
        if(!input.compare(date[i].get_day()))
            return true;
    }
    return false;
}



        //show
   static int anas=0;
void Contact::show(){

    if (id == -1)
        return;
   anas++;

    cout<<"------"<<endl;
    cout<<"USer "<<anas<<endl;
    cout<<"------"<<endl;
    cout<<"  ID : "<<id<<"\t\tFIRSTNAME : "<<fname<<"\t\tLASTNAME : "<<lname
        <<"\n  GENDER : "<<gender<<"\t\tCITY : "<<city<<"\t\tNOTE : "<<note<<endl;


    if(!(phone[0].get_phone() == "")){
        for(int i = 0 ; i < 5 && phone[i].get_phone() != "" ; i++){
                cout<<"  PHONE : "<<phone[i].get_phone()<<"\t\tTYPE : "<<phone[i].get_type()<<"\t\tDESCRIPTION : "<<phone[i].get_desc()<<"\n";
        }
    }

    if(!(email[0].get_email() == "")){
        for(int i = 0 ; i < 5 && email[i].get_email() != "" ; i++){
                cout<<"  EMAIL : "<<email[i].get_email()<<"\t\tTYPE : "<<email[i].get_type()<<"\t\tDESCRIPTION : "<<email[i].get_desc()<<"\n";
        }
    }

    if(!(address[0].get_place() == "")){
        for(int i = 0 ; i < 5 && address[i].get_place() != "" ; i++){
                cout<<"  ADDRESS : "<<address[i].get_place()<<"\t\tTYPE : "<<address[i].get_type()<<"\t\tDESCRIPTION : "<<address[i].get_desc()<<"\n";
        }
    }
     if(!(date[0].get_day() == "")){
        for(int i = 0 ; i < 5 && date[i].get_day() != "" ; i++){
                cout<<"  DAY : "<<date[i].get_day()<<"\t\tMONTH : "<<date[i].get_month()<<"\t\tYEAR : "<<date[i].get_year()<<"\n";
        }

        cout<<"\n\n";
    }
}


void Contact::set_id(int i){
    id = i;
}


void Contact::set_fname(string f){
    fname = f;
}


void Contact::set_lname(string l){
    lname = l;
}


void Contact::set_gender(string g){
 gender = g;
}


void Contact::set_city(string c){
    city = c;
}


void Contact::set_note(string n){
    note = n;
}


int Contact::get_id(){
    return id;
}


string Contact::get_fname(){
    return fname;
}


string Contact::get_lname(){
    return lname;
}


string Contact::get_city(){
    return city;
}


string Contact::get_gender(){
    return gender;
}

string Contact::get_note(){
    return note;
}


