/*********************
Name: Saeid Jalaliani
Coding 03
Purpose: Simple stack program using arrays and pointers.
**********************/

#include "stack.h"

Stack::Stack(){
    top = -1;
}

Stack::~Stack(){
    
}

bool Stack::push(int value){
   
    bool pushed;
    
    if(top >= SIZE-1){
        pushed = false;
    } else {
        simpleStack[++top] = value;
        pushed = true;
    }
    
    return pushed;
}

int Stack::pop(){
    
    if(top<0){
        throw 'a';
    } 
    
    return simpleStack[top--];
}

bool Stack::isEmpty(){
    
    bool empty;
    
    if(top == -1){
        empty = true;
    } else {
        empty = false;
    }
    
    return empty;
}

int Stack::peek(){
        
    if(top<0){
        throw 'b';
    } 
    
    return simpleStack[top];
}