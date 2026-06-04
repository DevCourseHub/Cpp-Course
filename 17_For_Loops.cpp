#include<iostream>

int main(){
    using namespace std;
    //A loops is used to execute a block of code repeatedly until a condition becomes false.
    //Example-You have to print the nos from 1 to 100 you will do it like this
    /*cout<<1;
    /*cout<<2;
    /*cout<<3;
    /*cout<<4;
    /*cout<<5;
    /*cout<<6;
    /*cout<<7;
    /*cout<<8;
    /*cout<<9;
    /*cout<<10;...*/
    //To do this work easy we use loops

    //syntax for for loop-
    /*(for (variable init;conditon;updation) 
    {
        loop body(code)
    }
    
    */
    for (int i = 0; i <= 100; i++) //we will write <=100 because if we write < 100 it will skip the 100 because there will condition of i<100 when i== 100 the statment is false and it stops so it doesnt print 100 and print 99. Here i++ is increment of i variable.
    {
        cout<<i<<endl;
    }
    cout<<"Loop Exited"<<endl;

    //Infinite for Loop "Use It Wisely!"
    /*for (int i=0;i<40;)//it is running continous because the condition is not meet false condition because there is no updation like there is i which willnever become 40 to false
    {
        cout<<i<<endl;
    }*/ //WARNING:Dont run it for long time because there comes a time when it takes gbs of memory and your app or pc may crash and sometimes restart.In  VS code just ctrl+C

    system("pause");
    return 0;

}