#include <algorithm>
#include <vector>
#include <rapidcheck.h>
#include <sort/insert_sort.h>
#include <sort/merge_sort.h>

int main() {
    rc::check("Insert Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::insert_sort(v_copied.begin(), v_copied.end());
        RC_ASSERT(std::is_sorted(v_copied.begin(), v_copied.end()));
    });

    rc::check("Merge Sort", [](const std::vector<int> &v) {
        auto v_copied = v;
        sort::merge_sort(v_copied.begin(), v_copied.end());
        RC_ASSERT(std::is_sorted(v_copied.begin(), v_copied.end()));
    });
    return 0;
}

