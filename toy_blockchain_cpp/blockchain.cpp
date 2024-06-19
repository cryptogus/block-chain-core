#include "blockchain.h"

void BlockChain::setHash(void) {
    // Convert Timestamp to string and then to byte array
    std::string timestamp_str = std::to_string(block_.Timestamp);
    std::vector<uint8_t> timestamp(timestamp_str.begin(), timestamp_str.end());

    /*
    #include <iomanip>
#include <openssl/sha.h>
    // Concatenate PrevBlockHash, Data, and timestamp
        std::vector<unsigned char> headers;
        headers.insert(headers.end(), PrevBlockHash.begin(), PrevBlockHash.end());
        headers.insert(headers.end(), Data.begin(), Data.end());
        headers.insert(headers.end(), timestamp.begin(), timestamp.end());

        // Compute SHA-256 hash
        unsigned char hash[SHA256_DIGEST_LENGTH];
        SHA256_CTX sha256;
        SHA256_Init(&sha256);
        SHA256_Update(&sha256, headers.data(), headers.size());
        SHA256_Final(hash, &sha256);

        // Set the hash value
        Hash.assign(hash, hash + SHA256_DIGEST_LENGTH);
    */
}
