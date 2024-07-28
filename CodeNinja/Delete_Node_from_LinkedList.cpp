Node *deleteNode(Node *head, int pos)
{
    if(head==NULL){
		return nullptr;
	}
	if(pos==0){
		Node* temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	head->next=deleteNode(head->next,--pos);
	return head;
}
