//CHECKED

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int num1, num2, num3, num4, num5, num6, num7;

    std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

    std::vector<int> nums = {num1, num2, num3, num4, num5, num6, num7};

    std::sort(nums.begin(), nums.end());

    int C{nums[6] - nums[0] - nums[1]};

    std::cout << nums[0] << " " <<  nums[1] << " " << C;

    return 0;
}