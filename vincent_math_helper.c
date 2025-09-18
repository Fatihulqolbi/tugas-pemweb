#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    int numbers[5];
    int unique = 0;
    int paired[5];
    int pairedCount = 0;

    printf("Enter 1 for unique number or 2 for paired numbers: ");
    scanf("%d", &choice);

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    if (choice == 1) {
        for (int i = 0; i < 5; i++) {
            int count = 0;
            for (int j = 0; j < 5; j++) {
                if (numbers[i] == numbers[j]) {
                    count++;
                }
            }
            if (count == 1) {
                unique = numbers[i];
                break;
            }
        }
        printf("Unique number: %d\n", unique);
    } else if (choice == 2) {
        for (int i = 0; i < 5; i++) {
            int count = 0;
            for (int j = 0; j < 5; j++) {
                if (numbers[i] == numbers[j]) {
                    count++;
                }
            }
            if (count > 1) {
                int isAlreadyPaired = 0;
                for (int k = 0; k < pairedCount; k++) {
                    if (paired[k] == numbers[i]) {
                        isAlreadyPaired = 1;
                        break;
                    }
                }
                if (!isAlreadyPaired) {
                    paired[pairedCount++] = numbers[i];
                }
            }
        }
        printf("Paired numbers: ");
        for (int i = 0; i < pairedCount; i++) {
            printf("%d ", paired[i]);
        }
        printf("\n");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}