int getSize(Node *head){
	Node *tmp = head;
	int listSize = 0;
	
	while(tmp != NULL){
		listSize++;
		tmp = tmp -> nextNode;
	}
	
	return listSize;
}
