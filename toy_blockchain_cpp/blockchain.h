#ifndef __BLOCK_H
#define __BLOCK_H

#include "block"

class BlockChain {

public:
    Block block_;
    void setHash(Block *b);
    Block *NewBlock(string data ,int8_t *prevBlockHash );

}


#endif // __BLOCK_H