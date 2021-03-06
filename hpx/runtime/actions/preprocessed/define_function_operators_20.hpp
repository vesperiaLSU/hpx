// Copyright (c) 2007-2013 Hartmut Kaiser
// Copyright (c) 2012-2013 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


    
    template <typename LocalResult>
    struct sync_invoke_1
    {
        template <typename Arg0>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 )).get(ec);
        }
        template <typename Arg0>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ));
        }
    };
    template <typename IdType, typename Arg0>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 1>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_1<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ), ec);
    }
    template <typename IdType, typename Arg0>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 1>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_1<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_2
    {
        template <typename Arg0 , typename Arg1>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 )).get(ec);
        }
        template <typename Arg0 , typename Arg1>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 2>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_2<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 2>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_2<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_3
    {
        template <typename Arg0 , typename Arg1 , typename Arg2>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 3>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_3<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 3>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_3<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_4
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 4>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_4<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 4>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_4<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_5
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 5>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_5<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 5>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_5<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_6
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 6>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_6<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 6>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_6<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_7
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 7>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_7<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 7>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_7<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_8
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 8>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_8<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 8>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_8<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_9
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 9>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_9<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 9>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_9<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_10
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 10>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_10<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 10>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_10<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_11
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 11>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_11<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 11>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_11<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_12
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 12>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_12<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 12>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_12<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_13
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 13>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_13<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 13>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_13<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_14
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 14>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_14<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 14>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_14<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_15
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 15>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_15<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 15>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_15<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_16
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 16>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_16<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 16>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_16<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_17
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 17>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_17<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 17>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_17<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_18
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 18>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_18<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 18>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_18<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_19
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 19>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_19<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 19>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_19<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 ), ec);
    }
    
    template <typename LocalResult>
    struct sync_invoke_20
    {
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18 , Arg19 && arg19,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 ) , std::forward<Arg19>( arg19 )).get(ec);
        }
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19>
        BOOST_FORCEINLINE static LocalResult call(
            boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
            naming::id_type const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18 , Arg19 && arg19,
            error_code& ec)
        {
            return hpx::async<action>(policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 ) , std::forward<Arg19>( arg19 ));
        }
    };
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 20>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(BOOST_SCOPED_ENUM(launch) policy, IdType const& id,
        Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18 , Arg19 && arg19, error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_20<local_result_type>::call(
                is_future_pred(), policy, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 ) , std::forward<Arg19>( arg19 ), ec);
    }
    template <typename IdType, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19>
    BOOST_FORCEINLINE typename boost::enable_if<
        boost::mpl::and_<
            boost::mpl::bool_<
                util::tuple_size<arguments_type>::value == 20>,
            boost::is_same<IdType, naming::id_type> >,
        local_result_type
    >::type
    operator()(IdType const& id, Arg0 && arg0 , Arg1 && arg1 , Arg2 && arg2 , Arg3 && arg3 , Arg4 && arg4 , Arg5 && arg5 , Arg6 && arg6 , Arg7 && arg7 , Arg8 && arg8 , Arg9 && arg9 , Arg10 && arg10 , Arg11 && arg11 , Arg12 && arg12 , Arg13 && arg13 , Arg14 && arg14 , Arg15 && arg15 , Arg16 && arg16 , Arg17 && arg17 , Arg18 && arg18 , Arg19 && arg19,
        error_code& ec = throws) const
    {
        return util::void_guard<local_result_type>(),
            sync_invoke_20<local_result_type>::call(
                is_future_pred(), launch::sync, id,
                std::forward<Arg0>( arg0 ) , std::forward<Arg1>( arg1 ) , std::forward<Arg2>( arg2 ) , std::forward<Arg3>( arg3 ) , std::forward<Arg4>( arg4 ) , std::forward<Arg5>( arg5 ) , std::forward<Arg6>( arg6 ) , std::forward<Arg7>( arg7 ) , std::forward<Arg8>( arg8 ) , std::forward<Arg9>( arg9 ) , std::forward<Arg10>( arg10 ) , std::forward<Arg11>( arg11 ) , std::forward<Arg12>( arg12 ) , std::forward<Arg13>( arg13 ) , std::forward<Arg14>( arg14 ) , std::forward<Arg15>( arg15 ) , std::forward<Arg16>( arg16 ) , std::forward<Arg17>( arg17 ) , std::forward<Arg18>( arg18 ) , std::forward<Arg19>( arg19 ), ec);
    }
