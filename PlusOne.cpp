#include <iostream>
#include <vector>
#include <algorithm>
#include <stdbool.h>
#include <cstdlib>

using namespace std;

class Solution{
public:
    vector<int> plusOne(vector<int>& nums){
        int i = nums.size()-1;
        if (nums.at(i) < 9) {nums.at(nums.size()-1)++; return nums;} // edge case

        for (i; i>=0; i--){
            if (i != nums.size()-1){
                if (nums.at(i+1) == 10){
                    nums.at(i)++;
                    nums.at(i+1)=0;
                }
            } else {
                if (nums.at(i) == 9){
                    nums.at(i)++;
                } else {
                    nums.at(i++);
                    break;
                }
            }
        }

        if (nums.at(0) == 10) {
            nums.at(0)=0;
            nums.insert(nums.begin(), 1);
        }

        return nums;
    }
};

int main(int argc, char *argv[]){
    vector<int> vec = {9, 9, 9};
    
    Solution s;
    vec = s.plusOne(vec);
    
    for (int num : vec) cout << num << " ";

    return 0;
}