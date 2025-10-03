#include <stdio.h>
#include <string.h>

// Function to find length of LCS
int lcsLength(char X[], char Y[], int m, int n) {
    int L[m+1][n+1];

    // Build L[m+1][n+1] bottom-up
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = (L[i-1][j] > L[i][j-1]) ? L[i-1][j] : L[i][j-1];
        }
    }
    return L[m][n];
}

// Function to print LCS
void printLCS(char X[], char Y[], int m, int n) {
    int L[m+1][n+1];

    // Build L[m+1][n+1] table
    for (int i = 0; i <= m; i++)
        for (int j = 0; j <= n; j++)
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = (L[i-1][j] > L[i][j-1]) ? L[i-1][j] : L[i][j-1];

    // Reconstruct LCS from table
    int index = L[m][n];
    char lcs[index+1];
    lcs[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i-1] == Y[j-1]) {
            lcs[index-1] = X[i-1];
            i--; j--; index--;
        } else if (L[i-1][j] > L[i][j-1])
            i--;
        else
            j--;
    }

    printf("Longest Common Subsequence: %s\n", lcs);
}

int main() {
    char X[100], Y[100];

    printf("Enter first string: ");
    scanf("%s", X);
    printf("Enter second string: ");
    scanf("%s", Y);

    int m = strlen(X);
    int n = strlen(Y);

    printf("Length of LCS: %d\n", lcsLength(X, Y, m, n));
    printLCS(X, Y, m, n);

    return 0;
}

