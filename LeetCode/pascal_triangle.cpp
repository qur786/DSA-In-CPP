/**
 * Ref: https://leetcode.com/problems/pascals-triangle/description/
 * Given an integer numRows, return the first numRows of Pascal's triangle.
 * In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
 * Input: numRows = 5
 * Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
 */

#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;
        vector<int> v1(1, 1);
        triangle.push_back(v1);
        if (numRows > 1)
        {
            vector<int> v2(2, 1);
            triangle.push_back(v2);
            for (int i = 2; i < numRows; i++)
            {
                vector<int> v(i + 1);
                v[0] = v[i] = 1;
                for (int j = 1; j < triangle[i - 1].size(); j++)
                {
                    v[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
                triangle.push_back(v);
            }
        }
        return triangle;
    }
};