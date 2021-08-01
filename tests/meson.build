cmake = import('cmake')

doctest_proj = subproject('doctest')
doctest_dep = doctest_proj.get_variable('doctest_dep')

rapidcheck_proj = cmake.subproject('rapidcheck')
rapidcheck_dep = rapidcheck_proj.dependency('rapidcheck')

test_inc = include_directories('.')
test_dep = declare_dependency(include_directories : test_inc)

test(
  'tests',
  executable(
    'pbt',
    'test_sort.cpp',
    dependencies: [rapidcheck_dep, sort_dep, test_dep]
  )
)

