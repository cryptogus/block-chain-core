#include <iostream>
#include "blockchain.h"

// Helper function to convert vector<uint8_t> to hex string
std::string toHexString(const std::vector<uint8_t> &v) {
    std::ostringstream oss;
    for (const auto &byte : v) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte);
    }
    return oss.str();
}

int main() {
    BlockChain bc;

    bc.AddBlock("Send 1 BTC to Ivan");
    bc.AddBlock("Send 2 more BTC to Ivan");

    for (const Block *block : bc.blocks) {
        std::cout << "Prev. hash: " << toHexString(*block->PrevBlockHash) << std::endl;
        std::cout << "Data: " << toHexString(*block->Data) << std::endl;
        std::cout << "Hash: " << toHexString(*block->Hash) << std::endl;
        std::cout << std::endl;
    }

    return 0;

    return 0;
}