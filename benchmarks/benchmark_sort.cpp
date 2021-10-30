#include <algorithm>
#include <functional>
#include <random>
#include <vector>
#include <benchmark/benchmark.h>
#include <sort/sort.h>

static void BM_BubbleSort(benchmark::State &state) {
    std::mt19937 rng;
    std::vector<int> v(state.range(0));
    for (auto _ : state) {
        state.PauseTiming();
        std::generate(v.begin(), v.end(), std::ref(rng));
        state.ResumeTiming();
        sort::bubble_sort(v.begin(), v.end());
    }
}

static void BM_HeapSort(benchmark::State &state) {
    std::mt19937 rng;
    std::vector<int> v(state.range(0));
    for (auto _ : state) {
        state.PauseTiming();
        std::generate(v.begin(), v.end(), std::ref(rng));
        state.ResumeTiming();
        sort::heap_sort(v.begin(), v.end());
    }
}

static void BM_InsertionSort(benchmark::State &state) {
    std::mt19937 rng;
    std::vector<int> v(state.range(0));
    for (auto _ : state) {
        state.PauseTiming();
        std::generate(v.begin(), v.end(), std::ref(rng));
        state.ResumeTiming();
        sort::insertion_sort(v.begin(), v.end());
    }
}

static void BM_MergeSort(benchmark::State &state) {
    std::mt19937 rng;
    std::vector<int> v(state.range(0));
    for (auto _ : state) {
        state.PauseTiming();
        std::generate(v.begin(), v.end(), std::ref(rng));
        state.ResumeTiming();
        sort::merge_sort(v.begin(), v.end());
    }
}

static void BM_QuickSort(benchmark::State &state) {
    std::mt19937 rng;
    std::vector<int> v(state.range(0));
    for (auto _ : state) {
        state.PauseTiming();
        std::generate(v.begin(), v.end(), std::ref(rng));
        state.ResumeTiming();
        sort::quick_sort(v.begin(), v.end());
    }
}

static void BM_SelectionSort(benchmark::State &state) {
    std::mt19937 rng;
    std::vector<int> v(state.range(0));
    for (auto _ : state) {
        state.PauseTiming();
        std::generate(v.begin(), v.end(), std::ref(rng));
        state.ResumeTiming();
        sort::selection_sort(v.begin(), v.end());
    }
}

BENCHMARK(BM_BubbleSort)->RangeMultiplier(4)->Range(1 << 6, 1 << 12);
BENCHMARK(BM_HeapSort)->RangeMultiplier(4)->Range(1 << 6, 1 << 12);
BENCHMARK(BM_InsertionSort)->RangeMultiplier(4)->Range(1 << 6, 1 << 12);
BENCHMARK(BM_MergeSort)->RangeMultiplier(4)->Range(1 << 6, 1 << 12);
BENCHMARK(BM_QuickSort)->RangeMultiplier(4)->Range(1 << 6, 1 << 12);
BENCHMARK(BM_SelectionSort)->RangeMultiplier(4)->Range(1 << 6, 1 << 12);

BENCHMARK_MAIN();
