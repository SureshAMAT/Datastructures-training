#include<iostream>
using namespace std;
class node {
public:
	int data;
	node *next;
};
void print(node *n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
void insertlast(node **head, int num) {
	node *new_node = new node();
	node*last = *head;
	new_node->data = num;
	new_node->next = NULL;
	if (*head == NULL) {
		*head = new_node;
		return;
	}
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = new_node;
	return;
}
	int main() {
		node*head = new node();
		node*second = new node();
		node*third = new node();

		head->data = 1;
		head->next = second;
		second->data = 2;
		second->next = third;
		third->data = 3;
		third->next = NULL;

		insertlast(&head, 5);
		print(head);
	}
