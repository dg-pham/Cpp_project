Node* addNode(Node* head, int index, int value){
	
	Node* newNode = new Node;
	
	if(index == 0){
		Node* newNode = new Node;
		newNode -> value = value;
		newNode -> nextNode = head;
		head = newNode;
	} else{
		Node *tmp = head;
		
		for(int i = 0; i < index - 1; i++){
			tmp = tmp -> nextNode;
		}
		
		newNode -> value = value;
		newNode -> nextNode = tmp -> nextNode;
		tmp -> nextNode = newNode;
	}
	
	return head;
}
