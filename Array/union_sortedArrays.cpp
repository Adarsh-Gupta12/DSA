

#include<bits/stdc++.h>
using namespace std;
int k=0;
void findUnion(int a[],int b[],int c[],int n,int m){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i]==b[j]){
			c[k++]=a[i];
			i++;
			j++;
		}
		else if(a[i]>b[j]){
			c[k++]=b[j];
			j++;
		}
		else{
			c[k++]=a[i];
			i++;
		}
	}
	while(i<n){
		c[k++]=a[i++];
	}
	while(j<m){
		c[k++]=b[j++];
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m],c[m+n],i,j;
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<m;i++)
		cin >> b[i];
	findUnion(a,b,c,n,m);
	for(i=0;i<k;i++)
		cout << c[i] << " ";
}
