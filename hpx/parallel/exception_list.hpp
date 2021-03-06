//  Copyright (c) 2007-2014 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_PARALLEL_EXCEPTION_LIST_JUN_25_2014_1055PM)
#define HPX_PARALLEL_EXCEPTION_LIST_JUN_25_2014_1055PM

#include <hpx/hpx_fwd.hpp>
#include <hpx/hpx_finalize.hpp>
#include <hpx/exception_list.hpp>
#include <hpx/parallel/config/inline_namespace.hpp>
#include <hpx/parallel/execution_policy.hpp>

namespace hpx { namespace parallel { HPX_INLINE_NAMESPACE(v1)
{
    namespace detail
    {
        /// \cond NOINTERNAL
        template <typename ExPolicy, typename Result = void>
        struct handle_exception
        {
            HPX_ATTRIBUTE_NORETURN static void call()
            {
                try {
                    throw; //-V667
                }
                catch(std::bad_alloc const& e) {
                    boost::throw_exception(e);
                }
                catch (...) {
                    boost::throw_exception(
                        hpx::exception_list(boost::current_exception())
                    );
                }
            }
        };

        template <typename Result>
        struct handle_exception<task_execution_policy, Result>
        {
            static future<Result> call()
            {
                try {
                    try {
                        throw; //-V667
                    }
                    catch(std::bad_alloc const& e) {
                        boost::throw_exception(e);
                    }
                    catch (...) {
                        boost::throw_exception(
                            hpx::exception_list(boost::current_exception())
                        );
                    }
                }
                catch (...) {
                    return make_error_future<Result>(boost::current_exception());
                }
            }
        };

        template <typename Result>
        struct handle_exception<parallel_vector_execution_policy, Result>
        {
            HPX_ATTRIBUTE_NORETURN static void call()
            {
                // any exceptions thrown by algorithms executed with the
                // parallel_vector_execution_policy are to call terminate.
                hpx::terminate();
            }
        };
        /// \endcond
    }

    // we're just reusing our existing implementation

    using hpx::exception_list;
}}}

#endif
