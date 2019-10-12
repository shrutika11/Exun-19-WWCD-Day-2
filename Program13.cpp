// Reverse each word of a string

void function(char input[]) {
    int i=0,cws=0,k;char temp; 
    while(input[i]!='\0'){
        if(input[i]==' '){ 
          k=i-1;
            while(cws < k){  
                temp=input[cws];
                input[cws]=input[k];
                input[k]=temp;
                cws++;k--;
            }
        }
        i++;  
    } 
    if(input[i]=='\0'){
        while(cws<k){  
            temp=input[cws];
            input[cws]=input[k];
            input[k]=temp;
            cws++; k--;
        }
    }
}

