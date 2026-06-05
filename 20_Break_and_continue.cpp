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
    
    system("pause");
    return 0;
}