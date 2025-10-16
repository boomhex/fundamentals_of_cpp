#include <iostream>
#include <fstream>
#include "lock/lock.h"

int main(int argc, char** argv)
{
    if (argc < 2) {
        std::cerr << "Usage: " << (argc ? argv[0] : "app") << " <file>\n";
        return 1;
    }
    const std::string dataPath = argv[1];

    // Acquire lock (prompt must only appear AFTER lock is held)
    Lock lk(dataPath);
    if (!lk.valid()) {
        std::cerr << "Could not lock: " << dataPath << "\n";
        return 2;
    }

    std::cout << "? " << std::flush;

    std::string line;
    if (!std::getline(std::cin, line))
        return 0;

    std::ofstream out(dataPath, std::ios::app);
    if (!out) {
        std::cerr << "Cannot open for append: " << dataPath << "\n";
        return 3;
    }
    out << line << '\n';
    return 0;
}