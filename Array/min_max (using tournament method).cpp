// Problem link   https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include <iostream>

using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[],int low,int high){
    struct Pair minMax,mml,mmr;
    //if there is only one element
    if(low==high){
        minMax.min=arr[low];
        minMax.max=arr[low];
        return minMax;
    }
    //if there are 2 elements
    else if(low==high-1){
        if(arr[high]>arr[low]){
            minMax.max=arr[high];
            minMax.min=arr[low];
        }
        else{
            minMax.min=arr[high];
            minMax.max=arr[low];
        }
        return minMax;
    }
    //if there are more than 2 elements
    int mid=(low+high)/2;
    mml = getMinMax(arr,low,mid);
    mmr = getMinMax(arr,mid+1,high);
    if(mml.min<mmr.min)
        minMax.min=mml.min;
    else
        minMax.min=mmr.min;
    if(mml.max<mmr.max)
        minMax.max=mmr.max;
    else
        minMax.max=mml.max;
    return minMax;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    struct Pair minMax = getMinMax(a,0,n-1);
    cout << "Mininimum is " << minMax.min << endl;
    cout << "Maximum is " << minMax.max << endl;
    return 0;
}

