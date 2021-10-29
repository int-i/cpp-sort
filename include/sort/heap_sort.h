#include <algorithm>
#include <functional>
#include <iterator>

namespace sort {
    template<std::random_access_iterator I,
             std::sentinel_for<I> S,
             typename Compare = std::less<>>
    void heap_sort(I first, S last, Compare cmp = Compare{}) {
        std::make_heap(first, last, cmp);
        while (first != last) {
            std::pop_heap(first, last--, cmp);
        }
    }
} // namespace sort
