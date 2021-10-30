# C++ Sort

> C++20 Iterator Sorting Algorithm Implementation using Concepts TS (/w RapidCheck)

![C++](https://img.shields.io/badge/c++-20-00599C?logo=c%2B%2B&logoColor=white&style=for-the-badge)
[![Meson](https://img.shields.io/badge/meson->=0.55.0-064F8C?logo=data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAzMiAzMiI+PHBhdGggZmlsbD0ibm9uZSIgc3Ryb2tlPSIjZmZmIiBkPSJNMTUuOTY5IDMwQzkuNDE1IDI5Ljk3MyAyIDI2LjQ0IDIgMjYuNDQgMi40MjcgOS41NzQgMTQuOTE5IDIuNTkyIDE1Ljk2NSAyLjAzN1YybC4wMzUuMDIuMDM1LS4wMnYuMDRDMTcuMDgxIDIuNiAyOS41NzMgOS41NzggMzAgMjYuNDQzYzAgMC03LjQ2MyAzLjU1Ny0xNC4wMzEgMy41NTdaIi8+PHBhdGggZmlsbD0iI2ZmZiIgZD0iTTE3LjggMjMuMWMuNjM4LjM1My41NjcgMS4zNDMuNTY3IDEuMzQzLTYuMDI0LjkxOS03LjUxMi03LjcwNi03LjUxMi03LjcwNmEuOS45IDAgMCAxLTEuMzQ2LS4zNTNjMi4zMzgtNS45OTQgMTAuNDE3LTIuNzU3IDEwLjQxNy0yLjc1Ny0uNDQzLS41ODUuOTIxLTEuMDM4LjkyMS0xLjAzOEMyNC44MTUgMTcuNDM5IDE3LjggMjMuMSAxNy44IDIzLjFaIi8+PC9zdmc+&style=for-the-badge)](https://mesonbuild.com/)
[![GitHub Workflow](https://img.shields.io/github/workflow/status/int-i/cpp-sort/C++?logo=github&logoColor=white&style=for-the-badge)](https://github.com/int-i/cpp-sort/actions)
[![Codecov](https://img.shields.io/codecov/c/gh/int-i/cpp-sort?logo=codecov&logoColor=white&style=for-the-badge)](https://codecov.io/gh/int-i/cpp-sort)
[![License](https://img.shields.io/github/license/int-i/cpp-sort?style=for-the-badge)](./LICENSE)

## Build

### Requirement

- C++20
- [Meson](https://mesonbuild.com/)(>=0.55.0)
- [Ninja](https://ninja-build.org/)

#### (Option) For Testing

- [CMake](https://cmake.org/)(>=3.0)
- [GoogleTest](https://github.com/google/googletest)(Meson [Wrap](https://mesonbuild.com/Wrap-dependency-system-manual.html))
- [RapidCheck](https://github.com/emil-e/rapidcheck.git)(Meson [Wrap](https://mesonbuild.com/Wrap-dependency-system-manual.html))

#### (Option) For Code Coverage

- Test Dependencies
- [Gcovr](https://www.gcovr.com/)(>=3.3)

> Note: If you use **G++ 11** for supporting C++20, you should also use **Gcov 11**.

#### (Option) For Benchmarking

- [GoogleBenchmark](https://github.com/google/benchmark)(Meson [Wrap](https://mesonbuild.com/Wrap-dependency-system-manual.html))

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

4. (Option) Generate code coverage report:

    ```bash
    $ meson setup buildcov -Db_coverage=true
    $ meson test -C buildcov
    $ ninja -C buildcov coverage
    ```

5. (Option) Benchmark sorting algorithm:

    ```bash
    $ meson setup build --buildtype=release
    $ meson test -C build --benchmark
    ```

## License

```text
Copyright (c) 2021 Seungjae Park

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

C++ Sort is licensed under the [MIT License](./LICENSE).
