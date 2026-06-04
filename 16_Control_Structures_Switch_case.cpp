#include<iostream>

int main (){
    using namespace std;
    int Emp;
    cout<<"Basic Table Guider in a Company."<<endl;
    system("pause");
    cout<<"Enter Your Employee Number for B block:"<<endl;
    cin>>Emp;
    switch (Emp)
    {
    case 127645:
        cout<<"Welcome Apple,Your Table is 42"<<endl;
        break;//It means that you exit the block.If we dont put this all the cases will print.
    case 890789:
        cout<<"Welcome Mango,Your Table is 9"<<endl;
        break;
    default:
        cout<<"You are not in this Block"<<endl;
        break;
    }
    cout<<"Thanks For using ME!"<<endl;

    system("pause");
    return 0;
}