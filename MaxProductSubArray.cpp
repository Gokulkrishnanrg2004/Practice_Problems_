//152. Maximum Product Subarray
// Using Kadanes Algorithm
class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        //KADANES ALGORITHM
        int maxp = INT_MIN;
        int prod=1;
        for(int i=0;i<nums.size();i++)
        {
            prod = prod*nums[i];
            maxp = max(maxp,prod);
            if(prod==0)
            {
                prod=1;
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            prod = prod*nums[i];
            maxp = max(maxp,prod);
            if(prod==0)
            {
                prod=1;
            }
        }
        return maxp;
    }
};
