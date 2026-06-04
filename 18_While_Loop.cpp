#include<iostream>

int main (){
    using namespace std;
    //Syntax:
    /*while (condition)
    {
        code 
    } */
       
    int i=0;
    while(i<=50)
    {
        cout<<i<<endl;
        i++;
    } 

    // infinite for loop:
    /*int A=0;
    while(True)
    {
        cout<<i<<endl;
        A++; 
    }*/ //WARNING:Dont run it for more than 10-20 sec because there comes a time when it takes gbs of memory and your app or pc may crash and it sometimes restart your PC.To exit just press ctrl+c

    system("pause");
    return 0;
}