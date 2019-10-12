/* The following code should print the leader elements in an array in the same order as they occur in the input array. An array element A[i] is called Leader, if all the elements following it (i.e. present at its right) are less than or equal to A[i]. */

void Leaders(int* arr,int len) {
 	int j=0; int *save = new int[len]; 
	int largest=INT_MIN;
 	for(int i=len-1;i>=0;i--) {
 	if(largest>=arr[i]) {
 		save[j]=arr[i]; 
		largest=arr[i]; 
	} 
	}
 	for(int i=0;i<=j-1;i++) 
	{ 
		cout<<save[i] << " ";
 	}
}

