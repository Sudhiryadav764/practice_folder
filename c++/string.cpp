#include <iostream>
#include <string>

std::string mergeAlternately(const std::string& word1, const std::string& word2) {
    std::string merged;
    int i = 0, j = 0;
    
    // Loop until both strings are fully traversed
    while (i < word1.length() || j < word2.length()) {
        // If there are characters left in word1, append it to the merged string
        if (i < word1.length())
            merged.push_back(word1[i++]);
        
        // If there are characters left in word2, append it to the merged string
        if (j < word2.length())
            merged.push_back(word2[j++]);
    }
    
    return merged;
}

int main() {
    std::string word1, word2;
    std::cout << "Enter first word: ";
    std::cin >> word1;
    std::cout << "Enter second word: ";
    std::cin >> word2;

    std::string merged = mergeAlternately(word1, word2);
    std::cout << "Merged string: " << merged << std::endl;

    return 0;
}
