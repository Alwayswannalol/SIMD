#include "addition.h"

namespace simd
{
    void add(int size, const float *a, const float *b, float *res)
    {
        __m128 vec_a = _mm_load_ps(a);
        __m128 vec_b = _mm_load_ps(b);
        __m128 vec_res = _mm_add_ps(vec_a, vec_b);
        _mm_store_ps(res, vec_res);
    }
}
