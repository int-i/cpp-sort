#include <algorithm>
#include <functional>
#include <vector>
#include <gtest/gtest.h>
#include <rapidcheck/gtest.h>
#include <sort/sort.h>

RC_GTEST_PROP(SortedTest, BubbleSort, (std::vector<int> v)) {
    auto v_copied = v;
    sort::bubble_sort(v_copied.begin(), v_copied.end());
    std::sort(v.begin(), v.end());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, BubbleSortCmp, (std::vector<int> v)) {
    auto v_copied = v;
    sort::bubble_sort(v_copied.begin(), v_copied.end(), std::greater<>());
    std::sort(v.begin(), v.end(), std::greater<>());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, HeapSort, (std::vector<int> v)) {
    auto v_copied = v;
    sort::heap_sort(v_copied.begin(), v_copied.end());
    std::sort(v.begin(), v.end());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, HeapSortCmp, (std::vector<int> v)) {
    auto v_copied = v;
    sort::heap_sort(v_copied.begin(), v_copied.end(), std::greater<>());
    std::sort(v.begin(), v.end(), std::greater<>());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, InsertionSort, (std::vector<int> v)) {
    auto v_copied = v;
    sort::insertion_sort(v_copied.begin(), v_copied.end());
    std::sort(v.begin(), v.end());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, InsertionSortCmp, (std::vector<int> v)) {
    auto v_copied = v;
    sort::insertion_sort(v_copied.begin(), v_copied.end(), std::greater<>());
    std::sort(v.begin(), v.end(), std::greater<>());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, MergeSort, (std::vector<int> v)) {
    auto v_copied = v;
    sort::merge_sort(v_copied.begin(), v_copied.end());
    std::sort(v.begin(), v.end());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, MergeSortCmp, (std::vector<int> v)) {
    auto v_copied = v;
    sort::merge_sort(v_copied.begin(), v_copied.end(), std::greater<>());
    std::sort(v.begin(), v.end(), std::greater<>());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, QuickSort, (std::vector<int> v)) {
    auto v_copied = v;
    sort::quick_sort(v_copied.begin(), v_copied.end());
    std::sort(v.begin(), v.end());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, QuickSortCmp, (std::vector<int> v)) {
    auto v_copied = v;
    sort::quick_sort(v_copied.begin(), v_copied.end(), std::greater<>());
    std::sort(v.begin(), v.end(), std::greater<>());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, SelectionSort, (std::vector<int> v)) {
    auto v_copied = v;
    sort::selection_sort(v_copied.begin(), v_copied.end());
    std::sort(v.begin(), v.end());
    RC_ASSERT(v == v_copied);
};

RC_GTEST_PROP(SortedTest, SelectionSortCmp, (std::vector<int> v)) {
    auto v_copied = v;
    sort::selection_sort(v_copied.begin(), v_copied.end(), std::greater<>());
    std::sort(v.begin(), v.end(), std::greater<>());
    RC_ASSERT(v == v_copied);
};
