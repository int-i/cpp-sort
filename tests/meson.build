cmake = import('cmake')

gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_main_dep')

rapidcheck_opt = cmake.subproject_options()
rapidcheck_opt.add_cmake_defines({'RC_ENABLE_GTEST': true})
rapidcheck_proj = cmake.subproject('rapidcheck', options: rapidcheck_opt)
rapidcheck_dep = rapidcheck_proj.dependency('rapidcheck')
rapidcheck_gtest_dep = rapidcheck_proj.dependency('rapidcheck_gtest')

test(
  'test sorted',
  executable(
    'test_sorted',
    'test_sorted.cpp',
    dependencies: [
      gtest_dep,
      rapidcheck_dep,
      rapidcheck_gtest_dep,
      sort_dep
    ]
  )
)

test(
  'test stable',
  executable(
    'test_stable',
    'test_stable.cpp',
    dependencies: [
      gtest_dep,
      rapidcheck_dep,
      rapidcheck_gtest_dep,
      sort_dep
    ]
  )
)

