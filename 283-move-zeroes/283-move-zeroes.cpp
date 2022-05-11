class Solution
{
    public:
        void moveZeroes(vector<int> &nums)
        {

            int non_zero_index = -1;

            int index;
            int n = nums.size();
            for (index = 0; index < n; index++)
            {

                if (nums[index] != 0)
                {
                    non_zero_index++;
                    nums[non_zero_index] = nums[index];
                }
            }
            
            non_zero_index++;
            
            for(int i=non_zero_index;i<n;i++)
                nums[i]=0;
        }
};