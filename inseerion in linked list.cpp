#include<iostream>
using namespace std;
class node {
public:
	node *next;
	int data;
};
void insertfront(node **ref, int new_data) {
	node *new_node = new node();
	new_node->data = new_data;
	new_node->next = (*ref);
	(*ref) = new_node;
}
void printlist(node*n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
int main() {
	node *head = new node();
	node *second = new node();
	node *third = new node();

	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;

	insertfront(&head, 4);
	printlist(head);
	return 0;

}