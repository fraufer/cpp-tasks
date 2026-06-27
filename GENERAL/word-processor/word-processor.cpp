// CHECKED

#include <iostream>
#include <string>

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    std::cin >> n >> k;

    std::string current_word;
    int current_length = 0;
    bool firstWord = true;

    for (int i = 0; i < n; i++) {
        std::cin >> current_word;
        
        if(current_length + current_word.length() > k){
            std::cout<< '\n' <<  current_word;
            current_length = current_word.length();
        } else{
            if(firstWord){
                std::cout << current_word;
                current_length += current_word.length();
                firstWord = false;
            } else{
                std::cout << " " << current_word;
                current_length += current_word.length();
            }
        }
    }

    return 0;
}