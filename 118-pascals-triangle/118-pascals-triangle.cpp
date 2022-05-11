class Solution
{
    public:
        vector<vector < int>> generate(int numRows)
        {

            vector<vector < int>> res;

            for (int i = 1; i <= numRows; i++)
            {
                vector<int> out;

                for (int j = 1; j <= i; j++)
                {
                    if (j == 1 || j == i)
                    {
                        out.push_back(1);
                    }
                    else
                    {
                        out.push_back(res[i - 2][j - 2] + res[i - 2][j - 1]);
                    }
                }
                res.push_back(out);
            }

            return res;
        }
};