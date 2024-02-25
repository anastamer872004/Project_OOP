#include "Date.h"

Date::Date()
{
    day="";
    month="";
    year="";
}

Date::~Date()
{
    //dtor
}
void Date::set_day(string d)
{
    day=d;
}
void Date::set_month(string m)
{
    month=m;
}
void Date::set_year(string y)
{
    year=y;
}

string Date::get_day()
{
    return day;
}
string Date::get_month()
{
    return month;
}
string Date::get_year()
{
    return year;
}
