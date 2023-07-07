#include <iostream>
#include <vector>

class Solution {
public:
    static std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1, sum;
        while (i < j) {
            sum = numbers[i] + numbers[j];
            if (sum == target) {
                return std::vector<int>({ i + 1, j + 1 });
            }
            else if (sum > target) {
                j--;
            }
            else {
                i++;
            }
        }
        return std::vector<int>({});
    }
};

int main()
{
    std::vector<int> nums = { 2,7,11,15 };
    for (int i : Solution::twoSum(nums, 9)) {
        std::cout << i << " ";
    }
}
