#include<iostream>

int main(){
    using namespace std;
    int A=8;
    int B=4;
    //We can also do it by using this method:
    int C=6,D=9;
    cout<<"Hello User:"<<endl;
    // We can use endl for new line we can also use \n but only under qoutes.Look below.I prefer use <<endl.The <<endl is a manipulator we will look them more later: 
    cout<<"The value of A is "<<A<<";"<<"\nThe value of B is "<<B<<";";
    cout<<"\nThe value of C is "<<C<<";"<<"\nThe value of D is "<<D<<";";
    cout<<" Program end"<<endl;
    cout<<"If you want more datatypes,Go to runme_datatypes.cpp"<<endl;
    system("pause");
    return 0;
}