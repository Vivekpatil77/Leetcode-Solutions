class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int max = 0;
        int n = nums.size();
        if(n<3){
            return nums[0];
        }
        if(n==3){

            if(nums[0]!=nums[1]&&nums[1]!=nums[2])
            {
            return nums[2];
            }
            else{
                return nums[0];
            }
        }
        int count = 1;
        for(int i = 0;i<n-1;i++)
        {
            
            if(nums[i]!=nums[i+1])
            {
                count++;
                if(count == 3){
                    return nums[i+1];
                }
            }
            if(i== n-1)
            {

                if(nums[i]!=nums[i+1])
                {
                    return nums[i+1];
                }
                else{
                return nums[0];
                }
            }
        }
        return nums[0];

        
    }
};