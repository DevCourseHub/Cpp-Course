#include<iostream>

int main(){
    using namespace std;
    int A=5,B=10;
    cout<<"IMPORTANT INSTRUCTION:IT INCLUDES TRUE AND FALSE SO PLEASE CHECK 'True or False.txt' IN 'Important Folder' SO YOU CAN UNDERSTAND THEM MORE,THANKS"
    cout<<"Operators In C++:"<<endl;
    cout<<"ARITHEMETIC OPERATORS"<<endl;
    cout<<"Used to do Mathematics Operations"<<endl;
    cout<<"The Value of A+B:"<<A+B<<endl;
    cout<<"The Value of A-B:"<<A-B<<endl;
    cout<<"The Value of A*B:"<<A*B<<endl;
    cout<<"The Value of A%B:"<<A%B<<endl;
    cout<<"The Value of A++:"<<A++<<endl; //It means first print then increment So it doesnt print incremented value it changes the variable to incremented value
    cout<<"The Value of A--:"<<A--<<endl;//same as A++ but with decrement
    cout<<"The Value of ++A:"<<++A<<endl;// It first make increment then print incremented value
    cout<<"The Value of --A:"<<--A<<endl;
    cout<<"+,-,*,/,%,A++,A--,++A,--A Are all Arithemetic operators."<<endl;
    cout<<endl;

    cout<<"ASSIGNMENT OPERATORS"<<endl;
    cout<<"Used to assign values to variables"<<endl;
    cout<<"Example"<<endl;
    cout<<"x=9"<<endl;
    cout<<"x += 5"<<endl;   
    cout<<"x -= 3"<<endl;   
    cout<<"x *= 2"<<endl;   
    cout<<"x /= 4;"<<endl;
    cout<<endl;

    cout<<"COMPARISON OPERATORS"<<endl;
    cout<<"Used to compare values"<<endl;
    cout<<"The value of A==B:"<<(A==B)<<endl;
    cout<<"The value of A!=B:"<<(A!=B)<<endl;
    cout<<"The value of A>B:"<<(A>B)<<endl;
    cout<<"The value of A<B:"<<(A<B)<<endl;
    cout<<"The value of A>=B:"<<(A>=B)<<endl;
    cout<<"The value of A<=B:"<<(A<=B)<<endl;
    cout<<endl;

    cout<<"LOGICAL OPERATORS"<<endl;
    cout<<"It is same as COMPARISON OPERATORS but there are two operators like (A==B && A>B) in which both operators needs to be true to print true.If one is false and one is true it print False "<<endl;
    cout<<"example"<<endl;
    cout<<"The value of (A!=B) &&(A==B):"<<((A!=B) &&(A==B))<<endl;
    cout<<"The Value of (A<B) && (A!=B)"<<((A<B)&&(A!=B))<<endl;
    cout<<"Types of LOGICAL OPERATOR:"<<endl;
    cout<<"OR Operator"<<endl;
    cout<<"It will print True if any one operator is true."<<endl;
    cout<<"The value of (A!=B) or (A==B):"<<((A!=B) or (A==B))<<endl;
    cout<<"NOT Operator"<<endl;
    cout<<"It will print the inverse of Value Eg A==B is false but when we put (!(A==B it print true))"
    cout<<"The value of (!(A==B)):"<<(!(A==B))<<endl;

    system("pause");
    return 0;
}