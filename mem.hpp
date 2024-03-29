#pragma once
#include <stdint.h>

bool mem_leak();
void print_mem_use();

void allocate(uint8_t*& pointer, uint8_t& length, uint8_t new_length);
void reallocate(uint8_t*& pointer, uint8_t& length, uint8_t new_length);
void deallocate(uint8_t*& pointer, uint8_t& length);