#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
    public:
        void set_day(string);
        void set_month(string);
        void set_year(string);

        string get_day();
        string get_month();
        string get_year();

        Date();
        virtual ~Date();

    protected:

    private:
        string day;
        string month;
        string year;
};

#endif // DATE_H
