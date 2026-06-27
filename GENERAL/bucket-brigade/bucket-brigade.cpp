// CHECKED

#include <iostream>
#include <string>
#include <cmath>

int main(){
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    struct Point
    {
        int x;
        int y;
    };
    
    Point B, L, R;
    
    for(int y = 0; y < 10; y++){
        std::string stroka; 
        std::cin >> stroka;

        size_t found_B = stroka.find('B');
        if (found_B != std::string::npos) {
            B.x = found_B;
            B.y = y;
        }
        
        size_t found_L = stroka.find('L');
        if(found_L != std::string::npos){
            L.x = found_L;
            L.y =y;
        }

        size_t found_R = stroka.find('R');
        if(found_R != std::string::npos){
            R.x = found_R;
            R.y = y;
        }
    }
    
    int cows = abs(B.x - L.x) + abs(B.y - L.y) - 1;

    if (B.y == L.y && B.y == R.y) {
        if ((B.x < R.x && R.x < L.x) || (L.x < R.x && R.x < B.x)) {
            cows += 2;
        }
    }
    
    if (B.x == L.x && B.x == R.x) {
        if ((B.y < R.y && R.y < L.y) || (L.y < R.y && R.y < B.y)) {
            cows += 2;
        }
    }

    std::cout << cows;
}