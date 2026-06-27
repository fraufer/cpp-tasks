// CHECKED

#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int ans{};

    for(int i = 0; i < n; i++ ){
        int p, v, t;
        std::cin >> p >> v >> t;
        
        if(p + v + t >= 2){
            ans++;
        }
    }
    std::cout << ans;

    return 0;
}