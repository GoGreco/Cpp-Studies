#include <iostream>
using namespace std;// --> this removes the need to use std:: before commands from the iostream library

//A program that serves the purpose of being a syntax of every basic c++ thing, devoid of logic at first, logic exercises will soon follow;
//will start exploring a combination of function structure and operators, all arithmetic, bitwise and logic, also, a bit of data types;
int addition(int a, int b){
    //the structure of a function is based in this elements:
    // -> 'int'            - is what the function is suposed to return, a program will only finish executing once it has returned something, in this case an integer;
    // -> 'addition'       - the name of the funtion, can be anything inside the constraits of symbols and such, usually with lower case and using snake_case;
    // -> '(int a, int b)' - the parameters of a function, they indicate what the function will recieve to work, in this case, it will recieve two int variables;
    // -> '{...}'          - function body, the exutable part of the function shall be written here;

    int sum = a+b;
    //declaring a variable, you must define it's data type but you can refrain from assigning a value right now;

    return sum; 
}

int subtraction(int a, int b){
    int sub =a-b;
    return sub;
}

int multiplication(int a, int b){
    int mult = a*b;
    return mult;
}

int division_1(int a, int b){
    int div = a/b;//-> this will result in an 'int' data type because the two values and the variable are defined as such
                  //an int has no floating point, and you can lose a lot of precision in your division because of it
    return div;
}

int division_2(int a, int b){
    float div = float(a)/float(b);//-> this will now result in an 'float' data type because variable is defined as such and the parameters are being treated as such because of the funcion 'float()'
                                  //now we will have a floating point in the result;
    return div;
}

int modulus(int a, int b){
    int mod = a%b; // -> This resultis in the remainder of a division instead of the quotient, can prove usefull
    return mod;
}

int  increment_1(int a){
    int value = a++; // ->with the increment operator placed after the 'a', value will be equal to a+1 but a will remain with the same value;
    return value;
}
int  increment_2(int a){
    int value = ++a; // ->with the increment operator placed before the 'a', both 'value' and a will be equal to a+1;
    return value;
}
int  decrement_1(int a){
    int value = a--; // ->works as increment;
    return value;
}
int  decrement_2(int a){
    int value = --a; // ->works as increment;
    return value;
}

int main(){

    cout<< "Hello World"<<endl;

    int x = 5;
    int y = 6;

    cout<< "X value is: "<< x << endl;
    cout<< "Y value is: "<< y << endl;

    cout<<"X+Y is: "<< addition(x,y) <<endl;
    cout<<"X-Y is: "<< subtraction(x,y) <<endl;
    
    cout<<"X*Y is: "<< multiplication(x,y) << endl;
    cout<<"X/Y with no floating point is: "<< division_1(x,y) << endl;
    cout<<"X/Y with floating point is: "<< division_2(x,y) << endl;

    //is not decrementing or incrementing as the geeksforgeeks said it would, oh well...
    cout<<"Increment 1 of x is: "<< increment_1(x) << " X value is: "<< x << endl;
    cout<<"Increment 2 of x is: "<< increment_2(x) << " X value is: "<< x << endl;
    cout<<"Decrement 1 of x is: "<< decrement_1(x) << " X value is: "<< x << endl;
    cout<<"Decrement 2 of x is: "<< decrement_2(x) << " X value is: "<< x << endl;
    return 0;
}
