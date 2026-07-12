// CHECKED

#include <iostream>
#include <vector>

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::vector<int> fence(100, 0);

    for (int i = a; i < b; i++) {
        fence[i] = 1;
    }

    for (int i = c; i < d; i++) {
        fence[i] = 1;
    }

    int total_painted = 0;
    
    for (int x : fence) {
        if (x == 1) {
            total_painted++;
        }
    }

    std::cout << total_painted << "\n";

    return 0;
}