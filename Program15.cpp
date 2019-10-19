/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/
Node<int>* midpoint_linkedlist(Node<int> *head)
{
    // Write your code here
Node<int>* slow = head;
Node<int>* fast = head;
while(fast->next!= NULL ){
         slow=slow->next;
         fast=fast->next->next;
 } 
return slow;
}

Node<int>* rev_linkedlist_itr(Node<int>* head)
{
    //write your iterative code here
Node<int>*temp;
Node<int>*current=head;
Node<int>*previous=NULL;
while(current!=NULL)
 {
     temp=current->next;
     current->next=previous;
     previous=current;
     current=temp;
  }
return previous;
}
/*****  This function rearranges the given linked list *******/ 
Node<int>* rearrange(Node<int> *head){
	// Write your code here
    if(head == NULL || head -> next == NULL ){
      return head;
    }    

    Node<int>* curr1 = head;
    Node<int>* mid = midpoint_linkedlist(head);
    Node<int>* midnext = mid; 
    Node<int>* curr2 = rev_linkedlist_itr(midnext);
    Node<int>* tail = head;
    int flag = 0;
    curr1 = curr1 -> next;
    tail -> next = curr2 ;
    tail = curr2;
    curr2 = curr2 -> next;
  
    while(curr1 != NULL && curr2 != NULL){
      if(flag == 0){
        tail -> next = curr1;
        tail = curr1;
        curr1 = curr1 -> next;
        flag = 1;
      }
      else if (flag == 1){       
        tail -> next = curr2;
        tail = curr2;
        curr2 = curr2 -> next;
        flag = 0;       
      }
    }  
    if(curr1 != NULL){
      tail -> next = curr1;
      tail = curr1;
    }
    else if(curr2 != NULL){
      tail -> next = curr2;
      tail = curr2;
    }
    
    return head;
    

}
