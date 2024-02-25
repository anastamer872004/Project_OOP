#ifndef Contact_H
#define Contact_H
#include <string>
#include <iostream>
#include "Phone.h"
#include "Email.h"
#include "Address.h"
#include "Date.h"
using namespace std;

class Contact
{
    public:
            //setters
        void set_id(int);
        void set_fname(string);
        void set_lname(string);
        void set_gender(string);
        void set_city(string);
        void set_note(string);

            //getters
        int get_id();
        string get_fname();
        string get_lname();
        string get_gender();
        string get_city();
        string get_note();

            //phone manipulation
        void add_phone();
        void edit_phone();
        void delete_phone();
        bool search_Phone();

            //email manipulation
        void add_email();
        void edit_email();
        void delete_email();
        bool search_email();

            //address manipulation
        void add_address();
        void edit_address();
        void delete_address();
        bool search_address();

           //date manipulation
        void add_date();
        void edit_date();
        void delete_date();
        bool search_date();

        void show();


            //defalut
        Contact();
        virtual ~Contact();

    protected:

    private:
        int id;
        string fname;
        string lname;
        string gender;
        string city;
        string note;
        Phone* phone;
        Email* email;
        Date* date;
        Address* address;

        string input; // for functions
        char c;
};

#endif // Contact_H
