#include "block.h"
#include <openssl/sha.h>

void Block::setHash(void) {
    // Convert Timestamp to string and then to byte array
    std::string timestamp_str = std::to_string(Timestamp);
    std::vector<uint8_t> timestamp(timestamp_str.begin(), timestamp_str.end());

    // Concatenate PrevBlockHash, Data, and timestamp
    std::vector<uint8_t> headers;
    headers.insert(headers.end(), PrevBlockHash->begin(), PrevBlockHash->end());
    headers.insert(headers.end(), Data->begin(), Data->end());
    headers.insert(headers.end(), timestamp.begin(), timestamp.end());
    
    // Compute SHA-256 hash
    uint8_t hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, headers.data(), headers.size());
    SHA256_Final(hash, &sha256);
    
    // Set the hash value
    Hash->assign(hash, hash + SHA256_DIGEST_LENGTH);
}

// Block constructor implementation
Block::Block(const std::string &data, const std::vector<uint8_t> *prevBlockHash) {
    Timestamp = std::time(nullptr);

    // Initialize Data vector
    Data = new std::vector<uint8_t>(data.begin(), data.end());

    // Initialize PrevBlockHash vector
    if (prevBlockHash) {
        PrevBlockHash = new std::vector<uint8_t>(*prevBlockHash);
    } else {
        PrevBlockHash = new std::vector<uint8_t>();
    }

    // Initialize Hash vector (empty for now, to be set by setHash)
    Hash = new std::vector<uint8_t>();

    // Set the hash for the new block
    setHash();
}