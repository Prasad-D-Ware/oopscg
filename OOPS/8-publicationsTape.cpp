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

class Tape : public Publications
{   
    public: 
    float time;
    // constructor 
    Tape()
    {
        time = 0;
    }

    void GetData();
    void PutData();

};

void Tape :: GetData()
{
    cout<<"Enter the title of the tape : ";
    getline(cin,title);
    cout<<"Enter the price of the tape : ";
    cin>>price;
    cout<<"Enter the time duration of the tape : ";
    cin>>time;

}

void Tape :: PutData()
{
    cout<<"Title of the Tape : "<<title<<endl;
    cout<<"Price of the Tape : "<<price<<endl;
    cout<<"Time duration of the Tape : "<<time<<endl;
}

int main()
{
    Tape t;
    t.GetData();
    t.PutData();
    return 0; 
}
