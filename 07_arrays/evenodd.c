#include <stdio.h>

int main() {
    int arr[6] = {1, 3, 5, 7, 9, 11};
    int sumEven = 0;
    int sumOdd = 0;

    // Loop goes from 0 up to 5 (i < 6)
    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    int result = sumEven - sumOdd;
    printf("%d\n", result);

    return 0;
}