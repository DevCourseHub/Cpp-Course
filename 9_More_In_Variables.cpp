#include<iostream>
int C=56;
int main(){
    using namespace std;
    int A,B,C;
    cout<<"Enter The Value of A"<<endl;
    cin>>A;
    cout<<"Enter The Value of B"<<endl;
    cin>>B;
    C=A+B;
    cout<<"The Sum is:"<<C<<endl;//We know that the variable take first priority to local than global so it print local.But How we print global?
    cout<<"The value of global C is "<<::C<<endl; //we use ::to print global values.
    //Float or Long double?
    cout<<"To denote Them That they are float or long double we use f for float and l for long double.If we dont put f and l in long codes with same values the compiler confuses whether it is float or long double etc.So defaultly it denote the value to long double"<<endl;
    float S=50.5f;
    long double T=50.5l;
    cout<<"The value of S:"<<S<<endl;
    cout<<"The value of T:"<<T<<endl;
    system("pause");
    return 0;
}