#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <algorithm>
#include <vector>
#include <doctest.h>
#include <rapidcheck.h>
#include <rapidcheck/doctest.h>

int factorial(int number) {
    return number <= 1 ? number : factorial(number - 1) * number;
}

TEST_CASE("testing the factorial function") {
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
    CHECK(factorial(10) == 3628800);
}

TEST_CASE("PBT with RC") {
    RC_DOCTEST_PROP("double reversal yields the original value",
        (const std::vector<int> &l0)) {
        auto l1 = l0;
        std::reverse(begin(l1), end(l1));
        std::reverse(begin(l1), end(l1));
        RC_ASSERT(l0 == l1);
    }
}

