#ifndef __BLOCK_H
#define __BLOCK_H

#include <cstdint>

struct Block {
    int64_t Timestamp;
    int8_t *Data;
    int8_t *PrevBlockHash;
    int8_t *Hash;
};


#endif // __BLOCK_H