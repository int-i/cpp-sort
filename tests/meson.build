cmake = import('cmake')

rapidcheck_proj = cmake.subproject('rapidcheck')
rapidcheck_dep = rapidcheck_proj.dependency('rapidcheck')

test_inc = include_directories('.')
test_dep = declare_dependency(include_directories : test_inc)

test(
  'test sort',
  executable(
    'test_sort',
    'test_sort.cpp',
    dependencies: [rapidcheck_dep, sort_dep, test_dep]
  )
)

