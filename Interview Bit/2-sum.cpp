vector<int> Solution::twoSum(const vector<int> &A, int B) {
    int x=-1,y=-1;
    for(int i=2;i<=A.size();i++)
    for(int j=1;j<i;j++)
    {
        if((A[i-1]+A[j-1])==B)
        {
            x=j;
            y=i;
            vector<int> ans;
        if(x!=-1)
        {
        ans.push_back(x);
        ans.push_back(y);
        }
          return ans;  
        }
    }
    vector<int> ans;
    if(x!=-1)
    {
    ans.push_back(x);
    ans.push_back(y);
    }
    return ans;
    
}

