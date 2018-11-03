#ifndef AKIB1_H_INCLUDED
#define AKIB1_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>
#include "Address.h"
#include "admin.h"

using namespace std;


class account: public address, admin
{
public:
    void setUserName();
    string getUserName() const;
    void setPassWord();
    string getPassWord() const;
    void setName();
    string getName() const;
    int mainMenu();
    void registerUser();
    bool isLoggedIN();
    void login();
    int getj();
private:
    string userName;
    string passWord;
    string name;
    int j;

};

void account::setUserName()
{
    cout<<"Please enter a user name.(To exit press [404]):\n";
    cin>>userName;
    if (userName =="404")
        mainMenu();
    else
    {
    cout << "Username: \"" << userName << "\"\n";
    int confirm;
    cout<<"****Confirm? [1=yes, 0=no].****\n ::";
    cin>>confirm;
    while (confirm!= 1 || confirm==0)
    {
        cout<<"Please enter a username.\n ::";
        cin>>userName;

        cout << "User Name: \"" << userName << "\"\n\n";
        cout<<"****Confirm? [1=yes, 0=no].****\n\n";
        cin>>confirm;
    }
    }
}

string account::getUserName() const
{
    return userName;
}

void account::setPassWord()
{
    string  passWord1;
    cout << "***************************************" << endl;
    cout<<"Please enter your password.(To exit press [404]) :\n ::";
    cin>>passWord;
    if (passWord== "404")
        mainMenu();
    else
    {
    cout<<"Please RE-enter your password.(To exit press [404]) :\n";
    cin>>passWord1;
    while (passWord != passWord1)
    {
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << "Error! Passwords do not match." "\n";
        cout<<"Please enter your password.(To exit press [404]) :\n";
        cin>>passWord;
        cout<<"Please re-enter your password. (To exit press [404]) :\n";
        cin>>passWord1;
    }
    }

}
string account::getPassWord() const
{
    return passWord;
}

void account::setName()
{
    cout << "***************************************" << endl;
    cout<<"Please Enter Your Full Name. (To exit press [404]) : ";
    cin.ignore();
    getline(cin, name );
    if (name =="404")
        mainMenu();
}
string account::getName() const
{
    return name;
}


int account::mainMenu()
{
    int choice;
    cout << "\n***************************************" << endl;
    cout<<"Hello, Would you like to log in or register?" "\n";
    cout<<"[1] Login \n";
    cout<<"[2] Register \n";
    cout<<"[3] Exit \n ::";
    cin>>choice;
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        registerUser();
        break;
    case 3: return 3; j=0;break;
    }account account1;

}

void account::registerUser()
{
    cout<<endl<<endl;
    setUserName();
    setPassWord();
    setName();
    address::setHomeInfo();
    address::setRoadInfo();
    address::setCity();
    address::setMobile();
    address::setEmail();
    ofstream usersFile;
    string file=userName+".txt";
    usersFile.open(file.c_str());
    usersFile<<userName<<endl<<passWord<<endl<<name<<endl<<getHomeInfo()<<endl<<getRoadInfo()<<endl<<getCity()<<endl<<getMobile()<<endl<<getEmail();
    usersFile.close();

    mainMenu();

}
bool account::isLoggedIN()
{
    string userName, passWord,un,pw;
    cout << "(^_^)   (^_^)   (^_^)   (^_^)    (^_^)    (^_^)   (^_^)    (^_^) " << endl;
    cout<<"Enter user name : ";
    cin>>userName;
    cout<<"Enter password : ";
    cin>>passWord;
    ifstream writeFile;
    string read= userName + ".txt";
    writeFile.open(read.c_str());
    getline(writeFile, un);
    getline(writeFile, pw);
    if (un==userName && pw==passWord  )
    {
            return true;
    }

    else
    {
        return false;
    }
}
void account::login()
{   int press;j=0;
    cout<<endl<<endl;
    cout<<"For ADMIN login, press [1]\n";
    cout<<"For Customer login, press [2]\n";
    cout<<"For Exit, press [3]\n ::";
    cin>>press;
    cout << "\n" << endl;

        switch(press)
        {
    case 1:
                admin::loginAdmin();
                break;
    case 2:
    {
    bool status=isLoggedIN();
    if (!status)
    {
        cout<<"False login \n"<<endl;
        j=0;
    }
    else
    {
        cout << "(^_^)   (^_^)   (^_^)   (^_^)" << endl;
        cout<<"successfully logged in \n"<<endl;
        j=1;
    }
    }
    break;



        }

}
int account::getj()
{
    return j;
}

#endif // AKIB1_H_INCLUDED
