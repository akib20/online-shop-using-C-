#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include "part_D.h"
#include <iostream>

using namespace std;
class admin
{
public:
    void loginAdmin();

private:
    string AdminName;
    string AdminPassWord;

};


void admin::loginAdmin()
{
   int attempts = 0;


for (int attempts = 0; attempts < 5; ++attempts )
{
     cout << "Enter your username: " << endl;
    cin >> AdminName;
    cout << "enter your password! \n";
    cin >> AdminPassWord;
    ++attempts;
    if ( AdminName == "admin" && AdminPassWord == "123456" )
    {
        cout << "granted!\n";
        part_D a;
        a.checkStock();
        break;
    }
    else
    {
        cout << "denied! \n";
    }
}

}


#endif // ADMIN_H_INCLUDED
