#include<iostream>
#include<string>
using namespace std;

class Publications
{
    public:
    string title;
    float price;
    // constructor 
    Publications()
    {
        title = "";
        price = 0.0;
    }

};

class Book : public Publications
{   
    public: 
    int pages;
    // constructor 
    Book()
    {
        pages = 0;
    }

    void GetData();
    void PutData();

};

void Book :: GetData()
{
    cout<<"Enter the title of the book : ";
    getline(cin,title);
    cout<<"Enter the price of the book : ";
    cin>>price;
    cout<<"Enter the pages of the book : ";
    cin>>pages;

}

void Book :: PutData()
{
    cout<<"Title of the Book : "<<title<<endl;
    cout<<"Price of the Book : "<<price<<endl;
    cout<<"Pages of the Book : "<<pages<<endl;
}

int main()
{
    Book b;
    b.GetData();
    b.PutData();
    return 0; 
}