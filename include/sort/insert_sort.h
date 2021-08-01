#include <algorithm>
#include <functional>
#include <iterator>

namespace sort {
    template<std::random_access_iterator I,
             std::sentinel_for<I> S,
             typename Compare = std::less<>>
    void insert_sort(I first, S last, Compare cmp = Compare{}) {
        for (auto it = first; it < last; ++it) {
            std::rotate(std::upper_bound(first, it, *it, cmp), it, it + 1);
        }
    }
} // namespace sort

