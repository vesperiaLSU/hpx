# Copyright (c) 2007-2014 Hartmut Kaiser
# Copyright (c) 2011-2012 Bryce Adelstein-Lelbach
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

set(tests
    apply_colocated
    apply_local
    apply_remote
    async_continue
    async_local
    async_remote
    composable_guard
    condition_variable
    barrier
    dataflow
    future
    future_ref
    future_then
    future_wait
    local_barrier
    local_dataflow
    local_event
    local_mutex
    packaged_action
    promise
    shared_future
    unwrapped
   )

# include some of the tests for non-gcc 4.4 only
set(gcc_version 040500)
if(GCC_VERSION)
  set(gcc_version ${GCC_VERSION})
endif()

set(non_gcc_44 false)
if(CMAKE_COMPILER_IS_GNUCXX AND HPX_GCC_VERSION_CHECK)
  if(CMAKE_CXX_COMPILER_VERSION VERSION_LESS 4.5)
    set(non_gcc_44 true)
  endif()
endif()


if(non_gcc_44)
  set(tests
      ${tests}
      broadcast
      broadcast_apply
      fold
      reduce
     )
endif()

set(apply_colocated_PARAMETERS LOCALITIES 2)
set(apply_remote_PARAMETERS LOCALITIES 2)

set(async_continue_PARAMETERS LOCALITIES 2)
set(async_remote_PARAMETERS LOCALITIES 2)

set(broadcast_PARAMETERS LOCALITIES 2)
set(broadcast_apply_PARAMETERS LOCALITIES 2)

set(dataflow_FLAGS DEPENDENCIES dataflow_component)
set(dataflow_PARAMETERS THREADS_PER_LOCALITY 4)

set(future_PARAMETERS THREADS_PER_LOCALITY 4)

set(future_wait_PARAMETERS THREADS_PER_LOCALITY 4)

set(local_barrier_PARAMETERS THREADS_PER_LOCALITY 4)

set(local_event_PARAMETERS THREADS_PER_LOCALITY 4)

set(local_mutex_PARAMETERS THREADS_PER_LOCALITY 4)

set(packaged_action_PARAMETERS THREADS_PER_LOCALITY 4)

set(promise_PARAMETERS THREADS_PER_LOCALITY 4)

set(reduce_PARAMETERS LOCALITIES 2)

foreach(test ${tests})
  set(sources
      ${test}.cpp)

  source_group("Source Files" FILES ${sources})

  # add example executable
  add_hpx_executable(${test}_test
                     SOURCES ${sources}
                     ${${test}_FLAGS}
                     EXCLUDE_FROM_ALL
                     HPX_PREFIX ${HPX_BUILD_PREFIX}
                     FOLDER "Tests/Unit/LCOs")

  add_hpx_unit_test("lcos" ${test} ${${test}_PARAMETERS})

  # add a custom target for this example
  add_hpx_pseudo_target(tests.unit.lcos.${test})

  # make pseudo-targets depend on master pseudo-target
  add_hpx_pseudo_dependencies(tests.unit.lcos
                              tests.unit.lcos.${test})

  # add dependencies to pseudo-target
  add_hpx_pseudo_dependencies(tests.unit.lcos.${test}
                              ${test}_test_exe)
endforeach()

set_property(TARGET dataflow_test_exe APPEND
    PROPERTY COMPILE_DEFINITIONS
    "HPX_LIMIT=10")
