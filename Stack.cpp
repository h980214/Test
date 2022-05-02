//#include <iostream>
//using namespace std;
//
//const int MAX_NUM = 100;
//typedef int element;
//
//class Stack
//{
//public:
//	element data[MAX_NUM];
//	int top;
//	
//	Stack()
//	{
//		top = -1;
//	}
//	bool is_empty()
//	{
//		return(top == -1);
//	}
//
//	bool is_full()
//	{
//		return (top == MAX_NUM - 1);
//	}
//
//	void push(element value)
//	{
//		if (is_full())
//		{
//			cout << "STACK OVERFLOW" << endl;
//			exit(-1);
//		}
//		else
//		{
//			data[++top] = value;
//		}
//	}
//	element pop()
//	{
//		if (is_empty())
//		{
//			if (is_empty())
//			{
//				cout << "STACK UNDERFLOW" << endl;
//				exit(-1);
//			}
//			else
//			{
//				return(data[top--]);
//			}
//		}
//	}
//	element peek()
//	{
//		if (is_empty())
//		{
//			cout << "STACK UNDERFLOW" << endl;
//			exit(-1);
//		}
//		else 
//		{
//			return(data[top]);
//		}
//	}
//	void printStack()
//	{
//		cout << "STACK ป๓ลย " << endl;
//		for (int i = top; i >= 0; i--)
//			cout << data[i] << endl;
//
//	}
//};
//
//int main()
//{
//	Stack MyStack;
//	MyStack.push(100);
//	MyStack.printStack();
//
//	MyStack.pop();
//	MyStack.printStack();
//
//	MyStack.push(200);
//	MyStack.printStack();
//
//	MyStack.push(300);
//	MyStack.printStack();
//
//	MyStack.push(400);
//	MyStack.printStack();
//
//	element key = MyStack.pop();
//	MyStack.printStack();
//
//	MyStack.push(500);
//	MyStack.printStack();
//}