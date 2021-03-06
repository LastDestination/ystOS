#ifndef INCLUDE_COMMON_H_
#define INCLUDE_COMMON_H_
#include "types.h"

//Write a byte to port
void outb(uint16_t port, uint8_t value);

//Read a byte from port
uint8_t intb(uint16_t port);

//Read a word from port
uint16_t inw(uint16_t port);

#endif //INCLUDE_COMMON_H_