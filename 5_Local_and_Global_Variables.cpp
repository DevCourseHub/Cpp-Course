#include<iostream>

int A=5; //It is global Variable.It can be accesed by anywhere.
void Cute();

int main(){
    using namespace std;
    cout<<A<<endl;
    int A=78;
    cout<<A<<endl; //It will give first priority to local variable then global;
    Cute();
    // cout<<D; It will give error because the variable D is local inside function Cute().
    system("pause");
    return 0;
}
void Cute(){ //dont focus on the function we will explore it later just focus on local and global variable
    using namespace std;
    int D=903;
    cout<<A<<endl;
}
