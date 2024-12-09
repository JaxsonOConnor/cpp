#include <iostream>
#include <unordered_map>
#include <vector>

class Solution{
public:
    int majorityElement(std::vector<int>& nums){
        std::unordered_map<int,int> map; // (number, appearances)
        for(int i=0;i<nums.size();i++){
            try{
                map.at(nums.at(i))++;
            }catch(const std::out_of_range& error){
                map.insert({nums.at(i),1});
            }
        }
        
        int max_key;
        int max_value = 0;
        for (const auto pair : map){
            if (pair.second > max_value){
                max_value = pair.second;
                max_key = pair.first;
            }
        }

        return max_key;
    }
};

int main(int argc, char **argv) {
    std::vector<int> test = {2,2,1,1,1,2,2};
    Solution s;
    std::cout<<s.majorityElement();

    return 0;
}