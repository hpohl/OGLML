#ifndef OGLML_VEC_INFO_HPP
#define OGLML_VEC_INFO_HPP

#include <cstddef>

#include <oglml/helpers/compilerinfo.hpp>

namespace oglml {
    namespace vec {
        namespace detail {

            // Template to collect Vec informations
            template <std::size_t tn, typename tT, class tSP>
            struct VecInfo {
                oglml_constexpr static std::size_t n = tn;
                typedef tT T;
                typedef tSP SP;

                // Prepare information
                typedef typename SP::template Container<n, T> Container;
                typedef typename Container::ReturnT ReturnT;
                typedef typename Container::ConstReturnT ConstReturnT;
            };

        } // namespace detail
    } // namespace vec
} // namespace oglml

#endif // OGLML_VEC_INFO_HPP
