//new method you can try
#include <stdio.h>

// Function implementing Moore’s Voting Algorithm
int findCandidate(int arr[], int n) {
    int candidate = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        }
    }
    return candidate;
}

// Function to check if candidate is really a majority element
int isMajority(int arr[], int n, int candidate) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }
    return (count > n/2);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int candidate = findCandidate(arr, n);

    if (isMajority(arr, n, candidate))
        printf("Majority element is: %d\n", candidate);
    else
        printf("No majority element found.\n");

    return 0;
}

