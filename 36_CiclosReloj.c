#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static inline uint64_t rdtsc() {
    uint32_t lo, hi;
    __asm__ volatile("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) | lo;
}

int main() {
    const char* command = "/usr/lib/libreoffice/program/soffice.bin";
    uint64_t start = rdtsc();
    system(command);
    uint64_t end = rdtsc();
    uint64_t cycles = end - start;
    printf("Ciclos de reloj utilizados: %lu\n", cycles);

    system("perf stat -e cache-misses,cache-references ./program");

    return 0;
}