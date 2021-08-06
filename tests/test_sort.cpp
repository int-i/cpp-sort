#include <algorithm>
#include <vector>
#include <rapidcheck.h>
#include <sort/insertion_sort.h>
#include <sort/merge_sort.h>
#include <sort/quick_sort.h>
#include <sort/selection_sort.h>

int main() {
    rc::check("Insertion Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::insertion_sort(v_copied.begin(), v_copied.end());
        RC_ASSERT(std::is_sorted(v_copied.begin(), v_copied.end()));
        auto v_sorted = v;
        std::sort(v_sorted.begin(), v_sorted.end());
        RC_ASSERT(v_copied == v_sorted);
    });

    rc::check("Merge Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::merge_sort(v_copied.begin(), v_copied.end());
        RC_ASSERT(std::is_sorted(v_copied.begin(), v_copied.end()));
        auto v_sorted = v;
        std::sort(v_sorted.begin(), v_sorted.end());
        RC_ASSERT(v_copied == v_sorted);
    });

    rc::check("Quick Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::quick_sort(v_copied.begin(), v_copied.end());
        RC_ASSERT(std::is_sorted(v_copied.begin(), v_copied.end()));
        auto v_sorted = v;
        std::sort(v_sorted.begin(), v_sorted.end());
        RC_ASSERT(v_copied == v_sorted);
    });

    rc::check("Selection Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::selection_sort(v_copied.begin(), v_copied.end());
        RC_ASSERT(std::is_sorted(v_copied.begin(), v_copied.end()));
        auto v_sorted = v;
        std::sort(v_sorted.begin(), v_sorted.end());
        RC_ASSERT(v_copied == v_sorted);
    });
    return 0;
}

