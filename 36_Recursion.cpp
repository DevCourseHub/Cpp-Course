#include<iostream>
int factorial(int n);
int main(){
    using namespace std;
    // What is Recursion?
    // Recursion is a technique where a function calls itself to solve a problem.
    //Eg Factorial of number-
    // 6!=6*5*4*3*2*1
    // we can also say:
    // n!=n*(n-1)!
    int A;

    cout<<"Enter the number For Factorial"<<endl;
    cin>>A;
    cout<<"The Factorial of "<<A<<" is "<<factorial(A)<<endl;
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