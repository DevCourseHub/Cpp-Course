#include<iostream>
using namespace std;
class Employee
{
    // Private and Public are specifiers
    private:
        int a,b,c; //This means that only the functions in this class access these variables If We tried to access this from anywhere we got error:

    public:
        int d,e; //We can access This from anywhere and set value

    void SetData(int a1,int b1,int c1); //Just Decalaration of Function
    void GetData(){
        cout<<"The Value Of a is "<<a<<endl;
        cout<<"The Value Of b is "<<b<<endl;
        cout<<"The Value Of c is "<<c<<endl;
        cout<<"The Value Of d is "<<d<<endl;
        cout<<"The Value Of e is "<<e<<endl;
    }
};
void Employee::SetData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    //  Structure and object is same so why struct is not powerfull-
    /*
      1.Struct doesnt provide security to our data means we can acces the value of struct from anywhere in code.
      2.We cannot put functions in struct
    */
    Employee Apple; //We have created an object
    //Apple.a=4; We cannot do it if we do it we got error.
    Apple.d=56;
    Apple.e=63;
    Apple.SetData(5,6,8); //we have called the function
    Apple.GetData();
    system("pause");
    return 0;
}