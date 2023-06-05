/*********************
Name: Saeid Jalaliani
Coding 03
Purpose: Simple stack program using arrays and pointers.
**********************/


#ifndef STACK_STACK_H
#define STACK_STACK_H

#define SIZE 10

class Stack{
    
    public:
        
        Stack();
        ~Stack();
    
        bool push(int);
        int pop();
        bool isEmpty();
        int peek();
    
    private:
        
        int top, simpleStack[SIZE];
};

#endif //STACK_STACK_H