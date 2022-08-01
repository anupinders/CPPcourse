/* A simple C++ program structure generally consists up of 4 part
1. Preprocessor section will contain instructions starting with # symbol to refer
    predefined c++ library, define symbols, etc.
2. Global declaration section, which will contain the declarations to put on a global scope
3. main() fucntion, this is a primary subroutine of C++ language from where the execution of
    program starts. This function will contain the primary sequence of instructiosn for usecase 
    under consideration
4. User define function

Lets code a sample program 
*/
//preprocessor section
#include<iostream>

//globals section
void userDefinedFuction();//function prototype
int value;// automatic default values initialiation... integer variable set 0(zero)

//main function section
int main()//signature of the fuction
{
    //code block of main function which will contain the sequence of instructions
    int rollno;
    float cgpa;

    std::cout<<"Please enter your roll no";
    std::cin>>rollno;
    std::cout<<"Please enter your cgpa";
    std::cin>>cgpa;

    std::cout<<"You have entered followind details\n";
    std::cout<<"RollNo:"<<rollno<<"\n";
    std::cout<<"CGPA:"<<cgpa<<"\n";
    
    std::cout<<"The value of a global varibale in main function:"<<value<<"\n";
    std::cout<<"Sending a call from main function to user defined function\n";
    userDefinedFuction();
    std::cout<<"End of call to user defined function\n";

    return 0;// success of the program execution 
}

//user defined fuction section
void userDefinedFuction()
{
    std::cout<<"Hello From a user defined function \n";
    std::cout<<"The value of a global varibale in userdefined function:"<<value<<"\n";
}