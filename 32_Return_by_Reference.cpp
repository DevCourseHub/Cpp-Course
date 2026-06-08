#include<iostream>
int & SwapReferReturn(int& c,int& d);
int main(){
    using namespace std;
    int a =5,b=12;
    cout<<"The original value of a is "<<a<<" and b is "<<b<<endl;
    SwapReferReturn(a,b)=100; //it will print only the reference of a 
    cout<<"The original value of a is "<<a<<" and b is "<<b<<endl;
    system("pause");
    return 0;
}
int & SwapReferReturn(int& c,int& d){
    using namespace std;
    int temp=c;
    c=d; 
    d=temp;
    return c; //we have returned the value of c so only c is changed
}