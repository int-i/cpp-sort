from argparse import ArgumentParser
from itertools import groupby
import json
import math
import operator
import matplotlib.pyplot as plt


def extract_label_from_benchmark(benchmark):
    benchmark_name = benchmark['name']
    return benchmark_name.split('/')[0][3:]  # erase `BM_`


def extract_size_from_benchmark(benchmark):
    benchmark_name = benchmark['name']
    return benchmark_name.split('/')[1]  # not int, for log scale x axis


if __name__ == "__main__":
    parser = ArgumentParser()
    parser.add_argument('path', help='benchmark result json file')
    parser.add_argument('out', help='benchmark result image file')
    args = parser.parse_args()

    with open(args.path) as file:
        benchmark_result = json.load(file)
        benchmarks = benchmark_result['benchmarks']
        elapsed_times = groupby(benchmarks, extract_label_from_benchmark)
        for key, group in elapsed_times:
            benchmark = list(group)
            x = list(map(extract_size_from_benchmark, benchmark))
            y = list(map(operator.itemgetter('real_time'), benchmark))
            log_y = list(map(math.log, y))
            plt.plot(x, log_y, label=key)
        plt.xlabel('array size')
        plt.ylabel('ln(time)')
        plt.title('Sorting Algorithm Benchmark')
        plt.legend()
        plt.savefig(args.out)
