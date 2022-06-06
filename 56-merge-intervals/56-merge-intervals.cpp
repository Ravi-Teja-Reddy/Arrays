class Solution
{
    public:
        bool static compare(vector<int> v1, vector<int> v2)
        {
            if (v1[0] < v2[0])
                return true;

            else
                return false;
        }
    vector<vector < int>> merge(vector<vector < int>> &intervals)
    {

        stack<vector < int>> stk;

        sort(intervals.begin(), intervals.end(), compare);

        int n = intervals.size();
        for (int i = 0; i < n; i++)
        {
            if (stk.empty())
            {
                stk.push(intervals[i]);
            }
            else if (stk.top()[1] < intervals[i][0])
            {

                stk.push(intervals[i]);
            }
            else if (stk.top()[1] <= intervals[i][1])
            {
                vector<int> v = stk.top();
                stk.pop();
                v[1] = intervals[i][1];
                stk.push(v);
            }
        }

        vector<vector < int>> res;

        while (!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }
        int start = 0;
        int end = res.size() - 1;

        while (start < end)
        {
            swap(res[start], res[end]);

            start++;
            end--;
        }

        return res;
    }
};