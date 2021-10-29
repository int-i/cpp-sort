#include <algorithm>
#include <functional>
#include <iterator>

namespace sort {
    template<std::random_access_iterator I,
             std::sentinel_for<I> S,
             typename Compare = std::less<>>
    void quick_sort(I first, S last, Compare cmp = Compare{}) {
        if (last - first > 1) {
            auto pivot = *(first + (last - first) / 2);
            auto middle1 = std::partition(first, last, [cmp, pivot](const auto &element) {
                return cmp(element, pivot);
            });
            auto middle2 = std::partition(middle1, last, [cmp, pivot](const auto &element) {
                return !cmp(pivot, element);
            });
            quick_sort(first, middle1, cmp);
            quick_sort(middle2, last, cmp);
        }
    }
} // namespace sort
