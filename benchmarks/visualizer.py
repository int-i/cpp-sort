from argparse import ArgumentParser
import math
import json
import matplotlib.pyplot as plt


if __name__ == "__main__":
    parser = ArgumentParser()
    parser.add_argument('path', help='benchmark data json file')
    args = parser.parse_args()

    with open(args.path) as file:
        benchmarks = json.load(file)['benchmarks']
        data = dict()
        for benchmark in benchmarks:
            label, array_size = benchmark['name'].split('/')
            if label not in data:
                data[label] = [[], []]
            data[label][0].append(array_size)
            data[label][1].append(math.log(benchmark['real_time'], 4))
        for label, [x, y] in data.items():
            plt.plot(x, y, label=label)
        plt.xlabel('array size')
        plt.ylabel('log(time)')
        plt.title('Sorting Algorithm Benchmark')
        plt.legend()
        plt.savefig('benchmark.png')
        plt.savefig('benchmark.svg')

