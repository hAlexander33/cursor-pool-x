// pool.cpp — part of cursor-pool-x.

#include "cursorpoolx/pool.h"

#include <cstdio>

namespace cursorpoolx {

Pool::Pool(const std::string& config_path)
    : config_path_(config_path) {}

void Pool::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Pool::run() {
    if (verbose_) std::fprintf(stderr, "[cursor-pool-x] pool: run\n");
    // core logic lives here
    return true;
}

}  // namespace cursorpoolx
