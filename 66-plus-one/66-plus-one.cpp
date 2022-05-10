class Solution
{
    public:
    
    /*
        Three steps in Recursion
        
        1. Base Case
        2. Recursive Call
        3. Calculation
    
    */

        int find(vector<int> &digits, int start, int end, vector<int> &out)
        {
            // Base Case
            
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

            int carry = find(digits, start + 1, end, out);   // Recursive Call

            
            // Calculation part
            
            if (carry)
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