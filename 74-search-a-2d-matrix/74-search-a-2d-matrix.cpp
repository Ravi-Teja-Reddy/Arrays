class Solution
{
    public:

        bool search(vector<vector < int>> &matrix, int row, int start, int end, int target)
        {

            if (start > end)
                return false;

            int mid = start + (end - start) / 2;

            if (matrix[row][mid] == target)
                return true;

            else if (matrix[row][mid] > target)

                return search(matrix, row, start, mid - 1, target);

            else
                return search(matrix, row, mid + 1, end, target);
        }

    bool solve(vector<vector < int>> &matrix, int start, int end, int target)
    {

        if (start > end)
            return false;

        int mid = start + (end - start) / 2;

        if (matrix[mid][0] == target)

            return true;

        else if (matrix[mid][0] > target)

            return solve(matrix, start, mid - 1, target);
        
        else

    return search(matrix, mid, 0, matrix[0].size() - 1, target) || solve(matrix, mid + 1, end, target);
        
    }
    
    /*
     Do   Binary search  on Rows, followed by Binary search on the row
    */

    bool searchMatrix(vector<vector < int>> &matrix, int target)
    {

        if (matrix.size() == 1)
            return search(matrix, 0, 0, matrix[0].size() - 1, target);

        else

            return solve(matrix, 0, matrix.size() - 1, target);
    }
};