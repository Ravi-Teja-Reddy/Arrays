class Solution
{
    public:
        vector<int> findDisappearedNumbers(vector<int> &nums)
        {

            /*
                Given that the numbers are in the range of 1 to n.

                so if a number num1 appears, made the number num2 negative in

                such a way that index of num2 is equal to num1.

                So, At the end, the positive numbers indices are the numbers that

                are not appeared in the array.

            */

            int n = nums.size();

            for (int i = 0; i < n; i++)
            {

                int index = abs(nums[i]) - 1;

                if (nums[index] > 0)
                {
                    nums[index] = -nums[index];
                }
            }

            vector<int> out;

            for (int i = 0; i < n; i++)
            {

                if (nums[i] > 0)
                    out.push_back(i + 1);
            }

            return out;
        }
};