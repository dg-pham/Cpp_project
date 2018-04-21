Node* deleteNode(Node* head, int index){
	
	if(index == 0){
		Node *tmp = head;
		head = head -> nextNode;
		delete tmp;
	} else{
		Node *tmp = head;
		
		for(int i = 0; i < index - 1; i++){
			tmp = tmp -> nextNode; 
		}
		
		Node* delElement = tmp -> nextNode;
		tmp -> nextNode = tmp ->nextNode -> nextNode;
		delete delElement;
	}
	
	return head;
}
