// ПРОВЕРЕНО

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    std::cin >> a >> b >> x >> y;

    int withoutPortal {abs(a - b)};

    int withPortal{};

    if(abs(a - y) < abs(a - x)){
        withPortal = abs(a - y) + abs(b - x);
    } else {
        withPortal = abs(a - x) + abs(b - y);
    }

    if(withoutPortal < withPortal){
        std::cout << withoutPortal;
    } else{
        std::cout << withPortal;
    }

    return 0;
}