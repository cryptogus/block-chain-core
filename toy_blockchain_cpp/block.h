#ifndef __BLOCK_H
#define __BLOCK_H

#include <cstdint>
#include <vector>

// block
struct Block {
    int64_t Timestamp;
    std::vector<uint8_t> *Data;
    std::vector<uint8_t> *PrevBlockHash;
    std::vector<uint8_t> *Hash;
};


#endif // __BLOCK_H