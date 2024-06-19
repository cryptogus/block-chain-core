#ifndef __BLOCK_CHAIN_H
#define __BLOCK_CHAIN_H

#include "block"
#include <string>
#include <sstream>

class BlockChain {

public:
    Block block_;
    void setHash(void);
    Block *newBlock(string data ,int8_t *prevBlockHash );

}


#endif // __BLOCK_CHAIN_H