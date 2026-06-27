// CHECKED

#include <iostream>

int main(){
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    
    int b_before, b_after;
    std::cin >> b_before >> b_after;

    int s_before, s_after;
    std::cin >> s_before >> s_after;

    int g_before, g_after;
    std::cin >> g_before >> g_after;

    int p_before, p_after;
    std::cin >> p_before >> p_after;

    int gToP = p_after - p_before;
    int sToG = (g_after - g_before) + gToP;
    int bToS = (s_after - s_before) + sToG;


    std::cout << bToS << '\n';
    std::cout << sToG << '\n';
    std::cout << gToP << '\n';

}