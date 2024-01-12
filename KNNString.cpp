#include "KNNString.h"
#include <vector>
#include <string>
#include <limits>

#include <algorithm>

int LevenshteinDistance(const std::string& s1, const std::string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    std::vector<std::vector<int>> dp(len1 + 1, std::vector<int>(len2 + 1, 0));

    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            if (i == 0) {
                dp[i][j] = j;
            } else if (j == 0) {
                dp[i][j] = i;
            } else {
                dp[i][j] = std::min({ dp[i - 1][j - 1] + (s1[i - 1] != s2[j - 1]), dp[i - 1][j] + 1, dp[i][j - 1] + 1 });
            }
        }
    }

    return dp[len1][len2];
}

KNNString::KNNString(int k) : KNN<std::vector<std::string>>(k) {}

double KNNString::similarityMeasure(std::vector<std::string>& a, std::vector<std::string>& b) {
    // Calculate the Levenshtein Edit Distance for vectors of strings
    int totalDistance = 0;
    for (const std::string& str1 : a) {
        int minDistance = std::numeric_limits<int>::max();
        for (const std::string& str2 : b) {
            int distance = LevenshteinDistance(str1, str2);
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
        totalDistance += minDistance;
    }
    return static_cast<double>(totalDistance);
}
