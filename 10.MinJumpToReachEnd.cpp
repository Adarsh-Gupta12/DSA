class Solution{
  public:
    int minJumps(int a[], int n){
        if(n<=1)
            return 0;
        if(a[0]==0)
            return -1;
        int maxReach=a[0],jump=1,i,j,step=a[0];
        for(i=1;i<n;i++){
            if(i==n-1)
                return jump;
            maxReach=max(maxReach, a[i]+i);
            step--;
            if(step == 0)
            {
                jump++;
                if(i >= maxReach)       //to handle condition where we can't move ahead(jumpfromcurrentindex=0)
                    return -1;
                step = maxReach-i;
            }
        }
        return -1;
    }
};