#include "CLI/CLI.hpp"
#include <iostream>

int main(int argc, char **argv) {
    CLI::App app{"App description"};

    // Add new options/flags here

    CLI11_PARSE(app, argc, argv);

    return 0;
}
