/*
This program demonstrates on concept of friend fuction and how it can be 
used to perform operator overloading of  + using two object operands,
one constant and one object of complex class.
*/
#include<iostream>
using namespace std;

//class definition
class complex{
    //private variable accessible by class member onm but not with the 
    //class object
    float real;
    int imaginary;

    // following is the section under public access specifier user
    // all member variables and member functions declared & defined 
    // under this section are accessible directly with instantiated 
    // object of class 
    public:
        // takes care of both default and explicity constructor
        complex(float R=0,int i=0)
        {
            real =R;
            imaginary=i;
        }
        // following function will display the values on console
        void display()
        {
            cout<<"Real:"<<real<<", Img:"<<imaginary<<endl;
        }
        // following is the declaration of friend function to the class
        // 1. for two object operands eg. c1 + c2
        friend complex operator+(complex c1, complex c2);
        //2. for one object & a constant value, eg c1 + 2 
        friend complex operator+(complex c1, float value);
        //3. again for a constant value & one object , eg  2 + c1 
        friend complex operator+( float value,complex c1);
};

// function defination for case 1. for two object operands eg. c1 + c2
complex operator+(complex c1, complex c2)
//object arguments
{
    complex result;
    result.real= c1.real +c2.real;
    result.imaginary= c1.imaginary +c2.imaginary;
    return result;
}

// function defination for case 2. for one object & a constant value, eg c1 + 2 
complex operator+(complex c1, float value)
// objects and scaler argument
{
    complex result;
    result.real= c1.real + value;
    result.imaginary= c1.imaginary + value;
    return result;
}

// function defination for case 3. again for a constant value & one object , eg  2 + c1 
complex operator+(float value, complex c1)
// objects and scaler argument
{
    complex result;
    result.real= c1.real + value;
    result.imaginary= c1.imaginary + value;
    return result;
}
int main()
{
    complex c1(2,4), c2(3,4);// two separate objects of complex class is instantiated 
    complex c3 =c1+c2; // two objects are added and this instruction will send a function call to complex operator+(complex c1, complex c2)
    complex c4 =c1+2; // one object is added to the constant value and this instruction will send a function call to complex operator+(complex c1, float value)
    complex c5 =20+c1;// one constant is added to the object of constant and this instruction will send a function call to complex operator+(float value, complex c1)
    
    // following set of fuction call will print the values of object variables on console
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    return 0;
}
