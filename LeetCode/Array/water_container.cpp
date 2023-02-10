/**
 * # Container With Most Water
 *
 * You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
 * Find two lines that together with the x-axis form a container, such that the container contains the most water.
 * Return the maximum amount of water a container can store.
 * Notice that you may not slant the container.
 *
 * Input: height = [1,8,6,2,5,4,8,3,7]
 * Output: 49
 * Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7].
 * In this case, the max area of water (blue section) the container can contain is 49.
 *
 */
#include <vector>
using namespace std;

/**
 * Time complexity: O(n)
 * Space complexity: O(1)
 */
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0;
        int totalLines = height.size();
        for (int i = 0, j = totalLines - 1; i != j;)
        {
            int min = height[i] < height[j] ? height[i] : height[j];
            int area = min * (j - i);
            maxArea = area > maxArea ? area : maxArea;
            if (min == height[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};