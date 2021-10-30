google_benchmark_proj = subproject('google-benchmark')
google_benchmark_dep = google_benchmark_proj.get_variable('google_benchmark_dep')

benchmark(
  'benchmark sort',
  executable(
    'benchmark_sort',
    'benchmark_sort.cpp',
    dependencies: [
      google_benchmark_dep,
      sort_dep
    ]
  )
)

