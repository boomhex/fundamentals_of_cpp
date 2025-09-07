#include <iostream>

namespace {                             // anonymous name space

char const rawStringLiteral[] =         // define the Raw String Literal
R"delimiter(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)delimiter";

}                                       // namespace ends

int main(int argc, char* argv[])
{

    std::cout << rawStringLiteral;      // print raw string literal to stream.

}
