/*********************
Name: Saeid Jalaliani
Coding 03
Purpose: Simple stack program using arrays and pointers.
**********************/

#include "main.h"

int main(int argc, char **argv){
    
    srand(time(NULL)); //seeding srand with time for better random integers
    int random, random2, numberOfLoops, popCounter;
    
    Stack myStack;
    
    numberOfLoops = rand()% (TESTSIZE*2); //this will make the loop sometimes enter overflow as opposed to always for more dynamic testing
    popCounter = rand()%POPSIZE+3;
    
    if(myStack.isEmpty()){
        cout << endl << "The stack is created and empty at this time." << endl;
    }
    
    cout << "******************" << endl;
    
    cout << "beginning push: " << endl << endl;
    
    for(int i = 0; i < numberOfLoops; i++){
        
        random = rand()%RANDOMINT;
        random2= rand()%3+1;
        
        if (!myStack.push(random)){
            cout << "could not push, stack overflow." << endl;
        } else if(random2==1){
            cout << "pushed " << random << " onto the stack. " << endl; 
            cout << "random peek --- at this time the top element should be " << myStack.peek() << endl;
        } else {
            cout << "pushed " << random << " onto the stack. " << endl;
        }
    }
    
    cout << "******************" << endl << endl;
    cout << "push size was " << numberOfLoops << endl;
    cout << "******************" << endl << endl;
    
    if(!myStack.isEmpty()){
        cout << "The stack is not empty at this time. " << endl;
    }
    
    cout << "popping 15 elements : " << endl;
    cout << "******************" << endl << endl;
    
    for (int i = 0; i < 15; i++){
        try{
            cout << "Popping the last element in the stack: " << myStack.pop() << endl;
        } catch(...){
          cout << "Could not pop anymore, underflow!" << endl;
        }
    }
    //now going to push some more unto the stack and instead pop a random number out so that it is not always empty
    
    cout << endl <<"Pushing 15 so that the stack is not empty: " << endl;
    cout << "******************" << endl << endl;
    
        for(int i = 0; i < 15; i++){
        
        random = rand()%RANDOMINT;
        
        if (!myStack.push(random)){
            cout << "could not push, stack overflow." << endl;
        } else {
            cout << "pushed " << random << " onto the stack. " << endl;
        }
    }
    
    for (int i = 0; i < popCounter; i++){
        try{
            cout << "Popping the last element in the stack: " << myStack.pop() << endl;
        } catch(...){
          cout << "Could not pop anymore, underflow!" << endl;
        }
    }
    
    cout << "******************" << endl << endl;
    
    //at this point sometimes the stack is empty and sometimes it is not
    
    try{
        cout << endl << "Peeking at the top element: " << myStack.peek() << endl;
        cout << "******************" << endl << endl;
    } catch(...){
        cout << endl;
        cout << "Peek failed, nothing to see here. " << endl;
    }
    
    if(myStack.isEmpty()){
        cout << endl << "The stack is empty at this time." << endl;
    } else {
        cout << "The stack is not empty at this time. " << endl;
    }
    
    cout << endl;
    
    //going to test an extremely large attempt at pushing to test the boundry 
    for(int i = 0; i < LARGETEST; i++){
        
        random = rand()%RANDOMINT;
        
        if (!myStack.push(random)){
            cout << "could not push, stack overflow." << endl;
        } else {
            cout << "pushed " << random << " onto the stack. " << endl;
        }
        
    }
    return 0;
}