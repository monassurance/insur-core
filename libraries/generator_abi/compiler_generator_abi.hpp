#pragma once
#include <cstdint>
#include <softfloat.hpp>

extern "C" {
   __int128 ___fixsfti(uint32_t);
   __int128 ___fixdfti(uint64_t);
   unsigned __int128 ___fixunssfti(uint32_t);
   unsigned __int128 ___fixunsdfti(uint64_t);
}
