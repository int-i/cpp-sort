# C++ Sort

> C++20 Iterator Sorting Algorithm Implementation using and Concepts TS (/w RapidCheck)



![C++](https://img.shields.io/badge/c++-20-00599C?logo=c%2B%2B&logoColor=white&style=for-the-badge)
[![Meson](https://img.shields.io/badge/meson->=0.55.0-064F8C?style=for-the-badge)](https://mesonbuild.com/)
[![License](https://img.shields.io/github/license/int-i/cpp-sort?style=for-the-badge)](./LICENSE)

## Build

### Requirement

- C++20
- [Meson](https://mesonbuild.com/)(>=0.55.0)
- [Ninja](https://ninja-build.org/)

#### (Option) For Testing

- CMake(>=3.0)
- [RapidCheck](https://github.com/emil-e/rapidcheck.git)(Meson [Wrap](https://mesonbuild.com/Wrap-dependency-system-manual.html))

### Guide

1. Clone the repository:

    ```bash
    $ git clone https://github.com/int-i/cpp-sort.git
    ```

2. Build the source:

    ```bash
    $ cd cpp-sort
    $ meson setup build
    $ meson compile -C build
    ```

3. (Option) Test the source:

    ```bash
    $ meson test -C build
    ```
