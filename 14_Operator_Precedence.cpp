#include<iostream>

int main(){
    using namespace std;
    //what is Operator Precedence
    int A=50;
    int B=100;
    int C;
    C=A*5+B-90+50; //The compiler solve it using a precedence of operators.Refer To "Operator Precedence Chart" in "Important Folder". 
    cout<<C;
}