// stackOop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stack>

using namespace std;

class Stack {
private:
    int* a;
    int top;
    int max;
public:
    Stack(int size) {
      this->a = new int[size];
      this-> top = -1;
      max = size;
     
            
    }
    bool stackFull() {
        return top == max - 1;
        
    }
    bool stackEmpty() {
        return top = -1;
    }
    void push(int val) {
        if (!stackFull()){
            a[++top] =val;
        }
        else {
            cout << "FULL Size";
        }
       
    }
    int getTop() {
        if (stackEmpty()) {
            return 0 ;
        }
        else {
            return a[top];
        }
    }
    void pop() {
        if (stackEmpty()) {
            return ;
        }
        else {
            top--;
        }
    }
    void getAll() {
        if (top >= 0) {
            for (int i = top; i >= 0; i--) {
                cout << a[i] << " ";
            }
        }
        else{
            cout << "Empty ";
        }
    }



};


int main()
{
    Stack s(10);
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(6);
    s.getAll();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
