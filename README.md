# portable-int128-cpp
my implementation of int128_t that doesnt break on MSVC and 32-bit systems cause cstdint goes up to 64bit


## test

```Cpp
#include <cstdio>
#include "int128_portable.h"

int main() {
    // Define a big ass 128-bit unsigned int 
    uint128_t big_num = 12345678901234567890ULL;
    big_num *= 2; // Math works 

    // Print it safely using printf
    printf("My huge number is: %s\n", uint128_to_string(big_num).c_str());

    return 0;
}
```
