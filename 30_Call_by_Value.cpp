#include<iostream>
using namespace std;
int Sum(int a,int b);
void Swap(int c,int d);
void SwapPointer(int* c,int* d);
int main(){
    int x=5,y=10;
    cout<<"The Sum Of 10 and 20 is "<<Sum(10,20)<<endl;
    cout<<"The original value of x is "<<x<<" and y is "<<y<<endl;
    // Swap(x,y); //this will not work;
    SwapPointer(&x,&y);
    cout<<"The swaped value of x is "<<x<<" and y is "<<y<<endl;
    system("pause");
    return 0;
}
//call by refrence using values
int Sum(int a,int b){
    int C=a+b;
    return C;
}
void Swap(int c,int d){ //lets say the value of c=5 ,d=10
    using namespace std; //temp c   d
    int temp=c;         //  5   5   10
    c=d;                //  5   10  10
    d=temp;             //  5   10  5
//The above function is just copying the value so it doesnt swap like you have folder 1 and 2 and copying file from folder 1 to 2 so if you make change in file it will not change in folder 1 file
}
//Call By reference using pointers
void SwapPointer(int*c,int* d){ 
    int temp=*c;        
    *c=*d;                
    *d=temp;             

}
//this is like you and your friend working on gdrive and have a file if you changed it it will also change from your friends device also