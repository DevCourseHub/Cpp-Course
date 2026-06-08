#include<iostream>

int main(){
    using namespace std;
    // What is union?
    // Union is similar to STRUCTURES but provide better memory managment.
    union survey{
        int cars;//lets say it takes 4 bytes
        char block;//2 bytes
        float income;//3 bytes
    
        // union is the best thing because if we only want to use any one of above it will take only the maximum bytes ie 4 here. but in struct it take total of memory ie 4+2+3=9 bytes. 
    };
    union survey apple;
    apple.cars=4;
    /*apple.block='b';*/ //If we put this it will give garbaged or wrong value.we can only use 1 value at a same time.
    cout<<"Apple has cars:"<<apple.cars<<endl;



    system("pause");
    return 0;
}