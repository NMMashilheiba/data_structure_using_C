#include <stdio.h>
#include <string.h>

int max(int a, int b);
// Function to find the length of the longest common substring between two strings
int longestCommonSubstring(char *X, char *Y, int m, int n, int count) {
    // Base case: if either of the strings is empty, return the count
    if (m == 0 || n == 0) {
        return count;
    }

    // If the last characters of both strings match
    if (X[m - 1] == Y[n - 1]) {
        // Increment count and check next characters
        return longestCommonSubstring(X, Y, m - 1, n - 1, count + 1); 
    }

    // Recur for X[0..m-2] and Y[0..n-1] to handle cases where the last characters do not match
    return max(longestCommonSubstring(X, Y, m - 1, n, 0),
               longestCommonSubstring(X, Y, m, n - 1, 0));
}

// Utility function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char X[] = "abcad";
    char Y[] = "bcdd";

    int m = strlen(X);
    int n = strlen(Y);

    int length = longestCommonSubstring(X, Y, m, n, 0);

    printf("Length of the longest common substring: %d\n", length);

    return 0;
}
