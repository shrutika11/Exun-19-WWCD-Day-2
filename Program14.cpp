// Highest frequency character in a string
// Complexity: E

char function(char input[]) {
    int i,j,m,a[256];
    char ans;
    for(i=0;input[i]!='\0';i++){
        j=input[i];
        a[j]++;
    }
    ans=input[0];
    j=input[0]; 
    m=a[j] ;

    for(i=1;input[i]!='\0';i++){
        j=input[i];
        if(a[j]>m)
        { 
            ans=input[i];
            m=a[j] ;
        }
    }
    return ans;
}

