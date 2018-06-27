void sort(vector<int> &nums, int s, int e, int d) {
        if (d < 0 || s == e)
            return;
        int i = s;
        for (int j = s; j < e; j++)
            if (nums[j] & (1 << d))
                swap(nums[i++], nums[j]);
        sort(nums, s, i, d-1);
        sort(nums, i, e, d-1);
    }
int Solution::maximumGap(const vector<int> &A) 
{
    int i,n = A.size();
    vector <int> nums(n);
    for(i=0;i<n;i++)
        nums[i] = A[i];
    sort(nums, 0, nums.size(), 31);
    int max_diff = 0;
    for (int i = 0; i < nums.size()-1; i++)
        max_diff = max(max_diff, nums[i] - nums[i+1]);
    return max_diff;
}