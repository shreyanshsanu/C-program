#include <stdio.h>
void triplets(int sortedarray[], int n, int sum) {
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int currentSum = sortedarray[i] + sortedarray[left] + sortedarray[right];
            if (currentSum == sum) {
                printf("Triplet found: %d, %d, %d\n", sortedarray[i], sortedarray[left], sortedarray[right]);
                return;
            } else if (currentSum < sum) {
                left++;
            } else {
                right--;
            }
        }
    }
    printf("No triplet are found\n");
}

void sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    triplets(arr, n, sum);

    return 0;
}

