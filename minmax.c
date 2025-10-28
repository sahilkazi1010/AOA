#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int max = findMax(arr, n - 1);
    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int min = findMin(arr, n - 1);
    if (arr[n - 1] < min)
        return arr[n - 1];
    else
        return min;
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    

    printf("Enter elements");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum element = %d\n", findMax(arr, n));
    printf("Minimum element = %d\n", findMin(arr, n));

    return 0;
}
