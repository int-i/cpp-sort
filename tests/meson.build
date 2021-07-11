gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_main_dep')

test(
  'tests',
  executable(
    'sort',
    ['insert_sort.cpp'],
    dependencies : [libsort_dep, gtest_dep]
  )
)

