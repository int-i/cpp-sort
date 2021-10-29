#include <algorithm>
#include <functional>
#include <iterator>

namespace sort {
    template<std::random_access_iterator I,
             std::sentinel_for<I> S,
             typename Compare = std::less<>>
    void bubble_sort(I first, S last, Compare cmp = Compare{}) {
        for (auto i = first; i < last; ++i) {
            for (auto j = first + 1; j < last - (i - first); ++j) {
                if (cmp(*j, *(j - 1))) {
                    std::iter_swap(j - 1, j);
                }
            }
        }
    }
} // namespace sort
