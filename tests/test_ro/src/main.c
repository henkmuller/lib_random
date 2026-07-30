// Copyright 2025 XMOS LIMITED.
// This Software is subject to the terms of the XMOS Public Licence: Version 1.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <xcore/parallel.h>
#include <xcore/hwtimer.h>
#include <xcore/chanend.h>
#include <xcore/channel_streaming.h>
#include "random.h"

#define N 128000

unsigned int data[N];

int main(int argc, char *argv[]) {
    random_ro_init();
    for(int i = 0; i < N; i++) {
        int j = 0;
        unsigned int bits = 0;
        do {
            int bit = random_ro_get_bit();
            if (bit >= 0) {
                bits = bits << 1;
                j++;
            }
        } while (j != 32);
        data[i] = bits;
    }
    FILE *fd = fopen(argv[1], "wb");
    fwrite(data, sizeof(data), 1, fd);
    fclose(fd);
    return 0;
}
