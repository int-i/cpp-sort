#include <algorithm>
#include <functional>
#include <iterator>

namespace sort {
    template<std::random_access_iterator I,
             std::sentinel_for<I> S,
             typename Compare = std::less<>>
    void merge_sort(I first, S last, Compare cmp = Compare{}) {
        if (last - first > 1) {
            auto middle = first + (last - first) / 2;
            merge_sort(first, middle);
            merge_sort(middle, last);
            std::inplace_merge(first, middle, last, cmp);
        }
    }
} // namespace sort

