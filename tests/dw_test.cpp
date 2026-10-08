#include <gtest/gtest.h>
#include "dw.h"

TEST(CountOccurrences, CountsMultipleMatches) {
    int values[] = {2, 4, 2, 6, 2};
    EXPECT_EQ(count_occurrences(values, 5, 2), 3);
}

TEST(CountOccurrences, ReturnsZeroWhenNoMatch) {
    int values[] = {1, 2, 3};
    EXPECT_EQ(count_occurrences(values, 3, 9), 0);
}

TEST(CountOccurrences, CountsSingleMatch) {
    int values[] = {5, 6, 7};
    EXPECT_EQ(count_occurrences(values, 3, 6), 1);
}
