int fact(int n){
        if(n == 1)
        return 0;
        if(n == 2)
        return 1;
        return func(n - 1) + func(n - 2) + func(n - 3);
}



