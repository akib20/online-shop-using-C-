#ifndef PART_C1_H_INCLUDED
#define PART_C1_H_INCLUDED

#include "Address.h"

using namespace std;

class part_C : public address
{
public:
    part_C(){}
    void purchase ();
    void setItem ();
    void cart ();
    void deliveryAddress();
    void removeItem();
    void setPrice (int h);
    void getStock();
    int getPrice(int d);
    int getQuantity (int);
    //void setMoney(int money);
    int getcode (int s);
    int getno();
    void displayItem();
    void setChoice (int a, int b, int c, int d);
    //int stock (int Unit,int Price);
    //void codeItem();
    int p;

private:
    int choice=0,choice2=0,choice3=0,bnk,cod,b=1;
    int stock[100];
    int price[100],totalPrice=0;
    int day,month,year,time;
    int quantity[100];
    int noOfChoice =0;
    int itemCode[100]={0};
    const string CODplace[6] = {"-","KL","PJ","Shah Alam","Ampang","Bukit Jalil"};
    const string Bank[6] = {"-","Bank Islam","Bank Rakyat","Maybank","CIMB Bank","Affin Bank"};
    string x;

};

int part_C :: getQuantity (int i)
{

    return quantity[i];
}


int part_C :: getcode (int s)
{
    int num;
    num = itemCode[s];
    return num;
}

int part_C :: getno()
{
    return noOfChoice;
}

int part_C :: getPrice (int d)
{
    return price[d];
}

void part_C :: setPrice (int h)
{
    noOfChoice++;
    price[noOfChoice]=h;
    noOfChoice--;

}

void part_C :: displayItem ()
{
    switch (choice)
    {
        case 1:
            cout <<"iphone";
        switch (choice2)
        {
            case 1: cout << " 7 plus " ;break;
            case 2: cout << " 7 ";break;
            case 3: cout << " 6s plus ";break;
            case 4: cout << " 6s ";break;
            case 5: cout << " 6 plus ";break;
            case 6: cout << " 6 ";break;
        }
                        if(choice3==1)
                            x="(BLACK)";
                        else if(choice3%100==2)
                            x="(GOLD)";
                        else if(choice3%100==3)
                            x="(GREY)";
        cout << x;


        switch (choice2)
        {

            case 1: cout << " RM 3500" <<endl ;break;
            case 2: cout<< " RM 3000"  <<endl ;break;
            case 3: cout << " RM 2700"  <<endl ;break;
            case 4: cout << " RM 2300"  <<endl ;break;
            case 5: cout << " RM 2000" <<endl ;break;
            case 6: cout << " RM 1800"  <<endl ;break;

        }
        break;

        case 2:
            cout << "Macbook";
        switch(choice2)
        {
            case 1: cout << " RM 5000 "<<endl;break;
            case 2: cout << " Pro  RM 6500"<<endl;break;
            case 3: cout << " Air RM 4500"<<endl;break;
        }
        break;

        case 3:
        switch (choice2)
        {
            case 1: cout << "Airpods RM 500"<<endl;break;
            case 2: cout << "Earpods RM 150"<<endl;break;
            case 3: cout << "Apple Watch RM400"<<endl;break;
        }

        break;}

}

void part_C :: setChoice (int a, int b, int c,int d)
{
    noOfChoice++; quantity[noOfChoice]=d;
     itemCode[noOfChoice]= c*100+b*10+a;

}

void part_C:: purchase () // decided to buy
{

    int payment,amount,k;
    do { k=0;
    cout << "Payment option:" << endl;
    cout << "1. Online banking" << endl;
    cout << "2. Cash on Delivery (COD)" << endl;
    cout << "3. Bank in" << endl;
    cin >> payment;
    cout << endl;

    if (payment==1)
    {

        cout << "Please choose your preferred bank : "<< endl;
        cout << "1 " << Bank[1] << "\n2 " << Bank[2] << "\n3 " << Bank[3] << "\n4 " << Bank[4] << "\n5 " << Bank[5] << "\n9 Bank to payment option" << endl;
        cout << "::";
        cin >> bnk;
        cout << endl;
        cout << "";
        cout << "Please enter the amount you want to pay: " << endl;
        cin >> amount;
        if (amount>=totalPrice)
        {cout << "\nPayment successful & your balance is : " << amount - totalPrice << endl;k=9;
        }
        else
        {
            cout << "Insufficient amount. Please try another payment option" << endl;
        }
    }
    else if (payment==2)
    {

        cout << "Please decide the please that available to COD"<< endl;
        cout << "1 " << CODplace[1] << "\n2 " << CODplace[2] << "\n3 " << CODplace[3] << "\n4 " << CODplace[4] << "\n5 " << CODplace[5] << "\n9 Bank to payment option" << endl;
        cout << "::";
        cin >> cod;
        cout << endl;
        cout << "Enter a date to meet dd/mm/yyyy:";
        cin >>day >> month >> year;
        cout << "Enter a time to meet (24-H exp= 1400):";
        cin >> time;
        cout << "Please be 15 min early  at the place to COD.tq" << endl;
        k=9;
    }
    else if(payment==3)
    {
        cout << "Your item will be delivered after you upload a resit picture that you have bank in \n{Please bank in exact amount of money for the item that u have ordered}" << endl; k=9;
    }

    else
    {
        cout << "Invalid input"<< endl;
    }
    }while(k!=9);
}

void part_C :: cart () // list of item
{
    totalPrice = 0;
    cout << "\nYour cart now :"<< endl; ;

    for (int i=1;i<=noOfChoice;i++)
    {choice=itemCode[i]%10;
    choice2=(itemCode[i]%100-choice)/10;
    choice3=(itemCode[i]%1000-choice-choice3)/100;

        cout << i << ") ";


        displayItem();

       cout << endl;
        totalPrice+=price[i]*quantity[i];

    }
       cout << "-->Total that should u pay : RM " << totalPrice << endl;
       cout << endl;

       if (noOfChoice==0)cout << "\n#Your cart is empty#\n" << endl;

        int t=0;
        cout << "1 checkout those item/s " << endl;
        cout << "2 remove any of those item/s " << endl;
        cout << "9 back to selection " << endl;
        cout << "::";
        cin >> t;cout << endl;
        if (t==1)
        {
            deliveryAddress();
            purchase();
        }
        else if (t==2)
        {
            removeItem();
        }


}


void part_C :: removeItem ()
{
    int num,temp,num2,Q;
    cout << "Which number of the item in the cart? :";
    cin >> num;
    num2=num;
    cout << "Quantity of the item ?: ";
    cin >> Q;

    if (Q<quantity[num])
    {
        quantity[num]-=Q;
    }

    else {

    itemCode[num2]=000;
    for (; num2 <=noOfChoice; num2++)
    {
        temp=itemCode[num2+1];
        itemCode[num2+1]=itemCode[num2];
        itemCode[num2]=temp;

    }
    num2=num;

    price[num2]=000;
    for (; num2 <=noOfChoice; num2++)
    {
        temp=price[num2+1];
        price[num2+1]=price[num2];
        price[num2]=temp;

    }
    num2=num;
    quantity[num2]=000;
    for (; num2 <=noOfChoice; num2++)
    {
        temp=quantity[num2+1];
        quantity[num2+1]=quantity[num2];
        quantity[num2]=temp;

    }

     noOfChoice--; }

    cart();


}

void part_C :: deliveryAddress ()
{
    int a;
    cout << "Send the items to : \n1 your address \n2 other address \n::";
    cin >> a;

    if (a==1){
    cout << getHomeInfo() <<" " <<  getRoadInfo()<< " " << getCity();}
    else if (a==2)
        setHomeInfo();setRoadInfo();setCity();

}


#endif // PART_C1_H_INCLUDED
