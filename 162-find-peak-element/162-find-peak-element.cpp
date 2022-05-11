class Solution
{
    public:

        int find(vector<int> &nums, int low, int high)
        {

            if (low == high)	// only one element is present
            {
                return low;
            }

            if (low == high - 1)	// only two elements are present
            {
                if (nums[low] < nums[high])
                    return high;
                else
                    return low;
            }

            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;

            else if (nums[mid] < nums[mid + 1])
                return find(nums, mid + 1, high);
            else
                return find(nums, low, mid - 1);
        }

    int findPeakElement(vector<int> &nums)
    {

        int low = 0;

        int high = nums.size() - 1;

        return find(nums, low, high);
    }
};