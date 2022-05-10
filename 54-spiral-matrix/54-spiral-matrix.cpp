class Solution
{
    public:
        vector<int> spiralOrder(vector<vector < int>> &matrix)
        {

            vector<int> out;

            int row_start = 0;

            int row_end = matrix.size() - 1;

            int col_start = 0;

            int col_end = matrix[0].size() - 1;

            int curr_row = row_start;

            int curr_col = col_start;

            while (row_start <= row_end && col_start <= col_end)
            {

                while (curr_col <= col_end)	// left to right
                {
                    int element = matrix[row_start][curr_col];

                    out.push_back(element);

                    curr_col++;
                }

                row_start++;

                curr_row = row_start;

                while (curr_row <= row_end && row_start <= row_end && col_start <= col_end)	// top to bottom
                {
                    int element = matrix[curr_row][col_end];

                    out.push_back(element);

                    curr_row++;
                }

                col_end--;

                curr_col = col_end;

                while (curr_col >= col_start && row_start <= row_end && col_start <= col_end)	// right to left
                {

                    int element = matrix[row_end][curr_col];

                    out.push_back(element);

                    curr_col--;
                }

                row_end--;

                curr_row = row_end;

                while (curr_row >= row_start && row_start <= row_end && col_start <= col_end)	// bottom to top
                {
                    int element = matrix[curr_row][col_start];

                    out.push_back(element);

                    curr_row--;
                }

                col_start++;

                curr_col = col_start;
            }

            return out;
        }
};