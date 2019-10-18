// Sort the given array
// Complexity= M

void merge(int* arr, int si, int mid, int ei){
    int i = si,j = mid + 1, count = 0;
    int temp[ei - si + 1];
    while(i <= mid && j < ei){
        if(arr[i] > arr[j]){
            temp[count] = arr[j];
            j++;
        }
        else{
            temp[count] = arr[i];
            i++;
        }
    }
}
void func(int* arr, int si, int ei){
    if(si <= ei){
        int mid = (si + ei)/2;
        func(arr, si, mid);
        func(arr, mid + 1, ei);
    }
}

