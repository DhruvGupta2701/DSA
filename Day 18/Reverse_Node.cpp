#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node* head;
    LinkedList()
    {
        head=NULL;
    }
    void insertAtLast(int value)
    {
        Node* new_node=new Node(value);
        if(head==NULL)
        {
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        //reached at last node
        temp->next=new_node;
    }
    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
void reverseNode(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    reverseNode(head->next);
    cout<<head->val<<"->";
}
int main()
{
    LinkedList linkedList;
    linkedList.insertAtLast(1);
    linkedList.insertAtLast(2);
    linkedList.insertAtLast(3);
    linkedList.insertAtLast(4);
    linkedList.display();
    reverseNode(linkedList.head);
    return 0;
}
