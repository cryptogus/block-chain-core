#ifndef __BLOCK_H
#define __BLOCK_H

#include <cstdint>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

struct Block {

    int64_t Timestamp;
    std::vector<uint8_t> *Data;
    std::vector<uint8_t> *PrevBlockHash;
    std::vector<uint8_t> *Hash;

    void setHash(void);

    Block(const std::string &data, const std::vector<uint8_t> *prevBlockHash);

}


#endif // __BLOCK_H