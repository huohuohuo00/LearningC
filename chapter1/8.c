#include <stdio.h>
#include <stdint.h> // int64_t

// #define EXPRESSION 7 + 2147483647
#define EXPRESSION 2147483647 + 7LL

int main()
{
    // int64_t/uint64_t
    // INT32_MAX == 2147483647
    /*long long*/int64_t some_value = 2147483647 + 7LL;
    // => tmp = EXPRESSION
    // => tmp = tmp + 2147483647
    // => some_value = tmp

    // int32_t
    int32_t a, b;
    a = 10;
    b = 5;
    b = a + b;
    a = a * b;
    printf("%d %d\n", b, a);
    return 0;
}