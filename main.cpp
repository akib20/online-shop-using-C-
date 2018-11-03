#include <iostream>
#include <string>
#include <fstream>
#include "part_A.h"
#include "part_C1.h"
#include "Akib1.h"
#include "Address.h"
#include "admin.h"
#include "part_D.h"
using namespace std;


int main()
{
    int s,harga;
    bool status;
    int choice,choice2,choice3,quantity,cart;
    string x;
    cout << "Hello World" << endl;
    part_A i7plus(3500);
    part_A i7(3000);
    part_A i6splus(2700);
    part_A i6s(2300);
    part_A i6plus(2000);
    part_A i6(1800);
    part_A Macbook(5000);
    part_A MacbookAir(6500);
    part_A MacbookPro(4500);
    part_A Airpods(500);
    part_A Earpods(150);
    part_A AppleWatch(400);
    part_C basket;


    do{
    account account1;
    s=account1.mainMenu();

    if (s!=3){

    if(account1.getj()==1){


    do{
    part_A hmm;
    cout << "::";
    cin >> choice;
    cout << endl;

    if (choice==8)
    {
        basket.cart();
    }

    else if (choice!=9)



    while(choice!=9)
   {  int invalid;

       switch(choice)
       {
       case 1:
        while (invalid!=0){
                invalid=0;
        hmm.selectionIphone();
        cout << "::";
        cin >> choice2;

        cout << endl;
        if (choice2>0 && choice2<7){


        if (choice==1){
                hmm.selectionColour();
                cout << "::";
                cin >> choice3;
                cout << endl;
                        if(choice3==1)
                            x="(BLACK)";
                        else if(choice3==2)
                            x="(GOLD)";
                        else if(choice3==3)
                            x="(GREY)";}}
                else
                {
                    cout << "1Invalid selection" << endl; invalid=1;
                }
        }

            while(choice2!=9)
            {

                switch(choice2)
                {

                case 1:basket.setPrice(i7plus.getprice());
                   cout << "The price for iphone 7 plus" << x << " is RM " << i7plus.getprice()  << endl;
                    break;
                case 2:basket.setPrice(i7.getprice());
                    cout << "The price for iphone 7" << x << " is RM " << i7.getprice() << endl;
                    break;
                case 3:basket.setPrice(i6splus.getprice());
                    cout << "The price for iphone 6s plus" << x << " is RM " << i6splus.getprice() << endl;
                    break;
                case 4:basket.setPrice(i6s.getprice());
                    cout << "The price for iphone 6s" << x << " is RM " << i6s.getprice()  << endl;
                    break;
                case 5:basket.setPrice(i6plus.getprice());

                    cout << "The price for iphone 6 plus" << x << " is RM " << i6plus.getprice() << endl;
                    break;
                case 6:basket.setPrice(i6.getprice());
                    cout << "The price for iphone 6" << x << " is RM " << i6.getprice() << endl;
                    break;
                default:
                    cout << "Invalid selection" << endl; invalid=1;
                }
                break;
            }
            break;

       case 2:
        while (invalid!=0){
                invalid=0;
        hmm.selectionMacbook();
        cout << "::";
        cin >> choice2;
        cout << endl;

            while(choice2!=9)
            {
                switch(choice2)
                {
                case 1:basket.setPrice( Macbook.getprice());
                    cout << "The price for Macbook is RM " << Macbook.getprice()  << endl;
                    break;
                case 2:basket.setPrice(MacbookAir.getprice());
                    cout << "The price for Macbook Air is RM " << MacbookAir.getprice() << endl;
                    break;
                case 3:basket.setPrice(MacbookPro.getprice());
                    cout << "The price for Macbook Pro is RM " << MacbookPro.getprice() << endl;
                    break;
                default:
                    cout << "Invalid selection" << endl;invalid=1;
                }
                break;
            }
            break;}

       case 3:
           while (invalid!=0){
                invalid=0;
        hmm.selectionAccessories();
        cout << "::";
        cin >> choice2;
        cout << endl;

            while(choice2!=9)
            {
                switch(choice2)
                {
                case 1:basket.setPrice(Airpods.getprice());
                    cout << "The price for Airpods is RM " << Airpods.getprice()  << endl;
                    break;
                case 2:basket.setPrice(Earpods.getprice());
                    cout << "The price for Earpods is RM " << Earpods.getprice()  << endl;
                    break;
                case 3:basket.setPrice(AppleWatch.getprice());
                    cout << "The price for Apple Watch is RM " << AppleWatch.getprice()  << endl;
                    break;
                default:
                    cout << "Invalid selection" << endl;invalid=1;
                }
                break;
            }
            break; }

                default:
                    cout << "Invalid selection" << endl;invalid=1;

                case 4:
                     while (invalid!=0){
                invalid=0;
                hmm.searchByName();
       }


    cout << "Quantity of the item :: ";
    cin >> quantity;
    cout << "Do you want to add this item to cart? (1=Yes or 2=No)" << endl;
    cout << "::";
    cin  >> cart;
    cout << endl;

    if (cart==1)
         basket.setChoice(choice,choice2,choice3,quantity);
    else
    {   basket.setPrice (0);
        choice=0;
        choice2=0;
        choice3=0;}

       break;
    }


    }while(choice!=9);


    }while(s!=3);

    }
