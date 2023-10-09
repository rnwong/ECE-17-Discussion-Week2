//
// Fizz Buzz implementation.
// Authors: Ann Truong and Rebecca Wong
#include <iostream>
#include "FizzBuzz.h"
using namespace std;

void fizzBuzz(){
    cout << "Starting Fizz Buzz:\n";
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            if(i % 5 == 0) {
                cout << "FizzBuzz" << endl;
            } else {
                cout << "Fizz" << endl;
            }
        } else if(i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

void fizzBuzz2(int steps, int upper, int fizz, int buzz){
    cout << "Starting Fizz Buzz:\n";
    for(int i = 1; i <= upper; i = i + steps) {
        if(i % fizz == 0) {
            if(i % buzz == 0) {
                cout << "FizzBuzz" << endl;
            } else {
                cout << "Fizz" << endl;
            }
        } else if(i % buzz == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int mod(int a, int b) {
    int div = a / b;
    int remainder = a - (b * div);
    return remainder;
}

void fizzBuzz3(int steps, int upper, int fizz, int buzz){
    cout << "Starting no modulo Fizz Buzz" << endl;
    for(int i = 1; i <= upper; i = i + steps) {
        if(mod(i,fizz) == 0) {
            if(mod(i, buzz) == 0) {
                cout << "FizzBuzz" << endl;
            } else {
                cout << "Fizz" << endl;
            }
        } else if(mod(i, buzz) == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}