class Solution
{
    public:

        int find(vector<int> &digits, int start, int end, vector<int> &out)
        {
            if (start == end)
            {
                if (digits[start] == 9)
                {
                    out.push_back(0);

                    return 1;
                }
                else
                {
                    out.push_back(digits[start] + 1);

                    return 0;
                }
            }

            int small_output = find(digits, start + 1, end, out);

            if (small_output)
            {
                if (digits[start] == 9)
                {
                    out.push_back(0);
                    return 1;
                }
                else
                {
                    out.push_back(digits[start] + 1);
                    return 0;
                }
            }
            else
            {
                out.push_back(digits[start]);
                return 0;
            }
        }

    vector<int> plusOne(vector<int> &digits)
    {

        vector<int> out;
        int carry = find(digits, 0, digits.size() - 1, out);

        if (carry)
            out.push_back(1);

        reverse(out.begin(), out.end());

        return out;
    }
};