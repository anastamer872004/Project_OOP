#include "ContactBook.h"

int ContactBook::counter = 0;

int ContactBook::Aliascounter = 0;

ContactBook::ContactBook(int s) : size (s){

    contact = new Contact[size];
}

ContactBook::~ContactBook(){

    delete [] contact;
}

void ContactBook::add_user(){

    if(counter == size){
        cout<<"  FULL DATA BASE\n";
        return;
    }

    char key;   int id;

    for(int i = counter ; i < size ; i++){

        cout<<"  ID : ";  cin>>id;   contact[i].set_id(id);   cin.ignore();
        cout<<"  FIRST NAME : "; getline(cin,input);    contact[i].set_fname(input);
        cout<<"  LAST NAME : ";  getline(cin,input);    contact[i].set_lname(input);
        cout<<"  CITY : ";       getline(cin,input);    contact[i].set_city(input);
        cout<<"  GENDER : ";     getline(cin,input);    contact[i].set_gender(input);
        cout<<"  NOTE : ";       getline(cin,input);    contact[i].set_note(input);

        contact[i].add_phone();
        contact[i].add_email();
        contact[i].add_address();
        contact[i].add_date();

        counter ++;
        Aliascounter ++;

        cout<<"  ANOTHER USER ? Y/N : ";    cin>>key;

        if(key == 'y' || key == 'Y')
            continue;
        else
            break;
    }
}

void ContactBook::edit(){

    if(counter == 0){
        cout<<"  NO USERS INSERTED\n";
        return;
    }

    string input;
    int c;  cout<<"  ID : ";    cin>>c;

    for(int i = 0 ; i < counter ; i++){
        if(contact[i].get_id() == c){

            cout<<"  1-EDIT USER INFOR\n";
            cout<<"  2-EDIT PHONE INFOR\n";
            cout<<"  3-EDIT EMAIL INFOR\n";
            cout<<"  4-EDIT ADDRESS INFOR\n";
            cout<<"  5-EDIT DATE INFOR\n";
            cout<<"  CHOICE : ";    cin>>c;

            switch(c){

                case 1 : {
                    cout<<"  NEW ID : ";     cin>>c;                contact[i].set_id(c);      cin.ignore();
                    cout<<"  FNAME : ";      getline(cin,input);    contact[i].set_fname(input);
                    cout<<"  LNAME : ";      getline(cin,input);    contact[i].set_lname(input);
                    cout<<"  CITY : ";       getline(cin,input);    contact[i].set_city(input);
                    cout<<"  GENDER : ";     getline(cin,input);    contact[i].set_gender(input);
                    cout<<"  NOTE : ";       getline(cin,input);    contact[i].set_note(input);

                    break;
                }
                case 2 :
                    cin.ignore();
                    contact[i].edit_phone();
                    break;
                case 3 :
                    cin.ignore();
                    contact[i].edit_email();
                    break;
                case 4 :
                    cin.ignore();
                    contact[i].edit_address();
                    break;
                case 5 :
                    cin.ignore();
                    contact[i].edit_date();
                    break;
            }
        }
        else if(i == counter -1){
            cout<<"  NO MATCHING ID\n";
            return;
        }
    }

}

bool ContactBook::search(){
    if(counter == 0){
        cout<<"  NO USERS INSERTED\n";
        return false;
    }

    int c;

    cout<<"  1-ID SEARCH\n";
    cout<<"  2-PHONE SEARCH\n";
    cout<<"  3-EMAIL SESARCH\n";
    cout<<"  4-ADDRESS SEARCH\n";
    cout<<"  5-DATE SEARCH\n\n";

    cout<<"  CHOICE : ";    cin>>c;

    switch(c){
    case 1 :{

        cout<<"  ID TO SEARCH : ";   cin>>c;

        for (int i = 0 ; i < counter ; i ++){
            if(contact[i].get_id() == c){
                cout<<"  SEARCH RESULT : ";
                return true;
            }

            else if(i == counter-1){
                cout<<"  NO MATCHING ID\n";
                return false;
            }
        }
    }
    case 2 :{

        cout<<"  ID TO SEARCH : ";   cin>>c;

        for (int i = 0 ; i < counter ; i ++){
            if(contact[i].get_id() == c){
                cin.ignore();
                return contact[i].search_Phone();

            }

            else if(i == counter-1){
                cout<<"  NO MATCHING ID\n";
                return false;
            }
        }
    }
    case 3 :{

        cout<<"  ID TO SEARCH : ";   cin>>c;

        for (int i = 0 ; i < counter ; i ++){
            if(contact[i].get_id() == c){
                cin.ignore();
                return contact[i].search_email();
            }

            else if(i == counter-1){
                cout<<"  NO MATCHING ID\n";
                return false;
            }
        }
    }
    case 4 :{

        cout<<"  ID TO SEARCH : ";   cin>>c;

        for (int i = 0 ; i < counter ; i ++){
            if(contact[i].get_id() == c){
                cin.ignore();
                return contact[i].search_address();
            }

            else if(i == counter-1){
                cout<<"  NO MATCHING ID\n";
                return false;
            }
        }
    }
      case 5 :{

        cout<<"  ID TO SEARCH : ";   cin>>c;

        for (int i = 0 ; i < counter ; i ++){
            if(contact[i].get_id() == c){
                cin.ignore();
                return contact[i].search_date();
            }

            else if(i == counter-1){
                cout<<"  NO MATCHING ID\n";
                return false;
            }
        }
    }
}
}

void ContactBook::number(){

    cout<<"  NUMBER OF USERS IS : "<<Aliascounter<<"\n";
}

void ContactBook::show_all(){

    if(Aliascounter == 0){
        cout<<"  NO USERS INSERTED\n";
        return;
    }

    for (int i = 0; i < counter ; i++)
    {

        if(contact[i].get_id() == -1)
            continue;



        int min = i;
        for (int j = i + 1; j < counter; j++){

            if (contact[j].get_fname() <= contact[min].get_fname()){

                if(contact[j].get_fname() < contact[min].get_fname())
                    min = j;

                else{
                    if(contact[j].get_lname() <= contact[min].get_lname()){
                        if(contact[j].get_lname() < contact[min].get_lname())
                            min = j;
                    }
                }
            }

        }

        swap(contact[min], contact[i]);

    }


    for(int i = 0 ; i < counter  ; i++)
        contact[i].show();
}

void ContactBook::delete_user(){

    if(counter == 0){
        cout<<"  NO USERS INSERTED\n";
        return;
    }

    cout<<"  ALL IDS : ";

    for(int i = 0 ; i < counter ; i ++){
        if(contact[i].get_id() == -1)
            continue;

        cout<<contact[i].get_id()<<" - ";
    }

    int c;  cout<<"\n  ID TO BE DELETED : ";  cin>>c;

    for(int i = 0 ; i < counter ; i++ ){
        if(contact[i].get_id() == c){
            contact[i] = {};
            Aliascounter--;
        }
        else if (i == counter-1)
            cout<<"  INVALID ID\n";
    }

}
