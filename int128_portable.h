#ifndef INT128_PORTABLE_H
#define INT128_PORTABLE_H

#include <cstdint>
#include <string>

// 1. Cross-platform type definition with safe guard macros
#if defined(_MSC_VER) && !defined(__clang__)
    // MSVC (Windows native)
    #include <__msvc_int128.hpp>
    using uint128_t = std::_Unsigned128;
    using int128_t  = std::_Signed128;
#else
    // GCC / Clang / MinGW
    using uint128_t = __uint128_t;
    using int128_t  = __int128_t;
#endif

// 2. String conversion helpers for printf or std::cout
std::string uint128_to_string(uint128_t val);
std::string int128_to_string(int128_t val);

#endif // INT128_PORTABLE_H
