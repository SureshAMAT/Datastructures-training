#include<iostream>
using namespace std;
class node {
public:
	int data;
	node*next;
};
void deletenode(node* &head, int key) {
	if (head == NULL) {
		cout << "no element found in the list\n";
		return;
	}
	if (head->data == key) {
		node *temp = head;
		head = head->next;
		delete(temp);
		return;
	}deletenode(head->next, key);
}
void print(node*n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
int main() {
	node* head = new node();
	node* second = new node();
	node* third = new node();

	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;

	deletenode(head, 4);
	print(head);
	return 0;
}