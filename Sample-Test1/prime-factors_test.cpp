#include "pch.h"
#include "../Project12/prime_factors.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
    PrimeFactor prime_factor;
    vector<int> expected = {};
    EXPECT_EQ(expected, prime_factor.of(1));
}