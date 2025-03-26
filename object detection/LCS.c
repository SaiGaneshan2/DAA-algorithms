#include <stdio.h>
#include <string.h>

// Function to find LCS using recursion
int lcs(char *X, char *Y, int m, int n) {
    // Base case: if either string is empty, LCS is 0
    if (m == 0 || n == 0)
        return 0;

    // If last characters match, include it in LCS and recurse for the remaining part
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);

    // If last characters don't match, take the maximum of two possibilities
    else
        return (lcs(X, Y, m - 1, n) > lcs(X, Y, m, n - 1)) ? 
               lcs(X, Y, m - 1, n) : lcs(X, Y, m, n - 1);
}

// Driver code
int main() {
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";

    int m = strlen(X);
    int n = strlen(Y);

    printf("Length of LCS is %d\n", lcs(X, Y, m, n));

    return 0;
}
