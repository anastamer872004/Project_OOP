#ifndef PHONE_H
#define PHONE_H
#include <string>
using namespace std;

class Phone
{
    public:

            //setters
        void set_phone(string);
        void set_type(string);
        void set_desc(string);

            //getters
        string get_phone();
        string get_type();
        string get_desc();

            //default
        Phone();
        virtual ~Phone();

    protected:

    private:
        string phone;
        string type;
        string desc;
};
#endif // PHONE_H

