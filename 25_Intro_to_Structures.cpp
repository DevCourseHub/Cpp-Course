#include<iostream>

int main(){
    using namespace std;
    // What is a structure?
    // A structure (struct) is a user-defined data type that lets you group different pieces of related data under one name.It is just like an empty form.Let's create one:
    struct Employee
    {
        /* data */
        int Emid; //here 'em' means employee it is not necessary to put 'em'.Instead of 'emid' we also do 'id'.
        char Emstartchar; 
        float Emsallary;
    };
    
    struct Employee Apple; //here we put an object or employee which is apple and do entries of following below. 
    Apple.Emid=566892547;//
    Apple.Emstartchar='A';
    Apple.Emsallary=100000;

    struct Employee Banana;
    Banana.Emid=598714562;
    Banana.Emstartchar='B';
    Banana.Emsallary=150000;

    cout<<"The Employee id of Apple is : "<<Apple.Emid<<endl;
    cout<<"The Employee start character of Apple is : "<<Apple.Emstartchar<<endl;
    cout<<"The Employee sallary of Apple is : "<<Apple.Emsallary<<endl;
    cout<<endl;
    cout<<"The Employee id of Banana is : "<<Banana.Emid<<endl;
    cout<<"The Employee start character of Banana is : "<<Banana.Emstartchar<<endl;
    cout<<"The Employee sallary of Banana is : "<<Banana.Emsallary<<endl;

    //Another Way of making struct-
    typedef struct Fav
    {
        int FavNo;
    }fav ; // we also make it short form using any word here we put fav to make it short 
    
    fav Mango; 
    Mango.FavNo=15;
    cout<<"The Fav no of mango is "<<Mango.FavNo<<endl;
   
    
    system("pause");
    return 0;
}