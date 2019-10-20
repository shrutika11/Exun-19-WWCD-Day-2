// Print matrix in spiral form
// Complexity: H

void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 1, l = 1;
    while (k < m & l < n) {
        for (i = l; i < n; ++i){
            cout << a[k][i] << " ";
        }
         for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
         }
    }  //end of while loop 
        
        if (k < m) 
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << a[m - 1][i] << " ";
            }
            m--;
         }   
    if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    
}

