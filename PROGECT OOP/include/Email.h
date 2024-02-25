#ifndef EMAIL_H
#define EMAIL_H
#include <string>
using namespace std;

class Email
{
    public:
            //setters
        void set_email(string);
        void set_type(string);
        void set_desc(string);

            //getters
        string get_email();
        string get_type();
        string get_desc();

            //defualt
        Email();
        virtual ~Email();

    protected:

    private:
        string email;
        string type;
        string desc;
};

#endif // EMAIL_H
