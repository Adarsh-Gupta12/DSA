//We can also use map or set

int doUnion(int a[], int n, int b[], int m)  {
        int count = 0;
        int i=0, j=0;
        sort(a,a+n);
        sort(b,b+m);
        while(i<n && j<m){
            while(i<n-1 && a[i] == a[i+1])
                i++;
            while(j<m-1 && b[j] == b[j+1])
                j++;
            if(a[i] < b[j]){
                i++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                i++;
                j++;
            }
            count++;
        }
        while(i<n){
            while(i<n-1 && a[i] == a[i+1])
                i++;
            count++;
            i++;
        }
        while(j<m){
            while(j<m-1 && b[j] == b[j+1])
                j++;
            count++;
            j++;
        }
        return count;
    }