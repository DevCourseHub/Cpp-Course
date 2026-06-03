#include<iostream>
#include<iomanip>

int main(){
    using namespace std;
    int A=10,B=20,C=30;
    cout<<"The value of A:"<<A<<endl; //we know that endl is manipulator which help to print the next line
    cout<<"The value of B:"<<A<<endl;
    cout<<"The value of C:"<<A<<endl;

    //But now we have included <iomanip> we can now justify look below how-
    cout<<"The value of A with setw:"<<setw(4)<<A<<endl;
    cout<<"The value of B with setw:"<<setw(4)<<B<<endl;
    cout<<"The value of C with setw:"<<setw(4)<<C<<endl;
    system("pause");
    return 0;
}