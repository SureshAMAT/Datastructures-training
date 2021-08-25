#include<iostream>
using namespace std;
class node {
public:
	int data;
	node *next;
};
void print(node*n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
void deletenode(node **head,int key) {
	node *temp = *head;
	node *prev = NULL;

	if (temp != NULL && temp->data == key) {
		*head = temp->next;
		delete temp;
		return;
	}
	else {
		while (temp != NULL && temp->data != key) {
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
			return;
		prev->next = temp->next;
		delete temp;
	}
}
int main() {
	node *head = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();

	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = fourth;
	fourth->data = 4;
	fourth->next = NULL;


	deletenode(&head, 5);
	print(head);
	return 0;
}