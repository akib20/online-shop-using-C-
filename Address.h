#ifndef ADDRESS_H_INCLUDED
#define ADDRESS_H_INCLUDED

#include "part_C1.h"

#include <iostream>

using namespace std;

class address

{
public:
     void setHomeInfo() ;
    string getHomeInfo()const;

      void setRoadInfo();
    string getRoadInfo() const;
    void setCity();
    string getCity() const;
    void setMobile();
    string getMobile() const;
    void setEmail();
    string getEmail() const;
private:
     string homeInfo;
    string roadInfo;
    string city;
    string mobile;
    string email;
};

void address::setHomeInfo()
{
    cout<<"Please Enter Home Info : ";
    cin.ignore();
    getline(cin, homeInfo) ;


}

string address::getHomeInfo() const
{
    return homeInfo;
}

void address::setRoadInfo()
{
    cout<<"Enter road info : ";
    cin.ignore();
    getline(cin,roadInfo);
}

string address::getRoadInfo() const
{
    return roadInfo;
}
void address::setCity()
{
    cout<<"Enter your city : ";
    cin.ignore();
    getline(cin,city);

}

string address::getCity() const
{
    return city;
}

void address::setMobile()
{
    cout<<"Enter mobile : ";
    cin>>mobile;
}
string address::getMobile() const
{
    return mobile;
}
void address::setEmail()
{
    cout<<"Enter email : ";
    cin.ignore();
    getline(cin,email);
}
string address::getEmail() const
{
return email;}

#endif // ADDRESS_H_INCLUDED
