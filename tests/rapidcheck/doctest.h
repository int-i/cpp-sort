#ifndef RAPIDCHECK_DOCTEST_H
#define RAPIDCHECK_DOCTEST_H

#include <iostream>
#include <sstream>
#include <utility>
#include <doctest.h>
#include <rapidcheck.h>

namespace rc {
namespace detail {

template<typename Testable>
void checkDoctest(Testable&& testable) {
    const auto result = checkTestable(std::forward<Testable>(testable));
    if (result.template is<SuccessResult>()) {
        printResultMessage(result, std::cerr);
        std::cerr << '\n';
    } else {
        std::ostringstream ss;
        printResultMessage(result, ss);
        DOCTEST_FAIL(ss.str());
    }
}

} // namespace detail
} // namespace rc

#define RC_DOCTEST_PROP(name, args) \
    void rc_doctest_prop_##__FILE__##__LINE__ args; \
    SUBCASE(name) { \
        ::rc::detail::checkDoctest(&rc_doctest_prop_##__FILE__##__LINE__); \
    } \
    void rc_doctest_prop_##__FILE__##__LINE__ args

#endif // RAPIDCHECK_DOCTEST_H

