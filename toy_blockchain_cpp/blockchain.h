#ifndef __BLOCK_CHAIN_H
#define __BLOCK_CHAIN_H

#include "block.h"

// Blockchain class definition
class BlockChain {
public:
    std::vector<Block*> blocks;

    // Method to add a new block to the blockchain
    void AddBlock(const std::string &data);

    // Destructor to clean up dynamically allocated memory
    ~BlockChain();
};

#endif // __BLOCK_CHAIN_H