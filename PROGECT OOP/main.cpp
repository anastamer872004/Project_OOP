#include <iostream>
#include "Phone.h"
#include "Email.h"
#include "Address.h"
#include "Date.h"
#include "Contact.h"
#include "ContactBook.h"
using namespace std;

int main()
{
    ContactBook c(10);
    int choice = 1;

    while (choice){
        cout<<"\t\t\tContactBook APP \n\n";
        cout<<"  1- ADD NEW USER \n";
        cout<<"  2- EDIT  \n";
        cout<<"  3- SEARCH \n";
        cout<<"  4- COUNT USERS \n";
        cout<<"  5- SHOW ALL USER \n";
        cout<<"  6- DELETE USERS \n";
        cout<<"  7- Exit The Program\n\n";
        cout<<"  CHOICE ? "; cin>>choice;

        switch(choice){
        case 1 :
            system("cls");
            c.add_user();
            break;
        case 2 :{
            system("cls");
            c.edit();
            break;
        }
        case 3 :
            system("cls");
            cout<<c.search()<<endl;
            break;
        case 4 :
            system("cls");
            c.number();
            break;
        case 5 :
            system("cls");
            c.show_all();
            break;
        case 6 :
            system("cls");
            c.delete_user();
            break;
        case 7 :
            system("cls");
            cout<<"\t\tThank You For Using This APP "<<endl;
            return 0;
        }
        cout<<"\n  ANOTHER TRANSACTION ? 1/0 : "; cin>>choice;
        system("cls");
    }
    return 0;
}



























