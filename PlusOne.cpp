#include <iostream>
#include <vector>
#include <stdbool.h>

using namespace std;

class Solution{
public:
    vector<int> plusOne(vector<int>& num){
        bool carry = false;
        for (int i=num.size()-1; i>0; i--){
            if (num.at(i) == 9){
                num.at(i) = 0;
                carry = true;
            } else {
                num.at(i)++;
                break;
            }
        }
        if (num.at(0) == 9 && carry){
            num.at(0) = 0;
            num.insert(num.begin(), 1);
        }
        return num;
    }
};

int main(int argc, char **argv){
    // vector<int> vec = {9, 9, 9};
    
    // Solution s;
    // vec = s.plusOne(vec);
    
    // for (int i=0; i<vec.size(); i++) {
    //     std::cout << vec.at(i) << " ";
    // }

    return 0;
}