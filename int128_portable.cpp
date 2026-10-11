#include "int128_portable.h"
#include <algorithm>

std::string uint128_to_string(uint128_t val) {
    if (val == 0) return "0";
    
    std::string str;
    while (val > 0) {
        str += std::to_string(static_cast<int>(val % 10));
        val /= 10;
    }
    std::reverse(str.begin(), str.end());
    return str;
}

std::string int128_to_string(int128_t val) {
    if (val == 0) return "0";
    
    std::string str;
    bool is_negative = false;
    
    if (val < 0) {
        is_negative = true;
        uint128_t u_val = -static_cast<uint128_t>(val);
        str = uint128_to_string(u_val);
    } else {
        str = uint128_to_string(static_cast<uint128_t>(val));
    }
    
    if (is_negative) {
        str.insert(str.begin(), '-');
    }
    return str;
}
