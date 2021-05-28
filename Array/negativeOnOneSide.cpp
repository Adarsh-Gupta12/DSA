

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n){
	int low=0,high=n-1;
	while(low<=high){
		if(a[low]<0 && a[high]<0){
			low++;
		}
		else if(a[low]>=0 && a[high]>=0)
			high--;
		else if(a[low]>=0 && a[high]<0){
			swap(a[low],a[high]);
			low++;
			high++;
		}
		else{
			low++;
			high--;
		}
	}	
	
}


int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	solve(a,n);
	for(int i=0;i<n;i++)
		cout << a[i] << " " ;
}
