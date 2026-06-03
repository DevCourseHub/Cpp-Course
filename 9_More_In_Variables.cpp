#include<iostream>
int C=56;
int main(){
    using namespace std;
    int A,B,C;
    cout<<"Simple calculator"<<endl;
    cout<<"Enter The Value of A"<<endl;
    cin>>A;
    cout<<"Enter The Value of B"<<endl;
    cin>>B;
    C=A+B;
    cout<<"The Sum is:"<<C<<endl;//We know that the variable take first priority to local than global so it print local.But How we print global?
    cout<<"The value of global C is "<<::C<<endl; //we use ::to print global values.
    system("pause");
    //Float or Long double?
    cout<<"To denote Variable That they are float or long double we use f for float and l for long double.If we dont put f and l in long codes with same values the compiler confuses whether it is float or long double etc.So defaultly it denote the value to double"<<endl;
    system("pause");
    float S=50.5f;//we can also put F it is not mandatory to put only lowercase
    long double T=50.5l;
    cout<<"The value of S:"<<S<<endl;
    cout<<"The value of T:"<<T<<endl;
    //In order to get the size of the float and long double we will do it like this:
    cout<<"The size of 50.5 :"<<sizeof(50.5)<<endl;
    cout<<"The size of 50.5f :"<<sizeof(50.5f)<<endl;
    cout<<"The size of 50.5F :"<<sizeof(50.5F)<<endl;
    cout<<"The size of 50.5l :"<<sizeof(50.5l)<<endl;
    cout<<"The size of 50.5L :"<<sizeof(50.5L)<<endl;
    system("pause");
    return 0;
}