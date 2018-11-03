#ifndef PART_A_H_INCLUDED
#define PART_A_H_INCLUDED
#include <iostream>
#include "part_C1.h"
#include "new Assignment partC.h"


using namespace std;

class part_A : public part_C,newpart_C
{
public:
    part_A();
    int getNoOfiphone();
    void showSelection();
    void selectionIphone();
    void selectionMacbook();
    void selectionAccessories();
    int getunit();
    int getprice();
    part_A(int setprice);
    void selectionColour();
    void searchByName();

private:
    int price,choice3,unit;

};

void part_A::searchByName()
{
    newpart_C::serachProduct();

}


part_A::part_A()
{
    showSelection();
}
void part_A::showSelection()
{
cout << "*** Welcome to APPLE STORE ***" << endl;
cout << "To select an item, enter " << endl;
cout << "1 for iphone" << endl;
cout << "2 for Macbook" << endl;
cout << "3 for Accessories" << endl;
cout << "8 for cart" << endl;
cout << "9 to logout" << endl;
}
void part_A::selectionIphone()
{
    cout << "To select iphone,enter " << endl;
    cout << "1 for iphone 7 plus" << endl;
    cout << "2 for iphone 7" << endl;
    cout << "3 for iphone 6s plus" << endl;
    cout << "4 for iphone 6s" << endl;
    cout << "5 for iphone 6 plus" << endl;
    cout << "6 for iphone 6" << endl;
    cout << "9 to back" << endl;
}
void part_A::selectionMacbook()
{
    cout << "To select Macbook,enter " << endl;
    cout << "1 for Macbook (In stock : 5)" << endl;
    cout << "2 for Macbook pro (In stock : 5)" << endl;
    cout << "3 for Macbook Air (In stock : 5)" << endl;
    cout << "9 to back" << endl;
}
void part_A::selectionAccessories()
{
    cout << "To select accessories,enter " << endl;
    cout << "1 for Airpods (In stock : 10)" << endl;
    cout << "2 for Earpods (In stock : 10)" << endl;
    cout << "3 for Apple Watch (In stock : 10)" << endl;
    cout << "9 to back" << endl;
}
void part_A::selectionColour()
{
    cout << "To select colour,enter " << endl;
    cout << "1 for BLACK (In stock : 3)" << endl;
    cout << "2 for GOLD (In stock : 3)" << endl;
    cout << "3 for GREY (In stock : 3)" << endl;
    cout << "9 to back" << endl;
}

part_A::part_A(int setprice)
{
        price=setprice;
}
int part_A::getprice()
{
    return price;
}
int part_A::getunit()
{
    return unit;
}

#endif // PART_A_H_INCLUDED
