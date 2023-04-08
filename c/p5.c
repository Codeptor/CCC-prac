#include <stdio.h>

int fuzzy_time_estimation(int weight) {
    if (weight < 0 || weight > 7000) {
        printf("INVALID INPUT\n");
        return -1;
    }
    else if (weight == 0) {
        printf("Estimated time: 0 minutes\n");
        return 0;
    }
    else if (weight <= 2000) {
        printf("Estimated time: 25 minutes\n");
        return 25;
    }
    else if (weight <= 4000) {
        printf("Estimated time: 35 minutes\n");
        return 35;
    }
    else if (weight <= 7000) {
        printf("Estimated time: 45 minutes\n");
        return 45;
    }
    else {
        printf("OVERLOADED!\n");
        return -1;
    }
}

int main() {
    int weight;
    printf("Enter the weight of the load (in grams): ");
    scanf("%d", &weight);
    fuzzy_time_estimation(weight);
    return 0;
}

