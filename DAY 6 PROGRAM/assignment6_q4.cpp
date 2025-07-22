/* Q4. Write a program to find numeric weight of given lowercase string. Assume lower case letters has been
assigned values for 1 to 26 for alphabets ‘a’ to ‘z’. for example weight of string “apple” is
1+16+16+12+5 = 50 */

#include <iostream>
#include <string>

// Function to calculate weight with detailed breakdown
int calculateWeightWithBreakdown(const std::string& str) {
    int weight = 0;
    int charWeight;
    
    std::cout << "Breakdown:" << std::endl;
    
    for (size_t i = 0; i < str.length(); i++) {
        charWeight = str[i] - 'a' + 1;
        weight += charWeight;
        
        std::cout << "'" << str[i] << "' = " << charWeight << std::endl;
    }
    
    return weight;
}

int main() {
    std::string str;
    int weight;
    
    std::cout << "Enter a lowercase string: ";
    std::cin >> str;
    
    std::cout << "\nString: " << str << std::endl;
    weight = calculateWeightWithBreakdown(str);
    std::cout << "Total weight: " << weight << std::endl;
    
    return 0;
}
