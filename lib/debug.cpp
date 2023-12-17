#include <stdio.h>

void DEBUG_print(std::string namespace, std::string text) {
    printf("[%s] %s\n", namespace, text);
}
