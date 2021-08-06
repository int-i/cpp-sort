#include <algorithm>
#include <vector>
#include <rapidcheck.h>
#include <sort/bubble_sort.h>
#include <sort/insertion_sort.h>
#include <sort/merge_sort.h>
#include <sort/quick_sort.h>
#include <sort/selection_sort.h>

void assert_sort(const std::vector<int> &original, const std::vector<int> &sorted) {
    RC_ASSERT(std::is_sorted(sorted.begin(), sorted.end()));
    auto v = original;
    std::sort(v.begin(), v.end());
    RC_ASSERT(v == sorted);
}

int main() {
    rc::check("Bubble Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::bubble_sort(v_copied.begin(), v_copied.end());
        assert_sort(v, v_copied);
    });

    rc::check("Insertion Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::insertion_sort(v_copied.begin(), v_copied.end());
        assert_sort(v, v_copied);
    });

    rc::check("Merge Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::merge_sort(v_copied.begin(), v_copied.end());
        assert_sort(v, v_copied);
    });

    rc::check("Quick Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::quick_sort(v_copied.begin(), v_copied.end());
        assert_sort(v, v_copied);
    });

    rc::check("Selection Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::selection_sort(v_copied.begin(), v_copied.end());
        assert_sort(v, v_copied);
    });
    return 0;
}
