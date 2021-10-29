#include <algorithm>
#include <functional>
#include <utility>
#include <vector>
#include <rapidcheck.h>
#include <sort.h>

using pii = std::pair<int, int>;

struct cmp_first_only {
    constexpr bool operator()(const pii &lhs, const pii &rhs) const {
        return lhs.first < rhs.first;
    }
};

int main() {
    rc::check("Bubble Sort", [](std::vector<pii> v) {
        auto v_copied = v;
        sort::bubble_sort(v_copied.begin(), v_copied.end(), cmp_first_only());
        std::stable_sort(v.begin(), v.end(), cmp_first_only());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Insertion Sort", [](std::vector<pii> v) {
        auto v_copied = v;
        sort::insertion_sort(v_copied.begin(), v_copied.end(), cmp_first_only());
        std::stable_sort(v.begin(), v.end(), cmp_first_only());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Merge Sort", [](std::vector<pii> v) {
        auto v_copied = v;
        sort::merge_sort(v_copied.begin(), v_copied.end(), cmp_first_only());
        std::stable_sort(v.begin(), v.end(), cmp_first_only());
        RC_ASSERT(v == v_copied);
    });
    return 0;
}
