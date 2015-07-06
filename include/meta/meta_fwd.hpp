/// \file meta_fwd.hpp Forward declarations
//
// Meta library
//
//  Copyright Eric Niebler 2014-2015
//
//  Use, modification and distribution is subject to the
//  Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
// Project home: https://github.com/ericniebler/meta
//

#ifndef META_FWD_HPP
#define META_FWD_HPP

#if defined(_MSC_VER) && (_MSC_VER<1900)
#define META_NO_INLINE_NAMESPACES
#define META_NO_CONSTEXPR
#endif

#ifdef META_NO_CONSTEXPR
#define META_CONSTEXPR
#define META_CONSTEXPR_CONST const
#else
#define META_CONSTEXPR constexpr
#define META_CONSTEXPR_CONST constexpr
#endif

namespace meta
{
#ifndef META_NO_INLINE_NAMESPACES
    inline
#endif
    namespace v1
    {
        template <typename T, T...>
        struct integer_sequence;

        template <typename... Ts>
        struct list;

        template <typename T>
        struct id;

        template <template <typename...> class>
        struct quote;

        template <typename T, template <T...> class F>
        struct quote_i;

        template <typename... Fs>
        struct compose;

        template <typename T>
        struct always;

        template <template <typename...> class C, typename... Ts>
        struct defer;

        template <typename T, template <T...> class C, T... Is>
        struct defer_i;

        namespace extension
        {
            template <typename F, typename List>
            struct apply_list;
        }

    } // inline namespace v1
#ifdef META_NO_INLINE_NAMESPACES
    using namespace v1;
#endif
} // namespace meta

#endif
