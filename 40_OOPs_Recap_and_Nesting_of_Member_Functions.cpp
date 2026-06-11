// C++ -> Initially called C with Classes.
//Class -> extension of struct(in C).
//Limitation of Structures 
    // -- > members are public
    // -- > No methods

//Classes=Structures + more.
//Classes can have methods and properties.
// classes -- > can have methods and properties
// classses -- > can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declartion like this:
/* class Employee{
 //Class definition

} Apple,Mango,banana; */
//  Apple.salary=2000 makes no sense if salary is private.

//END
// Nesting of members functions:
#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s; //by default it is private
    private:
    void chk_bin(void);
    void display_bin(void);

    public:
        void read(void);
        void ones(void); //(void) means we have not put any variable.we put here because we are working on string
};
void Binary::read(void){
    cout<<"Enter The Binary Number"<<endl;
    cin>>s;
}
void Binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
void Binary ::ones(){
    chk_bin(); //We have did nesting Of member functions means we have put func in func 
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)=='0'){
            s.at(i)='1'; //changing the value from 0 to 1 and 1to 0 
            
        }
        else{
            s.at(i)='0';
    
            
        }
    }
    display_bin();

    
}
void Binary::display_bin(){
    cout<<"Displaying 1`s complement"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    Binary B; //object
    B.read();
    // B.chk_bin(); we have nested it
    B.ones();
    // B.display_bin();
    


    system("pause");
    return 0;
}