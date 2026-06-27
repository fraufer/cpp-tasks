// ПРОВЕРЕНО

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n;
    std::cin >> n;

    std::vector<int> arr{1, 2, 3};

    int underOne{};
    int underTwo{};
    int underThree{};

    for(int i = 0; i < n; i++){
        int a, b, g;
        std::cin >> a >> b >> g;

        std::swap(arr[a - 1], arr[b - 1]);

        if(arr[g - 1] == 1){
            underOne++;
        }
        if(arr[g - 1] == 2){
            underTwo++;
        }
        if(arr[g - 1] == 3){
            underThree++;
        }
    }

    std::vector scores{underOne, underTwo, underThree};
    
    int result = *std::max_element(scores.begin(), scores.end());

    std::cout << result;
}