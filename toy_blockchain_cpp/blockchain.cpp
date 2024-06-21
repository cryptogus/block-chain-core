#include "blockchain.h"

void BlockChain::NewGenesisBlock(void) {
    Block *GenesisBlock = new Block("Genesis Block", nullptr);
    blocks.push_back(GenesisBlock);
}

// BlockChain::AddBlock method implementation
void BlockChain::AddBlock(const std::string &data) {
     // Check if blocks vector is empty
    if (blocks.empty()) {
        // Create the first block with no previous hash (genesis block)
        fprintf(stderr,"GenesisBlock\n");
    } else {
        // Get the previous block
        Block *prevBlock = blocks.back();
        
        // Create a new block with the hash of the previous block
        Block *newBlock = new Block(data, prevBlock->Hash);
        
        // Add the new block to the blockchain
        blocks.push_back(newBlock);
    }
}

// BlockChain destructor implementation (cleans up dynamically allocated memory)
BlockChain::~BlockChain() {
    for (Block *block : blocks) {
        delete block->Data;
        delete block->PrevBlockHash;
        delete block->Hash;
        delete block;
    }
    blocks.clear();
}