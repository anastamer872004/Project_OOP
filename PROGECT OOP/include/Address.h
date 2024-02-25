#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
using namespace std;

class Address
{
    public:
            //setters
        void set_place(string);
        void set_type(string);
        void set_desc(string);

            //getters
        string get_place();
        string get_type();
        string get_desc();

            //default
        Address();
        virtual ~Address();

    protected:

    private:
        string place;
        string type;
        string desc;
};

#endif // ADDRESS_H
