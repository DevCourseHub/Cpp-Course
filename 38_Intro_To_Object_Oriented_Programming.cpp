#include<iostream>
using namespace std;

int main(){
    // Why OOPS(Object Oriented Programming structure)?
    /*1 C++ was designed with the main purpose of Object oriented programming.
    2. As the size of the program increases, readability, maintainability and bug-free nature of
       programs decreases.
    3. This was the major problem with languages like C which relied upon functions or
       procedures (hence the name procedural programming language).
    4. As a result, the possibility of not addressing the problem in an effective manner was high
    5. Also, as data was almost neglected, data security was easily compromised.
    6. Using classes solves this problem by modelling program as a real world scenario
    */

    //Difference Between OOPS and POP (Procedure Oriented Programming)
    /*Procedure Oriented Programming-
    . Consists of writing a set of instructions for the computer to follow
    . Main focus is on functions and not on flow of data

    . Functions can either use local or global data
    . Data moves openly from function to function
    
    Object Oriented Programming-
    Works on the concept of classes and objects
    . A class is a template to create objects
    . Treats data as a critical element
    . Decomposes the problem in objects and builds data and functions around
      the objects
    */
    //Eg 
    // class=animals{
        // string name;
        // string type;
    // }
    // object=dog name=tommy
        // type=german shepherd

    //it is not real syntax it is just for example

    //Basic Terms
    /*. Classes - Basic template for creating objects.
    . Objects - Basic run time entities.
    . Data Abstraction & Encapsulation - Wrapping data and functions into single
        unit.

    . Inheritance - Properties of one class can be inherited into others.
    . Polymorphism - ability to take more than one forms.
    . Dynamic Binding - code which will execute is not known until the program.
        runs.
    . Message Passing - Object.message(Information) call format.*/

    // Benefits of Object Oriented Programming
    /*
    . Better code reusability using objects and Inheritance.

    . Principle of data hiding helps build secure systems.

    . Multiple objects can co-exist without any interference.

    .Software complexity can be easily managed.
    */


    // END
    system("pause");
    return 0;
}