#include<iostream>
using namespace std;

class Complex 
{
    // variables declared
    private:
    int real;
    int imag;
    
    public:
    // constructor 
    Complex(int r = 0 ,int i = 0 )
    {
        real = r;
        imag = i;
    }

    // display function for displaying complex number : 
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    // Operator overloaded + : 
    Complex operator + (Complex c)
    {
        Complex sum;
        sum.real = real + c.real;
        sum.imag = imag + c.imag;
        return sum;
    }
};



int main()
{
    // default object 
    Complex c1;

    // objects with initialised values 
    Complex c2(2,3);
    Complex c3(3,5);

    // displaying numbers on console 
    cout<<"Default values of Complex number is : ";
    c1.display();
    cout<<"Complex number with initialised values 1 : ";
    c2.display();
    cout<<"Complex number with initialised values 2 : ";
    c3.display();

    // creation of an object to store the addition of 2 complex numbers 
    Complex c4;
    c4 = c2 + c3;
    cout<<"Addition of the complex numbers is : ";
    c4.display();
    


    return 0;
}