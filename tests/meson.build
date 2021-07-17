cmake = import('cmake')

doctest_proj = subproject('doctest')
doctest_dep = doctest_proj.get_variable('doctest_dep')

rapidcheck_proj = cmake.subproject('rapidcheck')
rapidcheck_dep = rapidcheck_proj.dependency('rapidcheck')

test(
  'tests',
  executable(
    'pbt',
    'pbt.cpp',
    dependencies : [doctest_dep, rapidcheck_dep]
  )
)

