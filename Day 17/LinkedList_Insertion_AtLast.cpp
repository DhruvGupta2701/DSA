#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* next;//Pointer to next node

    Node(int data)
    {
       value = data;
       next = NULL;
    }
};
void insertAtFirst(Node* &head, int value)
{
    //creating new node
    Node* newNode = new Node(value);
    //pointing next of new node to head
    newNode->next = head;
    //making new node head
    head = newNode;
}
void insertAtLast(Node* &head, int value)
{
    Node* newNode = new Node(value);
    Node* tail = head;
    while(tail->next!=NULL)
    {
        tail = tail->next;
    }
    tail->next = newNode;

}
void displayEvenOdd(Node* head) {
	Node *tempNode;
	tempNode=head;
	while(tempNode!= NULL)
	{
		if(tempNode->value %2==0)
		{
			cout<<"Even: ";
		}
		else
		{
			cout<<"Odd: ";
		}
		cout<<tempNode->value<<" ";
		tempNode=tempNode->next;
	}
	cout<<endl;
}
void display(Node* head)
{
    Node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* n1 = new Node(40);
    cout<<n1->value<<"->"<<n1->next<<endl;;
    Node* head = n1;
    insertAtFirst(head,35);
    display(head);
    insertAtFirst(head,20);
    display(head);
    insertAtFirst(head,15);
    display(head);
    insertAtLast(head,45);
    display(head);
    displayEvenOdd(head);
}
