#include<iostream>

int main(){
    using namespace std;
    //Do while Loop Syntax:
    /*do
    {
        code 
    } while (condition); */
    int i=0;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i <=50); //The Major difference is that if the condition is false the loop is run atleast only 1 time.

    //infinite do while Loop
    /*do
    {
        cout<<i<<endl;
        i++;
    } while (true);*/

    //WARNING:Dont run it for more than 10-20 sec because there comes a time when it takes gbs of memory and your app or pc may crash and it sometimes restart your PC.To exit just press ctrl+c
    
    
    system ("pause");
    return 0;
}