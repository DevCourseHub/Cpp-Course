#include<iostream>

int main (){
    using namespace std;
    int age;
    cout<<"Basic vote eligibility program"<<endl;
    system("pause");
    cout<<"Enter Your Age:"<<endl;
    cin>>age;
    if((age<18)&&(age>1)){
        cout<<"You are not eligible to VOTE.Thanks For Using Program"<<endl;
    }
    else if(age==18){
        cout<<"You are Eligible to VOTE.Thanks For Using Program"<<endl;
    }
    else if(age<=0){
        cout<<"You are Not Born.Thanks For Using Program"<<endl;
    }
    else{
        cout<<"You are Eligible to VOTE.Thanks For Using Program"<<endl;
    }
    system("pause");
    return 0;

}