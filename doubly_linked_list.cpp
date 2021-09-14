#include <iostream>
using namespace std;
class node {
	int data;
	node* next;
	node* prev;
};
void after(node* prevnode, int newdata) {
	if (prevnode == NULL) {
		return;
	}
	node* newnode = new node();
	newnode->data = newdata;
	newnode->next = prevnode->next;
	prevnode->next = newnode;
	newnode->prev = prevnode;
	if (newnode->next != NULL) {
		newnode->next->prev = newnode;
	}
}
void end(node** head, int newdata) {
	node* newnode = new node();
	node* last = *head;
	newnode->data = newdata;
	newnode->next = NULL;
	if (*head== NULL)
	{
		newnode->prev = NULL;
		*head= newnode;
		return;
	}
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = new_node;
	newnode->prev = last;
	return;
}

int main() {
	node* head = new node();
	node* second = new node();
	node* third = new node();
	node* fourth = new node();

	head->data = 1;
	head->next = second;
	head->prev = NULL;

	second->data = 1;
	second->next = third;
	second->prev = head;

	third->data = 3;
	third->next = fourth;
	third->prev = second;

	after(second, 4);
	end(&head, 6);
	return 0;
}