#include<iostream>
using namespace std; //From now on we will init using namespace std in global parameters
int Sum(int a,int b){ 
    int C=a+b;
    return C; //Here it Takes the value of C and give the C to caller 
}
int main(){
    // What is Functions?
    // A function in C++ is a block of code that performs a specific task and can be called whenever needed.Function is an independent block which never be under any other function.Here int main is also a function.
    int Num1;
    int Num2;
    cout<<"Enter value of Num1:"<<endl;
    cin>>Num1;
    cout<<"Enter value of Num2:"<<endl;
    cin>>Num2;
    cout<<"The Sum of Numbers is "<<Sum(Num1,Num2)<<endl; //here we put the value in function and call it.
    system("pause");
    return 0;
}