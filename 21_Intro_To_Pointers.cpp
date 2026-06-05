#include<iostream>

int main(){
    using namespace std;
    // What Is Pointers? ---> Pointers are datatypes which holds the address of other datatypes or variables.
    int a=3;
    // We create pointers using this method: 
    int *b = &a;
    // & ----> (Address of) operator like 0x61ff08 
    //* -----> (value of )Derefrence operator
    //we can use it like this-
    cout<<"The address of A is "<<b<<endl;
    //or
    cout<<"The address of A is "<<&a<<endl;
    //To get the value of A we use * or derefrence operator -
    cout<<"The Value of address of A is "<<*b<<endl;

    //Pointer to Pointer -> The Pointer also hold value to get that value we use pointer to pointer like this-
    int **c=&b;
    cout<<"The address of pointer b is "<<c<<endl;
    cout<<"The value of address of d is "<<*c<<endl;
    cout<<"The value of value of address d is "<<**c<<endl;
    //Here we dig for value of 3 in this pattern
    // c>b>a=3
    //here the b is in c and a is in b and 3 is in a we direclty cannot print 3 so we dig the c pointer we created a stacked pointer
    system("pause");
    return 0;
}