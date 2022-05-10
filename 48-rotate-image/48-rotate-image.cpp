class Solution
{
    public:

        void transpose(vector<vector < int>> &matrix, int rows, int cols)
        {

            for (int i = 0; i < rows; i++)
            {

                for (int j = 0; j < cols; j++)
                {
                    if (i == j || i > j)
                        continue;

                    else
                    {
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[j][i];

                        matrix[j][i] = temp;
                    }
                }
            }
        }

    void reverse_row(vector<vector < int>> &matrix, int row_index, int cols)
    {

        int start = 0, end = cols - 1;

        while (start < end)
        {
            int temp = matrix[row_index][start];

            matrix[row_index][start] = matrix[row_index][end];

            matrix[row_index][end] = temp;

            start++;

            end--;
        }
    }

    void reverse(vector<vector < int>> &matrix, int rows, int cols)
    {

        for (int i = 0; i < rows; i++)
        {
            reverse_row(matrix, i, cols);
        }
    }

    /*Rotating the matrix by 90 degrees is equivalent to transposing the 

       matrix followed by reversing each row

    */

    void rotate(vector<vector < int>> &matrix)
    {

        transpose(matrix, matrix[0].size(), matrix[0].size());

        reverse(matrix, matrix[0].size(), matrix[0].size());
    }
};