#include <stdio.h>
#include <string>

void debug_print(std::string nmespce, std::string text) {
    printf("[%s] %s\n", nmespce, text);
}
