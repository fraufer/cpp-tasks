#include <iostream>
#include <vector>

int main(){
    // freopen("cbarn.in", "r", stdin);
    // freopen("cbarn.out", "w", stdout);

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> cows(n);
    int cowsCount = 0;

    for(int i = 0; i < n; ++i){
        std::cin >> cows[i];
        cowsCount += cows[i];
    }

    int min = 1e9;

    // for(int i = 0; i < n; ++i){
    //     int minInFor = 0;
    //     for(int j = 0; j < n; ++j){
    //         minInFor += j * cows[j];
    //     }
    //     if(min > minInFor){
    //         min = minInFor;
    //     }

    //     std::vector<int> newCows(n);
    //     for(int k = 0; k < n; ++k){
    //         if(k + 1 != n){
    //             newCows[k + 1] = cows[k];
    //         } else if(k + 1 == n){
    //             newCows[0] = cows[k];
    //         }
    //     }
    //     cows = newCows;
    // }

    for(int i = 0; i < n; ++i){
        int cowsLeft = cowsCount;
        int minInFor = 0;

        for(int j = 0; j < n; ++j){
            cowsLeft -= cows[(j + i) % n];
            minInFor += cowsLeft;
        }
        if(min > minInFor){
            min = minInFor;
        }
    }
    std::cout << min;
}