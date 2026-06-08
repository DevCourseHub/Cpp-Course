#include<iostream>

int main(){
    using namespace std;
    // What is Enum?
    // Enum is a user-defined type that lets you give names to a group of related integer values.
    enum Meals{Breakfast,Lunch,Dinner};
    string Choice;
    Meals Menu=Breakfast; //change it for another meal
    cout<<"Menu Of Restraunt"<<endl;
    if(Menu==Breakfast){
    cout<<"Todays Breakfast Menu Is Bread Toast"<<endl;
    } 
    if(Menu==Lunch){
    cout<<"Todays Lunch Menu Is Shahi Paneer"<<endl;
    }
    if(Menu==Dinner){
    cout<<"Todays Dinner Menu Is Jeera Rice "<<endl;
    }

    system("pause");
    return 0;
}