#include<iostream>
using namespace std;
int Sum(int a,int b,int c);
int Sum(int a,int b);
int Area(int A,int B);
int Area(int A);

int main(){
    // What is Function Overloading?
    // Function overloading in C++ is a feature that allows you to have multiple functions with the same name but different parameters (different type, number, or order of parameters).
    int L;
    int B;
    cout<<"The Sum of 4 and 5 is "<<Sum(4,5)<<endl;
    cout<<"The Sum of 4,5 and 3 is "<<Sum(4,5,3)<<endl;
    cout<<"Enter The Length "<<endl;
    cin>>L;
    cout<<"Enter The Breadth (if rectangle) (If not Just Type 0)"<<endl;
    cin>>B;
    if(B==0){

        cout<<Area(L)<<endl;
    }
    else{
        cout<<Area(L,B)<<endl;
    }
    system("pause");
    return 0;
}
int Sum(int a,int b){
    cout<<"Function with 2 args"<<endl;
    return a+b;
}
int Sum(int a,int b,int c){
    cout<<"Function with 3 args"<<endl;
    return a+b+c;
    
}

//Another Example
int Area(int A){
    cout<<"Area of square"<<endl;
    return A*A;
}
int Area(int A,int B){
    cout<<"Area of Rectangle"<<endl;
    return A*B;
}