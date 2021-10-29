cmake = import('cmake')

rapidcheck_proj = cmake.subproject('rapidcheck')
rapidcheck_dep = rapidcheck_proj.dependency('rapidcheck')

test(
  'test sorted',
  executable(
    'test_sorted',
    'test_sorted.cpp',
    dependencies: [rapidcheck_dep, sort_dep]
  )
)

test(
  'test stable',
  executable(
    'test_stable',
    'test_stable.cpp',
    dependencies: [rapidcheck_dep, sort_dep]
  )
)

