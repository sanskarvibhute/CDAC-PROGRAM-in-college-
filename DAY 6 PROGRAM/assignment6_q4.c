#include <stdio.h>
#include <string.h>

// Function to calculate weight with detailed breakdown
int calculateWeightWithBreakdown(char str[]) {
    int weight = 0;
    int i;
    int charWeight;
    
    printf("Breakdown:\n");
    
    for (i = 0; str[i] != '\0'; i++) {
        charWeight = str[i] - 'a' + 1;
        weight += charWeight;
        
        printf("'%c' = %d\n", str[i], charWeight);
    }
    
    return weight;
}

int main() {
    char str[100];
    int weight;
    
    printf("Enter a lowercase string: ");
    scanf("%s", str);
    
    printf("\nString: %s\n", str);
    weight = calculateWeightWithBreakdown(str);
    printf("Total weight: %d\n", weight);
    
    return 0;
}
