#include<iostream>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int data)
    {
        val=data;
        next=NULL;
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
void deleteDuplicateNodes(Node* &head)
{
    Node* current_node=head;
    while(current_node!=NULL)
    {
        while(current_node->next!=NULL && current_node->val==current_node->next->val)
        {
            Node* temp=current_node->next;//node to be deleted
            current_node->next=current_node->next->next;
            free(temp);
        }
        current_node=current_node->next;
    }
}
int main()
{
    LinkedList linkedList;
    linkedList.insertAtLast(1);
    linkedList.insertAtLast(2);
    linkedList.insertAtLast(2);
    linkedList.insertAtLast(3);
    linkedList.insertAtLast(3);
    linkedList.display();
    deleteDuplicateNodes(linkedList.head);
    linkedList.display();
    return 0;
}


