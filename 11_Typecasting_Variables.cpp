#include<iostream>

int main(){
    using namespace std;
    //Typecasting means changing one Datatype of Variable to another.We can do like this:
    float A=100.5;
    int B=60;
    cout<<"The Typecasted value of A:"<<int(A)<<endl; //We have changed float to int
    cout<<"The Typecasted value of B:"<<float(B)<<endl; //We have changed int to float
    //There are some expression
    cout<<"The Sum of expression:"<<A+B<<endl;
    cout<<"The Sum of expression:"<<int(A)+B<<endl;
    system("pause");
    return 0;
}