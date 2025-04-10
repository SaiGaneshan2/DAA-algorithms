#include <stdio.h>
#include <string.h>

//char A[] = "bd\0";
//char B[] = "abcda\0";

// Recursive LCS function
int LCS(int i, int j,char A[],char B[]) {
    if (A[i] == '\0' || B[j] == '\0') {
        return 0;
    }
    if (A[i] == B[j]) {
        return 1 + LCS(i + 1, j + 1,A,B);
    } else {
        int option1 = LCS(i + 1, j,A,B);
        int option2 = LCS(i, j + 1,A,B);
        return (option1 > option2) ? option1 : option2;
    }
}

int main() {

    char A[] = "bd\0";
    char B[] = "abcda\0";
    int result = LCS(0, 0,A,B);
    printf("Length of Longest Common Subsequence: %d\n", result);
    return 0;
}
