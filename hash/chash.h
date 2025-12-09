#pragma once

#include <stdint.h>

#define HASH_RATE (8)

// Knuth's multiplication hashing algorithm
uint16_t hash_knuth_mul16(uint16_t key);