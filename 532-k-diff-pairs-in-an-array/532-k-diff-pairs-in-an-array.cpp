class Solution
{
    public:
        int findPairs(vector<int> &nums, int k)
        {

            unordered_map<int, int> table;

            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                table[nums[i]]++;
            }

            int count = 0;

            for (auto it: table)
            {
                if (k == 0)      // if k==0 we have to check how many elements have occured more than once
                {
                    if (it.second >= 2)
                        count++;
                }
                else
                {
                    if (table.find(it.first + k) != table.end())
                        count++;
                }
            }

            return count;
        }
};
