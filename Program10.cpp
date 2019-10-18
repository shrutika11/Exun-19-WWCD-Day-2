// Delete first element of circular queue
// Complexity: H
struct node{
    int data;
    node* next;
};
node* create_circular_queue(void){
    int n;
    cout << "Enter number of elements";
    cin >> n;
    node* head = NULL, *tail= NULL;
    while(n--){
        int a;
        cout << "Enter element";
        cin >> a;
        node* newnode = new node;
        newnode -> data = a;
        newnode -> next = NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
    }
    tail -> next = head;
    return head;
}
node* delete_first_element(node* head){
    	//implement
}
void queue_print(node* head){
	//implement
}

