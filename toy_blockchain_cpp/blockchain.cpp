#include "blockchain.h"

// BlockChain::AddBlock method implementation
void BlockChain::AddBlock(const std::string &data) {
    Block *prevBlock = blocks.back();
    Block *newBlock = new Block(data, prevBlock->Hash);
    blocks.push_back(newBlock);
}

// BlockChain destructor implementation (cleans up dynamically allocated memory)
BlockChain::~BlockChain() {
    for (Block *block : blocks) {
        delete block->Data;
        delete block->PrevBlockHash;
        delete block->Hash;
        delete block;
    }
}