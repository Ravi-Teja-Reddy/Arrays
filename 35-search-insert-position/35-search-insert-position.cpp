class Solution
{
    public:

        int search(vector<int> &nums, int start, int end, int target)
        {

            if (start > end)
                return start;

            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;

            else if (nums[mid] > target)
                return search(nums, start, mid - 1, target);
            else
                return search(nums, mid + 1, end, target);
        }

    int searchInsert(vector<int> &nums, int target)
    {

        int position = search(nums, 0, nums.size() - 1, target);

        return position;
    }
};