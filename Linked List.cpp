//#include <iostream>
//
//using namespace std;
//
//struct node
//{
//	int data;
//	node* nextNode;
//
//};
//
//class LinkedList 
//{
//private:
//	node* head;
//	node* tail;
//
//public:
//	LinkedList()
//	{
//		head = NULL;
//		tail = NULL;
//	}
//
//	void addFrontNode(int n);
//
//	void addNode(int n);
//
//	void inserNode(node* prevNode, int n);
//	void deleteNode(node* prevNode);
//
//	node* getHead()
//	{
//		return head;
//	}
//	void display(node* head);
//
//};
//
//void LinkedList::addFrontNode(int n)
//{
//	node* temp = new node;
//
//	temp->data = n;
//
//	if (head == NULL)
//	{
//		head = temp;
//		tail = temp;
//	}
//	else
//	{
//		temp->nextNode = head;
//
//		head = temp;
//	}
//
//}
//
//void LinkedList::addNode(int n)
//{
//	node* temp = new node;
//
//	temp->data = n;
//	temp->nextNode = NULL;
//
//	if (head == NULL)
//	{
//		head = temp;
//		tail = temp;
//	}
//	else
//	{
//		tail->nextNode = temp;
//		tail = temp;
//	}
//}
//
//void LinkedList::inserNode(node* prevNode, int n)
//{
//	node* temp = new node;
//	temp->data = n;
//
//	temp->nextNode = prevNode->nextNode;
//	prevNode->nextNode = temp;
//}
//
//void LinkedList::deleteNode(node* prevNode)
//{
//	node* temp = prevNode->nextNode;
//	prevNode->nextNode = temp->nextNode;
//
//	delete temp;
//}
//
//void LinkedList::display(node* head)
//{
//	if (head == NULL)
//	{
//		cout << "\n";
//	}
//	else
//	{
//		cout << head->data << " ";
//		display(head->nextNode);
//	}
//	cout << endl;
//}
//
//int main()
//{
//	LinkedList a;
//	a.addNode(1);
//	a.addNode(2);
//	a.addNode(3);
//
//	cout << "1,2,3을 LikedList에 추가\n";
//	a.display(a.getHead());
//
//	a.addFrontNode(0);
//	a.inserNode(a.getHead()->nextNode->nextNode, 1);
//	cout << "0을 첫번쨰에 추가, 1을 네번째에 추가\n";
//	a.display(a.getHead());
//
//	a.deleteNode(a.getHead()->nextNode);
//
//	cout << "세번째 노드를 삭제\n";
//	a.display(a.getHead());
//}