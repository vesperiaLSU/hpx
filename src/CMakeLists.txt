# Copyright (c) 2007-2014 Hartmut Kaiser
# Copyright (c)      2011 Bryce Lelbach
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

add_subdirectory(components)

foreach(lib "hpx hpx_serialization")
  set(${lib}_SOURCES "" CACHE INTERNAL "Sources for lib${lib}." FORCE)

  if(MSVC)
    set(${lib}_HEADERS "" CACHE INTERNAL "Headers for lib${lib}." FORCE)
  endif()
endforeach()

################################################################################
# gather sources

# libhpx_serialization sources
add_hpx_library_sources(hpx_serialization
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/src/util/*_binary_*archive.cpp")

# libhpx sources
add_hpx_library_sources(hpx
  GLOB GLOBS "${hpx_SOURCE_DIR}/src/*.cpp"
  EXCLUDE "(.*(hpx_main|hpx_user).*[.]cpp)|main.cpp")
add_hpx_library_sources(hpx
  GLOB GLOBS "${hpx_SOURCE_DIR}/src/pre_main.cpp"
  APPEND)
add_hpx_library_sources(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/src/runtime/*.cpp"
  APPEND)
add_hpx_library_sources(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/src/performance_counters/*.cpp"
  APPEND)
add_hpx_library_sources(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/src/util/*.cpp"
  EXCLUDE ".*_binary_.*archive[.]cpp"
  APPEND)
add_hpx_library_sources(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/src/lcos/*.cpp"
  APPEND)


# libhpx_init sources
add_hpx_library_sources(hpx_init
  GLOB GLOBS "${hpx_SOURCE_DIR}/src/hpx_*.cpp"
  EXCLUDE "hpx_init[.]cpp")
add_hpx_library_sources(hpx_init
  GLOB GLOBS "${hpx_SOURCE_DIR}/src/util/lightweight_test.cpp"
  APPEND)
add_hpx_library_sources(hpx_init
  GLOB GLOBS "${hpx_SOURCE_DIR}/src/main.cpp" APPEND)

set(hpx_external_SOURCES "" CACHE INTERNAL "Sources for libhpx_external." FORCE)

if(MSVC)
  if(HPX_HAVE_SWAP_CONTEXT_EMULATION)
    set(switch_to_fiber_source "${hpx_SOURCE_DIR}/src/util/coroutine/switch_to_fiber.asm")
    add_hpx_library_sources(hpx_external_objects
      GLOB GLOBS "${switch_to_fiber_source}")
    add_custom_command(
      OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/switch_to_fiber.obj"
      COMMAND "${CMAKE_ASM_MASM_COMPILER}" /Fo "${CMAKE_CURRENT_BINARY_DIR}/switch_to_fiber.obj" /nologo /c "${switch_to_fiber_source}"
      DEPENDS "${switch_to_fiber_source}"
      VERBATIM)
    set(hpx_external_OBJECTS "${CMAKE_CURRENT_BINARY_DIR}/switch_to_fiber.obj"
      CACHE INTERNAL "External object files for HPX." FORCE)
  endif()
endif()

if("${HPX_PLATFORM_UC}" STREQUAL "ANDROID")
  add_hpx_library_sources(hpx_external GLOB GLOBS "${ANDROID_NDK_ROOT}/sources/android/cpufeatures/cpu-features.c")
endif()

################################################################################
# gather headers

# libhpx_serialization headers
add_hpx_library_headers(hpx_serialization
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/util/*_binary_*.hpp")
add_hpx_library_headers(hpx_serialization
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/util/ichunk_manager.hpp"
  APPEND)
add_hpx_library_headers(hpx_serialization
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/util/ochunk_manager.hpp"
  APPEND)

# libhpx headers
add_hpx_library_headers(hpx
  GLOB GLOBS "${hpx_SOURCE_DIR}/hpx/*.hpp"
  EXCLUDE ".*hpx_main.hpp")
add_hpx_library_headers(hpx
  GLOB GLOBS "${hpx_SOURCE_DIR}/hpx/preprocessed/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/runtime/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/config/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/include/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/lcos/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/performance_counters/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/traits/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/util/*.h*"
  EXCLUDE "(.*_binary_.*|[io]chunk_.*)[.]hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB GLOBS "${hpx_SOURCE_DIR}/hpx/plugins/*.hpp"
  APPEND)
add_hpx_library_headers(hpx
  GLOB_RECURSE GLOBS "${hpx_SOURCE_DIR}/hpx/parallel/*.hpp"
  APPEND)

if(HPX_STATIC_LINKING)
  add_hpx_library_headers(hpx
    GLOB GLOBS "${hpx_SOURCE_DIR}/hpx/components/*.hpp"
    APPEND)
endif()

# libhpx_init headers
#add_hpx_library_headers(hpx_init
#  GLOB GLOBS "${hpx_SOURCE_DIR}/hpx/hpx_init.hpp")
add_hpx_library_headers(hpx_init
  GLOB GLOBS "${hpx_SOURCE_DIR}/hpx/hpx_main.hpp")

################################################################################
# make source groups
add_hpx_source_group(
  NAME hpx_serialization
  CLASS "Source Files"
  ROOT "${hpx_SOURCE_DIR}/src/util"
  TARGETS ${hpx_serialization_SOURCES})

add_hpx_source_group(
  NAME hpx_serialization
  CLASS "Header Files"
  ROOT "${hpx_SOURCE_DIR}/hpx/util"
  TARGETS ${hpx_serialization_HEADERS})

add_hpx_source_group(
  NAME hpx CLASS "Source Files"
  ROOT "${hpx_SOURCE_DIR}/src"
  TARGETS ${hpx_SOURCES})

add_hpx_source_group(
  NAME hpx CLASS "External Source Files"
  ROOT "${hpx_SOURCE_DIR}/external"
  TARGETS ${hpx_external_SOURCES})

add_hpx_source_group(
  NAME hpx
  CLASS "Header Files"
  ROOT "${hpx_SOURCE_DIR}/hpx"
  TARGETS ${hpx_HEADERS})

add_hpx_source_group(
  NAME hpx_init
  CLASS "Source Files"
  ROOT "${hpx_SOURCE_DIR}/src"
  TARGETS ${hpx_init_SOURCES})

add_hpx_source_group(
  NAME hpx_init
  CLASS "Header Files"
  ROOT "${hpx_SOURCE_DIR}/hpx"
  TARGETS ${hpx_init_HEADERS})

################################################################################
# libhpx_serialization
if(NOT HPX_STATIC_LINKING)
  if(MSVC)
    # The MSVC linker can't handle a static library as large as we get when
    # statically linking the main HPX library.
    set(hpx_library_link_mode_core SHARED)
  else()
    set(hpx_library_link_mode_core ${hpx_library_link_mode})
  endif()

  if(HPX_BUILD_DEFAULT_TARGETS)
    add_library(hpx_serialization ${hpx_library_link_mode_core}
      ${hpx_serialization_SOURCES} ${hpx_serialization_HEADERS})
  else()
    add_library(hpx_serialization ${hpx_library_link_mode_core} EXCLUDE_FROM_ALL
      ${hpx_serialization_SOURCES} ${hpx_serialization_HEADERS})
  endif()

  set_target_properties(hpx_serialization PROPERTIES
    VERSION ${HPX_LIBRARY_VERSION}
    SOVERSION ${HPX_SOVERSION}
    CLEAN_DIRECT_OUTPUT 1
    OUTPUT_NAME hpx_serialization
    FOLDER "Core")

  set(hpx_serialization_lib_dependencies
    ${hpx_MALLOC_LIBRARY})

  if(NOT MSVC)
    set(hpx_serialization_lib_dependencies
        ${hpx_serialization_lib_dependencies}
        debug ${Boost_SYSTEM_LIBRARY_DEBUG}
        optimized ${Boost_SYSTEM_LIBRARY_RELEASE}
        debug ${Boost_SERIALIZATION_LIBRARY_DEBUG}
        optimized ${Boost_SERIALIZATION_LIBRARY_DEBUG})
  endif()

  target_link_libraries(hpx_serialization
    ${hpx_serialization_lib_dependencies})

  set_property(TARGET hpx_serialization APPEND
    PROPERTY COMPILE_DEFINITIONS
    "HPX_EXPORTS"
    "HPX_SERIALIZATION_EXPORTS"
    "HPX_COROUTINE_EXPORTS")
  set(hpx_targets ${hpx_targets} hpx_serialization)
endif()

################################################################################
# libhpx
if(HPX_STATIC_LINKING)
  set(hpx_SOURCES ${hpx_SOURCES} ${hpx_serialization_SOURCES} ${hpx_init_SOURCES})
endif()
if(HPX_BUILD_DEFAULT_TARGETS)
  add_library(hpx ${hpx_library_link_mode_core}
    ${hpx_SOURCES} ${hpx_external_SOURCES} ${hpx_external_OBJECTS} ${hpx_HEADERS})
else()
  add_library(hpx ${hpx_library_link_mode_core} EXCLUDE_FROM_ALL
    ${hpx_SOURCES} ${hpx_external_SOURCES} ${hpx_external_OBJECTS} ${hpx_HEADERS})
endif()

#if(HPX_STATIC_LINKING)
#  add_dependencies(hpx static_component_data_hpp)
#endif()

if("${HPX_PLATFORM_UC}" STREQUAL "ANDROID")
  set_target_properties(hpx PROPERTIES
    CLEAN_DIRECT_OUTPUT 1
    OUTPUT_NAME hpx
    FOLDER "Core")
else()
  set_target_properties(hpx PROPERTIES
    VERSION ${HPX_VERSION}
    SOVERSION ${HPX_SOVERSION}
    CLEAN_DIRECT_OUTPUT 1
    OUTPUT_NAME hpx
    FOLDER "Core")
endif()

if(HPX_STATIC_LINKING)
  target_link_libraries(hpx
    ${HPX_LIBRARIES})
else()
  target_link_libraries(hpx
    hpx_serialization
    ${HPX_LIBRARIES})
endif()

set_property(TARGET hpx APPEND
  PROPERTY COMPILE_DEFINITIONS
  "HPX_COMPONENT_NAME=hpx"
  "HPX_EXPORTS"
  "HPX_LIMIT=5"
  "HPX_ENABLE_ASSERT_HANDLER"
  "HPX_COROUTINE_EXPORTS") # Do we still need this?


################################################################################
# Emulation of SwapContext on Windows
################################################################################
if(MSVC)
  if(HPX_HAVE_SWAP_CONTEXT_EMULATION)
    set_property(TARGET hpx APPEND
      PROPERTY LINK_FLAGS
      "/EXPORT:switch_to_fiber")
  endif()
endif()

set(hpx_targets ${hpx_targets} hpx)

################################################################################
# libhpx_init

# hpx/hpx_init_impl.hpp needs HPX_PREFIX, d'oh *FIXME*
set(_prefix ${HPX_PREFIX})
if(MSVC)
  string(REPLACE ";" ":" _prefix "${_prefix}")
endif()
if(NOT HPX_STATIC_LINKING)
  if(HPX_BUILD_DEFAULT_TARGETS)
    add_library(hpx_init STATIC
      ${hpx_init_SOURCES} ${hpx_init_HEADERS})
  else()
    add_library(hpx_init STATIC EXCLUDE_FROM_ALL
      ${hpx_init_SOURCES} ${hpx_init_HEADERS})
  endif()

  set_property(TARGET hpx_init APPEND
    PROPERTY COMPILE_DEFINITIONS
    "HPX_APPLICATION_EXPORTS"
    "HPX_LIMIT=5"
    "HPX_PREFIX=\"${_prefix}\""
    "HPX_ENABLE_ASSERT_HANDLER")

  set_property(TARGET hpx_init PROPERTY FOLDER "Core")
  set(hpx_targets ${hpx_targets} hpx_init)
else()
  set_property(TARGET hpx APPEND
    PROPERTY COMPILE_DEFINITIONS
    "HPX_PREFIX=\"${_prefix}\"")
endif()

set(_optional)
if(HPX_BUILD_DEFAULT_TARGETS)
  set(_optional OPTIONAL)
endif()

install(
  TARGETS
    ${hpx_targets}
  EXPORT HPXTargets
  LIBRARY DESTINATION ${LIB}
  ARCHIVE DESTINATION ${LIB}
  RUNTIME DESTINATION bin
  COMPONENT runtime
  ${_optional}
)

hpx_export_targets(${hpx_targets})

foreach(target ${hpx_targets})
  add_hpx_pseudo_dependencies(core ${target})
endforeach()
