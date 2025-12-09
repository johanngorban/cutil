#pragma once

#include <stdint.h>

#define HASH_RATE (8)

// Knuth's multiplication hashing algorithm
uint16_t knuth_multiplicative_hash(uint16_t key);