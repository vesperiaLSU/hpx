#define _CRT_SECURE_NO_WARNINGS

#include "PrefixScan.h"
#include <vector>
#include <thread>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>

#include <hpx/hpx_fwd.hpp>
#include <hpx/util/move.hpp>
#include <hpx/util/unwrapped.hpp>

#include <hpx/parallel/util/loop.hpp>
#include <hpx/hpx_main.hpp>
#include <hpx/lcos/wait_all.hpp>
#include <hpx/parallel/util/partitioner.hpp>
#include <hpx/lcos/async.hpp>
#include <hpx/lcos/future.hpp>
#include <hpx/async.hpp>
#include <hpx/hpx.hpp>

#include <hpx/parallel/config/inline_namespace.hpp>
#include <hpx/parallel/execution_policy.hpp>
#include <hpx/parallel/algorithms/detail/algorithm_result.hpp>
#include <hpx/parallel/algorithms/detail/dispatch.hpp>

#include <boost/iterator.hpp>
#include <boost/static_assert.hpp>
#include <boost/utility/enable_if.hpp>
#include <boost/type_traits/is_base_of.hpp>

using namespace std;

//unsigned int create_seed(){
//    unsigned int seed = (unsigned int)time(0);
//    srand(seed);
//    std::cout << "Seed generated for this random input: " << seed << endl;
//    return seed;
//}
//
//void print_results(const vector<vector<double>>& vec_input){
//    for (size_t threadNum = 0; threadNum < vec_input.size(); ++threadNum)
//    {
//        std::for_each(begin(vec_input[threadNum]), end(vec_input[threadNum]), [](double d){
//            std::cout << d << " ";
//        });
//        std::cout << endl;
//    }
//    std::cout << endl;
//}

int main(int argc, char* argv[]){
    //size_t data_size = 0;
    //vector<double> input;
    //create_seed();
    //std::cout << "Enter the data size to process" << endl;
    //std::cin >> data_size;
    //input.reserve(data_size);
    //input_generation(data_size, back_inserter(input));


    vector<double> input = { 1, 2, 3, 4, 5 };
    double init_value = 0;

    using namespace hpx::parallel;
    detail::algorithm_result<parallel_execution_policy, double>::type result =
        util::partitioner<parallel_execution_policy, vector<double>::iterator, double, vector<double>>::call(
        par, begin(input), input.size(), 
        [&init_value](vector<double>::iterator part_begin, size_t part_size)->vector<double>
        {
            vector<double> ret;
            ret.reserve(part_size);
            util::loop_n(part_begin, part_size, [&init_value, &part_begin, &ret](vector<double>::iterator const& curr)
            {
                init_value = init_value + *curr;
                *back_inserter(ret) = init_value;
            });
            return ret;
        },
        hpx::util::unwrapped([](vector<vector<double>>&& results) ->double{
            vector<double> intermediate_input, intermediate_output;
            std::for_each(begin(results), end(results), [&intermediate_input](vector<double> const& v){
                intermediate_input.push_back(v.back());
            });
            inclusive_scan(begin(intermediate_input), end(intermediate_input), back_inserter(intermediate_output));
            std::reverse(begin(intermediate_output), end(intermediate_output));
            std::for_each(begin(results)+1, end(results), [&intermediate_output](vector<double>& v){
                std::for_each(begin(v), end(v), [&intermediate_output](double& d){
                    d += intermediate_output.back();
                });
                intermediate_output.pop_back();
            });
            return results.back().back();
    }));
    std::cout<<result<<endl;

    //vector<hpx::future<int>> vec_f, vec_f_continue;                        //stores vector of future from first state
    //vector<vector<double>> vec_ret;                                     //stores vector of final results
    //vector<double> input, intermediate_input, intermediate_output;
    //size_t data_size = 0;

    ////Input Generation....//
    //create_seed();
    //std::cout << "Enter the data size to process" << endl;
    //std::cin >> data_size;
    //input.reserve(data_size);
    //input_generation(data_size, back_inserter(input));

    ////Parallel Execution..// hardware_thread > 1;
    //clock_t start = clock();
    //int hardware_threads = std::thread::hardware_concurrency();
    //hardware_threads = 128;
    //vector<double>::size_type partition_size = input.size() / hardware_threads;
    ////pre-generate output vectors//
    //intermediate_input.resize(hardware_threads);
    //vec_ret.resize(hardware_threads);
    //
    //for (auto threadNum = 0; threadNum < hardware_threads - 1; ++threadNum)
    //{
    //    hpx::future<int> f = hpx::async(hpx::launch::async, [&vec_ret, &input, &intermediate_input, threadNum, partition_size]()->int{
    //        vector<double> sequential_ret;
    //        sequential_ret.reserve(partition_size);
            //inclusive_scan(begin(input) + threadNum*partition_size, begin(input) + (threadNum + 1)*partition_size, back_inserter(sequential_ret));
    //        intermediate_input[threadNum] = sequential_ret.back();
    //        vec_ret[threadNum] = boost::move(sequential_ret);
    //        return 0;
    //    });
    //    vec_f.push_back(std::move(f));
    //}

    //////Main Thread Execution..//
    //vector<double> sequential_main;
    //sequential_main.reserve(partition_size);
    //inclusive_scan(begin(input) + (hardware_threads - 1)*partition_size, end(input), back_inserter(sequential_main));
    //intermediate_input[hardware_threads - 1] = sequential_main.back();
    //vec_ret[hardware_threads - 1] = boost::move(sequential_main);

    ////Parallel Execution..// hardware_thread > 1;
    //for (auto threadNum = 0; threadNum < hardware_threads - 1; ++threadNum){
    //    hpx::future<int> f2 = vec_f[threadNum].then([&intermediate_input, &intermediate_output, &vec_ret, threadNum](hpx::future<int>&& f){
    //        if (threadNum != 0)
    //        {
    //            /*this following intermediate step is moved to here from main thread because
    //            it has to wait for all previous thread to finish before getting invoked.*/
    //            inclusive_scan(begin(intermediate_input), end(intermediate_input), back_inserter(intermediate_output));
    //            std::for_each(begin(vec_ret[threadNum]), end(vec_ret[threadNum]), [&](double& d){
    //                d += intermediate_output[threadNum - 1];
    //            });
    //        }
    //        return 0;
    //    });
    //    vec_f_continue.push_back(boost::move(f2));
    //}

    //////Main Thread Execution..////
    //inclusive_scan(begin(intermediate_input), end(intermediate_input), back_inserter(intermediate_output));
    //std::for_each(begin(vec_ret[hardware_threads - 1]), end(vec_ret[hardware_threads - 1]), [&](double& d)->void{
    //    d += intermediate_output[hardware_threads - 2];
    //});

    ////It takes a really long time to wait for all the future to return, any solution to improve that?
    //hpx::wait_all(vec_f_continue);

    //double duration = ((clock() - start) / (double)CLOCKS_PER_SEC) * 1000;
    //std::cout << intermediate_output.back() << endl;
    //std::cout << "Parallel Execution completed! It took " << duration << " milliseconds!" << endl;

    ////print_results(vec_ret);
    return 0;
}


