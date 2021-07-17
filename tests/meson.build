cmake = import('cmake')

rapidcheck_proj = cmake.subproject('rapidcheck')
rapidcheck_dep = rapidcheck_proj.dependency('rapidcheck')

test(
  'tests',
  executable(
    'pbt',
    'pbt.cpp',
    dependencies : rapidcheck_dep
  )
)

