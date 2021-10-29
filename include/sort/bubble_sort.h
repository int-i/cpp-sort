#include <algorithm>
#include <functional>
#include <iterator>

namespace sort {
    template<std::random_access_iterator I,
             std::sentinel_for<I> S,
             typename Compare = std::less<>>
    void bubble_sort(I first, S last, Compare cmp = Compare{}) {
        for (auto i = first; i < last; ++i) {
            for (auto j = i + 1; j < last; ++j) {
                if (cmp(*j, *i)) {
                    std::iter_swap(i, j);
                }
            }
        }
    }
} // namespace sort
