/*
This program demonstrates on concept of member fuction to perform operator overloading of  
+ using two object operands.
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

        // following member function defination is the case where an operator + is being overloaded
        // to perform addition directly on the objects where inherently the overlaoded operator call 
        // will get the individual variables added among the objects and returns a new object for holding 
        // then resulting values 

        // here 'c2' is the parameter passed which will be the operand provided on the right side of + operator
        // for example complex c3 =c1 + c2; c1 will be the invoking object, c2 is the parameter to the member object
        // and c3 will be the new object which will be assigned with the values of 'result' object returned from function
        complex operator+(complex c2) 
        //object arguments
        {
            complex result;// temporay object
            result.real= real + c2.real;// 
            //result.real= this->real +c2.real;
            result.imaginary= imaginary +c2.imaginary;
            //result.imaginary= this->imaginary +c2.imaginary;
            return result;
        }
};

int main()
{
    complex c1(2,4), c2(3,4);// two separate objects of complex class is instantiated 
    complex c3 =c1 + c2; // two objects are added and this instruction will send a function call to complex operator+(complex c1, complex c2)

    // // following set of fuction call will print the values of object variables on console
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
