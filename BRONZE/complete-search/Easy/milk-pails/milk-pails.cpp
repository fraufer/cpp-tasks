#include <iostream>

int main(){
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    std::cin >> x >> y >> m;

    int maxMilk = 0;

    for(int a = 0; x * a <= m; ++a){
        int currentX = x * a;

        int b = (m - currentX) / y;

        int totalMilk = currentX + (b * y);

        if(totalMilk > maxMilk){
            maxMilk = totalMilk;
        }
    }
    std::cout << maxMilk;
}