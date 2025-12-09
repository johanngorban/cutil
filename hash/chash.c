#include "chash.h"

uint16_t hash_knuth_mul16(uint16_t key) {
    uint32_t k = key;
    return (k * 2654435761U) >> (32 - HASH_RATE);
}