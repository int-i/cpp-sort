#include <algorithm>
#include <functional>
#include <iterator>

namespace sort {
    template<std::random_access_iterator I,
             std::sentinel_for<I> S,
             typename Compare = std::less<>>
    void selection_sort(I first, S last, Compare cmp = Compare{}) {
        for (auto it = first; it < last; ++it) {
            std::iter_swap(std::min_element(it, last, cmp), it);
        }
    }
} // namespace sort
