#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j ++) {
                if(target == nums[i] + nums[j]) {
                    vector<int> vct;
                    vct.push_back(i);
                    vct.push_back(j);
                    //std::cout << i << ' ' << j << std::endl;
                    return vct;
                }
            }
        }
    }
};
int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(6);
    nums.push_back(9);
    nums.push_back(5);
    Solution s;
    vector<int> ret = s.twoSum(nums,7);
    std::cout << ret[0] << ' ' << ret[1] << std::endl;
    return 0;
}
