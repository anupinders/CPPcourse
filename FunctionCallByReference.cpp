#include<iostream>
using namespace std;

void InputValues(int * , float * , char * );

int main(){
    int rollNo;
    float cgpa;
    char gender;
    InputValues(&rollNo, &cgpa, &gender);
    cout<<"Values entered by user are:"<<endl;
    cout<<"Roll No: "<<rollNo<<endl;
    cout<<"Cgpa: "<<cgpa<<endl;
    cout<<"Gender: "<<gender<<endl;
    return 0;
}
void InputValues(int * rollNo, float * cgpa, char * gender)
{
    cout<<"Enter values in sequence, Roll no, Cgpa, gender";
    cin>>*rollNo>>*cgpa>>*gender;
}