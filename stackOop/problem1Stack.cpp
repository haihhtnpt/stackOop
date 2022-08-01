// problem1Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <stdio.h>

using namespace std;

class Node {
private:
	Node* next;
	int data;
public:
	Node() {
		data = 0;
		next = NULL;
	}
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
	int getData() {
		return data;
	}
	Node* getNext() {
		return next;
	}
	void setData() {
		this->data = data;
	}
	void setNext(Node * tmp) {
		this->next = tmp;
	}
};
 
typedef class Node* node;

class Stack {
private:
	Node* pHead;
	Node* pTail;
public:
	Stack() {
		pHead = NULL;
		pTail = NULL;
	}
	void Push(int data) {
		node tmp = new Node(data);
		if(pHead == NULL) {
			pHead = pTail = tmp;
			return;
		}
		else {
		pTail->setNext(tmp);
		pTail = tmp;
		}
	}
	void Pop() {

		Node* tmp = pHead;
		if (pHead == NULL) {
			return;
		}
		else {
			node before = NULL;
			node after = pHead;
			while (after->getNext() != NULL) {
				before = after;
				after = after->getNext();
			}
			if (before == NULL) {
				pHead = NULL;
			}
			else {
				before->setNext(NULL);
				pTail = before;
			}
		}
	}
	void getAll() {
		for (node p = pHead; p != NULL; p = p->getNext()) {
			cout << p->getData() << " ";
		}
	}
};
class Expression {
private:
	string a;
public:
	Expression() {
		a = "";
	}
	Expression(string s) {
		this->a = s;
	}
	void Push(){
		cout << a;
	}
	
};

int main()
{
	Stack s;

	s.Push(1);
	s.Push(2);
	s.Push(5);
	s.Push(-4);
	s.Pop();
	s.Push(1);
	s.getAll();
	
	Expression a("1-2*3x");
	
	cout << "demo";
	a.Push();
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
