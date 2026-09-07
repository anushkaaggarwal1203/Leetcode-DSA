class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //vector<int>& arr=customers;
        int n=customers.size();
        int k=minutes;
        int loss=0;
        for(int i=0;i<k;i++)
        {
            if(grumpy[i]==1) loss+=customers[i];
        }
        int maxloss=loss;
        int idx=0;
        int i=1;
        int j=k;
        while(j<n)
        {
            if(grumpy[j]==1) loss+=customers[j];
            if(grumpy[i-1]==1) loss-=customers[i-1];
            if(loss>maxloss)
            {
                maxloss=loss;
                idx=i;
            }
            i++;
            j++;
        }
        for(int i=idx;i<idx+k;i++)
        {
            grumpy[i]=0;
        }
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(grumpy[i]==0) a+=customers[i];
        }
        return a;
    }
};