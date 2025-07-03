//             1
//         1        2
//     3       4        5
// 6   7       8        9   10



#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern
    int number = 1; // The starting number

    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf("    "); // Four spaces for better alignment
        }
        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%-8d", number++); // %-8d ensures numbers align properly
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}