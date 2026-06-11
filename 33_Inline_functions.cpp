#include<iostream>
using namespace std;
int product(int c,int d);
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl; 
    //It takes less time but what if we do same task 10 times.it calls the function -> register the value in formal parameter ->then take it and show it to us. it takes too time if 1 print takes 0.1 sec and there is 10 so it takes 1 sec with 100 ,10 sec to make it we use inline functions. syntax is-> inline int x(variables).it makes it in compiling time change the product(a,b) with a*b; 
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;
     cout<<"The product of a and b is "<<product(a,b)<<endl;

    system("pause");
    return 0;
}
inline int product(int c,int d){ //dont use inline with big function.and also with static because it is only variable that are not reseted when the function run else all other variables reseted.
    //static int g=0;
    //g++;
    int x=c*d/*+g*/;
    return x;
}