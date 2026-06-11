#include<iostream>
using namespace std;
float intrest(int currentMoney,float intrestRate=1.04); //1.04 is default args in global.
int main(){
    int money=1000;
    float VIP_intrest_rate=1.1; 
    cout<<"If you have "<<money<<"rs in bank account ,After 1 year you will have "<<intrest(money)<<"rs in your bank account"<<endl; //we dont give it second arguements because we have already give him default args. which is 1.04.
    cout<<"For vip If you have "<<money<<"rs in bank account,After 1 year you will have "<<intrest(money,VIP_intrest_rate)<<"rs in your bank account"<<endl;
    system("pause");
    return 0;
}
//syntax ->
// functun init(compulsory args,default args)
float intrest(int currentMoney,float intrestRate){
    return currentMoney*intrestRate;
}