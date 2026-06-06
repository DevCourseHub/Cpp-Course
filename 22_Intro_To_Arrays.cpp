#include<iostream>

int main(){
    using namespace std;
    // What is arrays?
    // An array is a collection of variables of the same data type stored under one name.
    //Eg-If we have to store the marks for students we will do like this-
    /*int a=1
      int b=6
      int c=9
      int d=8...
    */
    //with arrays
    int Marks[4]={30,50,60,95};//The [4] is optional because in previous versions of cpp we have to manualy tell but the updates there are some intelligence so it figure it out that therer is 4 nos
    cout<<"The Marks of Student 1 is :"<<Marks[0]<<endl;
    cout<<"The Marks of Student 2 is :"<<Marks[1]<<endl;
    cout<<"The Marks of Student 3 is :"<<Marks[2]<<endl;
    cout<<"The Marks of Student 4 is :"<<Marks[3]<<endl;
    cout<<endl;
    //We also write the array
    int MARKS[4];
    MARKS[0]=87;
    MARKS[1]=55;
    MARKS[2]=92; 
    MARKS[3]=46;
    cout<<"The Edited Marks Of Student 1 is "<<MARKS[0]<<endl;
    cout<<"The Edited Marks Of Student 2 is "<<MARKS[1]<<endl;
    cout<<"The Edited Marks Of Student 3 is "<<MARKS[2]<<endl;
    cout<<"The Edited Marks Of Student 4 is "<<MARKS[3]<<endl;
    cout<<endl;

    //we can also change the values of array
    int Age[4]={24,36,29,48};
    Age[2]=21;//we have changed the value from 36 to 21
    cout<<"The changed value of 36 is :"<<Age[2]<<endl;
    system("pause");
    return 0;
}