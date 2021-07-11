#include <algorithm>
#include <functional>
#include <iterator>

template<
    std::random_access_iterator I,
    std::sentinel_for<I> S,
    typename Compare = std::ranges::less
>
void insert_sort(I first, S last, Compare cmp = {}) {
    for (auto it = first; it < last; ++it) {
        std::rotate(std::upper_bound(first, it, *it, cmp), it, it + 1);
    }
}

