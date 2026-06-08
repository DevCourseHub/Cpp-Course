#include<iostream>
void SwapReferVar(int& c,int& d);
int main(){
    using namespace std;
    int a=10,b=20;
    cout<<"The original value of a is "<<a<<" and b is "<<b<<endl;
    SwapReferVar(a,b);
    cout<<"The swaped value of a is "<<a<<" and b is "<<b<<endl;
    
    system("pause");
    return 0;
}
void SwapReferVar(int& c,int& d){ //here a=c and b=d because we created a reference variable (refer 10_refrence_variables.cpp) so if the value of c is changed the a will also changed same with d and b.
    using namespace std; 
    int temp=c;        
    c=d;                
    d=temp;
}