#include<iostream>
using namespace std;
class node {
public:
	int data;
	node *next;
};
void push(node **head, int newdata) {
	node *newnode = new node();
	newnode->data = newdata;
	newnode->next = *head;
	*head = newnode;
}
void deletenode(node **head, int pos) {
	if (*head == NULL) {
		return;
	}
	node *temp = *head;
	if (pos == 0) {
		*head = temp->next;
		delete(temp);
		return;
	}
	for (int i = 0; temp != NULL && i < pos - 1; i++) {
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL) {
		return;
	}
	node *next = temp->next->next;
	delete(temp->next);
	temp->next = next;
}
void print(node *n)
{
	while (n!= NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}
int main() {
	node*head = new node();
	node*second = new node();
	node*third = new node();
	

	
	head->data = 3;
	push(&head, 2);
	push(&head, 1);
	push(&head, 4);

	deletenode(&head, 3);

	print(head);
	return 0;

}