int getSum(Node *head){
	Node *tmp = head;
	int sum = 0;
	
	while(tmp != NULL){
		sum += tmp -> value;
		tmp = tmp -> nextNode;	
	}
	
	return sum;
}
