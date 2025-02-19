#include<stdio.h>
void doublets(int sortedarray[], int n, int sum) {
        int left = 0, right = n - 1;
        while (left < right) {
            if (sortedarray[left] + sortedarray[right] < sum){
            	left++;
            } else if (sortedarray[left] + sortedarray[right] > sum) {
                right--;
            } else {
            	printf("the doublets that sum to %d are %d and %d\n",sum,sortedarray[left],sortedarray[right]);
                return;
            }
        }
    printf("No doublets are found\n");
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

    doublets(arr, n, sum);

    return 0;
}

