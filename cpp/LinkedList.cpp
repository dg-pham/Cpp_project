#include<iostream>
using namespace std;
struct Node {
	int value;
	Node *next;
	Node *pre;
};
class LinkedList {
	public:
		LinkedList() {
			head = NULL;
			tail = NULL;
			listSize = 0;
		}
		void addNode(int value) {
			listSize++;
		}
		void deleteNode() {
			if (listSize > 0) {
				listSize--;
			}
		}
		void printAll() {
			Node* tmp = head;
			while (tmp != NULL) {
				cout << tmp->value << " ";
				tmp = tmp->next;
			}
			cout << endl;
		}
		int getSize() {
			return listSize;
		}
	private:
		Node *head;
		Node *tail;
		int listSize;
};
int main() {
	LinkedList a = LinkedList();
	int Q, type, value;
	cin >> Q;
	for (int i=0; i< Q; i++) {
		cin >> type;
		switch(type) {
			case 1:
				cin >> value;
				a.addNode(value);
				break;
			case 2:
				a.deleteNode();
				break;
			case 3:
				cout << a.getSize() << endl;
				break;
		}
	}
	return 0;
}

