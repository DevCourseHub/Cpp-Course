#include<iostream>
using namespace std;
int factorial(int n);
int fibo(int );
int main(){
    // What is Recursion?
    // Recursion is a technique where a function calls itself to solve a problem.
    //Eg Factorial of number-
    // 6!=6*5*4*3*2*1
    // we can also say:
    // n!=n*(n-1)!
    int A;
    int B;

    cout<<"Enter the number For Factorial"<<endl;
    cin>>A;
    cout<<"The Factorial of "<<A<<" is "<<factorial(A)<<endl;
    cout<<"Enter the number For Fibonacci"<<endl;
    cin>>B;
    cout<<"The Fibonacci of "<<B<<" Th Term is "<<fibo(B)<<endl;
    system("pause");
    return 0;
}
int factorial(int n){
    if (n<=1){
        return 1;
    }
    else{
    return n*factorial(n-1);
    // it will open it like this 
    // 4= 4*factorial(3)  //factorial(3) is not a value so it open it 
    // 4*3*factorial(2)
    //4*3*2*factorial(1) //now we have put if (n<=1) return 1 so:
    // 4*3*2*1=24
    }
}
int fibo(int B){
    if (B<2){
        return 1;
    }
    return fibo(B-2) + fibo(B-1);
}