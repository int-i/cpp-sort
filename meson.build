project(
  'libsort',
  'cpp',
  default_options : ['warning_level=3', 'cpp_std=c++20'],
  license : 'MIT',
  version : '0.1'
)

subdir('include')

libsort = both_libraries('sort', include_directories : inc)
libsort_dep = declare_dependency(include_directories : inc, link_with : libsort)

subdir('tests')

