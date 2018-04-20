int getElement(Node *head, int index){
	Node *tmp = head;
	
	for(int i = 0; i < index; i++){
		tmp = tmp -> nextNode;
	}
	
	return tmp -> value;
}
