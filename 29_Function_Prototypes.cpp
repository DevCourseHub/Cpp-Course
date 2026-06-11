#include<iostream>
using namespace std;

int Sum(int a,int b);
void Greet();
int main(){
    int Num1;
    int Num2;
    Greet();
    cout<<"Enter value of Num1:"<<endl;
    cin>>Num1;
    cout<<"Enter value of Num2:"<<endl;
    cin>>Num2;
    cout<<"The Sum of Numbers is "<<Sum(Num1,Num2)<<endl;
    //Num1 and Num2 are Actual Parameters
    system("pause");
    return 0;
}
 //sometimes to make our code cleaner we put function after main function without function prototype it gives error.we put function prototype before int main to tell the program that there a function come.
int Sum(int a,int b){ 
//Formal ParametersA and B will take the values from actual parameters Num1 and Num2
int C=a+b;
    return C;
}
//Syntax of function prototype:
/*type function-name(arguments)*/
// Eg 
// int Sum(int a,int b);<-- Acceptable
// int Sum(int a, b);<-- Not Acceptable
// int Sum(int ,int );<-- Acceptable
//It is not mandatory that function only returns it also print

void Greet(){
    cout<<"Good Morning,Sir"<<endl;

}

