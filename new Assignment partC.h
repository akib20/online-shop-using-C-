#ifndef NEW_ASSIGNMENT_PARTC_H_INCLUDED
#define NEW_ASSIGNMENT_PARTC_H_INCLUDED


class newpart_C
{
public:
    void makingProductText();
    void sortArray(string [], int);
int binarySearch(string [], int, string);
void print( string[], int );
void serachProduct();
private:

};

void makingProductText();



void newpart_C::serachProduct()
{

  //  makingProductText();
    ifstream writeFile;
    string read=  "product.txt";
    writeFile.open(read.c_str());
    string sellProduct[12];
    for (int j=0; j<12; j++)
    {
        getline(writeFile, sellProduct[j]);

    }
    int NUM_NAMES=12;
    string productName;
    int results;
// Sort array first
    sortArray(sellProduct, NUM_NAMES);
    cout << "Please enter the product's name: ";
    getline(cin, productName);
    results = binarySearch(sellProduct, NUM_NAMES, productName);
    if (results == -1)
        cout << "That name does not exist in the list.\n";
    else
    {

        cout << "That name is found at element " << sellProduct[results];
        cout << " in the array.\n";
    }
    print(sellProduct,NUM_NAMES) ;
}

void newpart_C::sortArray(string names[], int size)
{
    int startScan, minIndex;
    string minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = names[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (names[index] < minValue)
            {
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[startScan];
        names[startScan] = minValue;
    }
}

int newpart_C::binarySearch(string names[], int size, string value)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (names[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (names[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}
void newpart_C::print( string list[], int length)
{
    for (int i = 0; i < length; i++)
        cout << list[i] <<endl;
    cout << endl;
}

void newpart_C::makingProductText()
{

    ofstream usersFile;
    string file="product.txt";
    usersFile.open(file.c_str());
    string ourProduct[12];
    for(int i=0; i<12; i++)
    {
        getline(cin,ourProduct[i]);
        usersFile<<ourProduct[i]<<endl;
    }
    usersFile.close();

}


#endif // NEW_ASSIGNMENT_PARTC_H_INCLUDED
