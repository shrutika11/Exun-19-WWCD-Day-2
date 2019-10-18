// Complexity: H

#include<iostream>
using namespace std;

// Create  a linked list 
struct node{
	int data;
	node* next;
};
node* create_linked_list(void){
	int n, data;
	cout << "Number of nodes ";
    	cin >> n;
	int s = n;
	node* head = NULL, *tail = NULL;
	cout << "Enter 1 node data ";
	cin >> data;
	node* nodenew = new node();
	nodenew -> data = data;
	head = nodenew;
	tail = head;
	n--;
	while(n--){
    	node* newnode = new node();
    	cout << "Enter "<< s - n << " node data ";
    	cin >> data;
    	tail -> next = newnode;
    	newnode -> data = data;
    	tail = newnode;
    	delete newnode;
	}
	return head;
}
int main(){
        node* head = create_linked_list();
        node* temp = head;
        while(temp != NULL){
    		cout << temp -> data << " ";
        }
	return 0;
 
}

