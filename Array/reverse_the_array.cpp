// Problem link https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#include <iostream>

using namespace std;


void reverse_arr(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
    	swap(arr[start],arr[end]);
    	start++;
    	end--;
	}
}

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    reverse_arr(a,n);
    
    for(i=0;i<n;i++)
    	cout << a[i] << " ";
    return 0;
}

