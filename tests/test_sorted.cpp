#include <algorithm>
#include <functional>
#include <vector>
#include <rapidcheck.h>
#include <sort.h>

int main() {
    rc::check("Bubble Sort", [](std::vector<int> v) {
        auto v_copied = v;
        sort::bubble_sort(v_copied.begin(), v_copied.end());
        std::sort(v.begin(), v.end());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Bubble Sort with Compare Function", [](std::vector<int> v) {
        auto v_copied = v;
        sort::bubble_sort(v_copied.begin(), v_copied.end(), std::greater<>());
        std::sort(v.begin(), v.end(), std::greater<>());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Heap Sort", [](std::vector<int> v) {
        auto v_copied = v;
        sort::heap_sort(v_copied.begin(), v_copied.end());
        std::sort(v.begin(), v.end());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Heap Sort with Compare Function", [](std::vector<int> v) {
        auto v_copied = v;
        sort::heap_sort(v_copied.begin(), v_copied.end(), std::greater<>());
        std::sort(v.begin(), v.end(), std::greater<>());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Insertion Sort", [](std::vector<int> v) {
        auto v_copied = v;
        sort::insertion_sort(v_copied.begin(), v_copied.end());
        std::sort(v.begin(), v.end());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Insertion Sort with Compare Function", [](std::vector<int> v) {
        auto v_copied = v;
        sort::insertion_sort(v_copied.begin(), v_copied.end(), std::greater<>());
        std::sort(v.begin(), v.end(), std::greater<>());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Merge Sort", [](std::vector<int> v) {
        auto v_copied = v;
        sort::merge_sort(v_copied.begin(), v_copied.end());
        std::sort(v.begin(), v.end());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Merge Sort with Compare Function", [](std::vector<int> v) {
        auto v_copied = v;
        sort::merge_sort(v_copied.begin(), v_copied.end(), std::greater<>());
        std::sort(v.begin(), v.end(), std::greater<>());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Quick Sort", [](std::vector<int> v) {
        auto v_copied = v;
        sort::quick_sort(v_copied.begin(), v_copied.end());
        std::sort(v.begin(), v.end());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Quick Sort with Compare Function", [](std::vector<int> v) {
        auto v_copied = v;
        sort::quick_sort(v_copied.begin(), v_copied.end(), std::greater<>());
        std::sort(v.begin(), v.end(), std::greater<>());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Selection Sort", [](std::vector<int> v) {
        auto v_copied = v;
        sort::selection_sort(v_copied.begin(), v_copied.end());
        std::sort(v.begin(), v.end());
        RC_ASSERT(v == v_copied);
    });

    rc::check("Selection Sort with Compare Function", [](std::vector<int> v) {
        auto v_copied = v;
        sort::selection_sort(v_copied.begin(), v_copied.end(), std::greater<>());
        std::sort(v.begin(), v.end(), std::greater<>());
        RC_ASSERT(v == v_copied);
    });
    return 0;
}
