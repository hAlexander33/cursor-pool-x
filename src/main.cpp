// main.cpp — entry point. Wires config and subsystems together.

#include "cursorpoolx/settings.h"
#include "cursorpoolx/pool.h"
#include "cursorpoolx/quota.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cursorpoolx::Settings settings = cursorpoolx::Settings::load_default();
    cursorpoolx::Pool pool(settings.store_path);
    cursorpoolx::Quota quota(settings.store_path);
    std::fprintf(stderr, "[cursor-pool-x] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
