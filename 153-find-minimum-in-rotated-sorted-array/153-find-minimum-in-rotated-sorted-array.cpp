class Solution
{
    public:

        int solve(vector<int> &nums, int low, int high, int first, int last)
        {

            if (low == high)
                return nums[low];

            int mid = low + (high - low) / 2;

            if (first <= last)
                return first;

            if (nums[mid] > nums[mid + 1])
                return nums[mid + 1];

           	else if(nums[mid] < nums[mid-1])
           	    return nums[mid];

            else if (nums[mid] > first)
                return solve(nums, mid + 1, high, first, last);
            else
                return solve(nums, low, mid - 1, first, last);
        }

    int findMin(vector<int> &nums)
    {

        return solve(nums, 0, nums.size() - 1, nums[0], nums[nums.size() - 1]);
    }
};