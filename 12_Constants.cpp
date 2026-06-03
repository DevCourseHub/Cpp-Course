#include<iostream>

int main(){
    using namespace std;
    int A=50;
    cout<<"the value of A Was:"<<A<<endl;
    A=100;
    cout<<"The value of A is:"<<A<<endl;
    system("pause");
    cout<<"To stop a variable to change its value we use constants.We use 'const' keyword:"<<endl;
    const int B=80;
    cout<<"The value of B is:"<<B<<endl;
    // B=90; If we put this it will show error "assignment of read-only variable 'B'"
    system("pause");
    return 0;
}