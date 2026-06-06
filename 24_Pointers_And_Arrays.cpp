#include<iostream>

int main(){
    using namespace std;
    //We can also get value of array using derefrencing method of pointers:
    int Age[5]={45,35,95,67,15};
    int *A=Age;
    cout<<"The value of [0] is: "<<*(A)<<endl;
    cout<<"The value of [1] is: "<<*(A+1)<<endl;
    cout<<"The value of [2] is: "<<*(A+2)<<endl;
    cout<<"The value of [3] is: "<<*(A+3)<<endl;
    cout<<"The value of [4] is: "<<*(A+4)<<endl;
    cout<<endl;
    //or
    cout<<"The value of [0] using increment is: "<<*(A++)<<endl;
    cout<<"The value of [1] using increment is: "<<*(A++)<<endl;
    cout<<"The value of [2] using increment is: "<<*(A++)<<endl;
    cout<<"The value of [3] using increment is: "<<*(A++)<<endl;
    cout<<"The value of [4] using increment is: "<<*(A)<<endl;
    cout<<endl;
    //or
    int *B=Age;
    cout<<"The value of [0] using increment is: "<<*(B)<<endl;
    cout<<"The value of [1] using increment is: "<<*(++B)<<endl;
    cout<<"The value of [2] using increment is: "<<*(++B)<<endl;
    cout<<"The value of [3] using increment is: "<<*(++B)<<endl;
    cout<<"The value of [4] using increment is: "<<*(++B)<<endl;

    system("pause");
    return 0;
}