#include<iostream>

int main(){
    using namespace std;
    //break function
    for (int i = 0; i < 50; i++)
    {
        cout<<i<<endl;
        if(i==25){
            break; //it will break when i == 2 break means stop or exit the loop
        }
    }
    cout<<"END of BREAK"<<endl;
    //continue function
    for (int I = 0; I <= 10; I++)
    {
        if(I==5){ //it will skip only 5 and continue from 6.
            continue;
            cout<<I<<endl; 
        }
    }
    cout<<"END of CONTINUE"<<endl;
    
    system("pause");
    return 0;
}