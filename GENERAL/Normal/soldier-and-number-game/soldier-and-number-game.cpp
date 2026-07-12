#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t;i++){
        long long n = 1;
        int score = 0;
        int a;
        int b;
        std::cin >> a >> b;

        for(int i = b; i < a; i++){
            n *= i;
        }
        for(int j = 0; j < n; j++){
            if(n % j == 0){
                n /= i;
                score++;
            }
        }
        std::cout << score;
    }
}