#include<iostream>

int main(){
    using namespace std;
    // we can also use loop to print the value of string 
    //Note that there counting starts from 0.
    int Bytes[5]={1,11,111,1111,11111}; //Here Bytes For example It is not real.
    cout<<"USING FOR LOOP"<<endl; 
    for (int i = 0; i < 5; i++)
    {
        cout<<"The Bytes in "<<i<<" is:"<<Bytes[i]<<endl;
    }
    cout<<endl;
    //with while loop:
    cout<<"USING WHILE LOOP"<<endl;
    int I=0;
    while (I<5)
    {
        cout<<"The Bytes in "<<I<<" is:"<<Bytes[I]<<endl;
        I++;
    }
    cout<<endl;
    cout<<"USING DO WHILE LOOP"<<endl;
    int II=0;
    do
    {
        cout<<"The Bytes in "<<II<<" is:"<<Bytes[II]<<endl;
        II++;
    } while (II <= 4);
    
        
    system("pause");
    return 0;
}