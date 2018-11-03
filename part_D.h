#ifndef PART_D_H_INCLUDED
#define PART_D_H_INCLUDED

#include "part_C1.h"
using namespace std;

class part_D:public part_C
{
public:
    part_D();
    void stockReduce();
    void checkStock ();
    void amountDay ();
    void itemDay ();

private:

    int category;
    int stock1[7][4]={{3}};
    int stock2[4]={5};
    int stock3[4]={10};
    int choice=0,choice2=0,choice3=0;
};

part_D :: part_D ()
{
    checkStock();
    amountDay ();
    itemDay ();
}

void part_D::stockReduce ()
{
    int item;
    for (int i = 1; i < getno(); i++){
     item=getcode(i);
    choice=item%10;
    choice2=(item%100-choice)/10;
    choice3=(item%1000-choice-choice3)/100;

    if (choice ==1 )
    {
        stock1[choice2][choice3]--;
    }

    else if (choice ==2 )
    {
        stock1[choice][choice2]--;
    }

    else if (choice ==3 )
    {
        stock1[choice][choice2]--;
    }}

}

void part_D::checkStock ()
{
    for(int i=1;i<7;i++)
        for(int j=1;j<4;j++)
            stock1[i][j]=3;

    for(int i=1;i<4;i++)
        stock2[i]=5;

    for(int i=1;i<4;i++)
        stock3[i]=10;



    cout << "Please type which category you want to check (1= Iphone, 2= Mac, 3= Accessories): ";
    cin  >> category;
    cout << endl;


    if (category== 1)
    {


        cout << "The remaining stock for Iphone " << endl;
        cout << endl;

        cout << "Iphone 7+ black = "      << stock1[1][1] << endl;
        cout << "Iphone 7+ grey = "       << stock1[1][2] << endl;
        cout << "Iphone 7+ gold = "       << stock1[1][3] << endl;

        cout << endl;

        cout << "Iphone 7 black= "       <<  stock1[2][1]  << endl;
        cout << "Iphone 7 grey= "        <<  stock1[2][2]  << endl;
        cout << "Iphone 7 gold= "        <<  stock1[2][3] << endl;

        cout << endl;

        cout << "Iphone 6s black = "      << stock1[3][1]  << endl;
        cout << "Iphone 6s grey = "       << stock1[3][2]  << endl;
        cout << "Iphone 6s gold = "       << stock1[3][3]  << endl;

        cout << endl;

        cout << "Iphone 6+ black = "      <<  stock1[4][1] << endl;
        cout << "Iphone 6+ grey = "       <<  stock1[4][2]  << endl;
        cout << "Iphone 6+ gold = "       <<  stock1[4][3] << endl;

        cout << endl;

        cout << "Iphone 6s+ black = "      << stock1[5][1]  << endl;
        cout << "Iphone 6s+ grey = "      << stock1[5][2] << endl;
        cout << "Iphone 6s+ gold = "      << stock1[5][3]  << endl;

        cout << endl;

        cout << "Iphone 6 black = "        <<  stock1[6][1]  << endl;
        cout << "Iphone 6 grey = "        <<  stock1[6][2] << endl;
        cout << "Iphone 6 gold = "        <<  stock1[6][3]  << endl;

    }


    else if (category== 2)
    {


        cout << "The remaining stock for Mac " << endl;
        cout << endl;
        cout << "Macbook= "           << stock2[1]<< endl;
        cout << "Macbook Air= "       << stock2[2] << endl;
        cout << "Macbook Pro= "       << stock2[3] << endl;

    }

    else if (category== 3)
    {

        cout << "The remaining stock for accessories" << endl;
        cout << endl;
        cout << "Airpods= " << stock3[1] <<endl;
        cout << "Earpods= " << stock3[2]<< endl;
        cout << "Apple Watch= " << stock3[3] << endl;
    }

    else
    {
        cout << "The input is invalid!!!!!!!!!!!" << endl;
    }

    cout << endl;
    cout << endl;
}


void part_D::amountDay()
{
    cout << "The total amount for this day is " <<  getno()  << endl;
    cout << endl;
    cout << endl;
}



void part_D::itemDay ()
{
    cout << "Please type which category you want to check ";
    cout << "(1= Iphone, 2= Mac, 3=Accesories): ";
    cin  >> category;
    cout << endl;

    if (category== 1)
    {


        cout << "The number of items that already sold for Iphone " << endl;
        cout << endl;

        cout << "Iphone 7+ black = "      << stock1[1][1] << endl;
        cout << "Iphone 7+ grey = "       << stock1[1][2] << endl;
        cout << "Iphone 7+ gold = "       << stock1[1][3] << endl;

        cout << endl;

        cout << "Iphone 7 black= "       <<  stock1[2][1]  << endl;
        cout << "Iphone 7 grey= "        <<  stock1[2][2]  << endl;
        cout << "Iphone 7 gold= "        <<  stock1[2][3] << endl;

        cout << endl;

        cout << "Iphone 6s black = "      << stock1[3][1]  << endl;
        cout << "Iphone 6s grey = "       << stock1[3][2]  << endl;
        cout << "Iphone 6s gold = "       << stock1[3][3]  << endl;

        cout << endl;

        cout << "Iphone 6+ black = "      <<  stock1[4][1] << endl;
        cout << "Iphone 6+ grey = "       <<  stock1[4][2]  << endl;
        cout << "Iphone 6+ gold = "       <<  stock1[4][3] << endl;

        cout << endl;

        cout << "Iphone 6s+ black = "      << stock1[5][1]  << endl;
        cout << "Iphone 6s+ grey = "      << stock1[5][2] << endl;
        cout << "Iphone 6s+ gold = "      << stock1[5][3]  << endl;

        cout << endl;

        cout << "Iphone 6 black = "        <<  stock1[6][1]  << endl;
        cout << "Iphone 6 grey = "        <<  stock1[6][2] << endl;
        cout << "Iphone 6 gold = "        <<  stock1[6][3]  << endl;


    }


    else if (category ==2)
    {


        cout << "The remaining stock for Mac " << endl;
        cout << endl;
        cout << "Macbook= "              << stock2[1]<< endl;
        cout << "Macbook Air= "       << stock2[2] << endl;
        cout << "Macbook Pro= "       << stock2[3] << endl;

    }

  else if (category== 3)
    {

        cout << "The remaining stock for accessories" << endl;
        cout << endl;
        cout << "Airpods= " << stock3[1] <<endl;
        cout << "Earpods= " << stock3[2]<< endl;
        cout << "Apple Watch= " << stock3[3] << endl;
    }

    else
    {
        cout << "The input is invalid!!!!!!!!!!!" << endl;
    }

    cout << endl;
    cout << endl;
}

#endif // PART_D_H_INCLUDED
