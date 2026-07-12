#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int N;
    std::cin >> N;

    std::vector<int> total_letters(26, 0);

    for(int i = 0; i < N; ++i){
        std::string word1;
        std::string word2;
        std::cin >> word1 >> word2;
        
        std::vector<int> count1(26, 0);
        std::vector<int> count2(26, 0);

        for(int j = 0; j < word1.length(); ++j){
            char currentChar = word1[j];
            int index = currentChar - 'a';
            count1[index]++;
        }

        for(int j = 0; j < word2.length(); ++j){
            char currentChar = word2[j];
            int index = currentChar - 'a';
            count2[index]++;
        }

        for(int j = 0; j < 26; ++j){
            total_letters[j] += std::max(count1[j], count2[j]);
        }
    }
    
    for(int i = 0; i < 26; ++i){
        std::cout << total_letters[i] << '\n';
    }
}