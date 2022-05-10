class Solution
{
    public:

       	// function to check the first index of the target
        int find_first(vector<int> &nums, int start, int end, int target)
        {

            if (start > end)
                return -1;

            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
            {

                int ind = mid;

                /*continously check whether the element is present on the left side, 

                so that we can get the  starting index of the target.

                */

                while (1)
                {

                    int check = find_first(nums, start, mid - 1, target);

                    if (check == -1)
                    {
                        break;
                    }

                    ind = check;
                    mid = check;
                }

                return ind;
            }
            else if (nums[mid] > target)
            {
                return find_first(nums, start, mid - 1, target);
            }
            else
            {
                return find_first(nums, mid + 1, end, target);
            }
        }

   	// function to check the last index of the target

    int find_last(vector<int> &nums, int start, int end, int target)
    {

        if (start > end)
            return -1;

        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {

            int ind = mid;

            /*continously check whether the element is present on the left side, 

              so that we can get the  starting index of the target.

             */

            while (1)
            {

                int check = find_last(nums, mid + 1, end, target);

                if (check == -1)
                {
                    break;
                }

                ind = check;
                mid = check;
            }

            return ind;
        }
        else if (nums[mid] > target)
        {
            return find_last(nums, start, mid - 1, target);
        }
        else
        {
            return find_last(nums, mid + 1, end, target);
        }
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {

        vector<int> out;

        int first_index = find_first(nums, 0, nums.size() - 1, target);

        int last_index = find_last(nums, 0, nums.size() - 1, target);

       	// if first_index == -1, then we can be sure that there is no target element in the array.

       	// we can also check for last_index == -1, either of them is fine.

        if (first_index == -1)
        {
            out.push_back(-1);
            out.push_back(-1);
            return out;
        }
        else
        {
            out.push_back(first_index);

            out.push_back(last_index);

            return out;
        }
    }
};