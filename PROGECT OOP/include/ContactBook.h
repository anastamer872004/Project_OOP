#ifndef CONTACTBook_H
#define CONTACTBook_H
#include <Contact.h>
#include <Phone.h>
#include <Address.h>
#include <Email.h>
#include <Date.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ContactBook
{
    public:

        void add_user();
        void edit();
        bool search();
        void number();
        void show_all();
        void delete_user();

            //default
        ContactBook(int);
        virtual ~ContactBook();

    protected:

    private:

        Contact* contact;

        int size;


        static int Aliascounter;

        static int counter;

        string input;


};

#endif // CONTACTBook_H
