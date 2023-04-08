#include <stdio.h>

int main() {
    int jar_capacity, jar_count, candies_per_order, candies_sold;

   
    printf("Enter the capacity of the JAR: ");
    scanf("%d", &jar_capacity);
    printf("initial number of candies in the JAR: ");
    scanf("%d", &jar_count);
    printf("number of candies per order: ");
    scanf("%d", &candies_per_order);

   
    while (1) {
        
        printf("Number of candies in the JAR: %d\n", jar_count);
   
        if (jar_count <= candies_per_order) {
            printf("Refilling the JAR...\n");
            jar_count = jar_capacity;
        }

        scanf("%d", &candies_sold);

        
        if (candies_sold == 0) {
            printf("Exiting...\n");
            break;
        }

        if (candies_sold <= jar_count) {
            printf("NUMBER OF CANDIES SOLD  %d :\n", candies_sold);
            jar_count -= candies_sold;
        } else {
            printf("NUMBER OF CANDIES AVAILABLE %d :\n", jar_count);
        }
    }

    return 0;
}
