#include<iostream>
using namespace std;
class node {
public:
	int data;
	node *next;
};
void insertafter(node*prev_node, int new_num) {
	if (prev_node == NULL) {
		cout << "previous node cannot be NULL";
		return;
	}
	node *fourth = new node();
	fourth->data = new_num;
	fourth->next = prev_node->next;
	prev_node->next = fourth;
}
void print(node*n) {
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

	insertafter(second, 4);
	print(head);
	return 0;
}