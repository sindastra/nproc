/**
 * nproc
 * Copyright (C) 2024 Sindastra. All rights reserved.
 * A simple program to determine the number of online processors
 *
 * The above copyright – and this – notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * @copyright © 2024 Sindastra
 * @author Sindastra
 * @date 2024-12-18
 * @since 2024-12-18
 * @link https://github.com/sindastra/nproc
 */

#include <stdio.h>
#include <unistd.h>

int numcpus;

int main(void) {
    numcpus = sysconf(_SC_NPROCESSORS_ONLN);
    printf("%d\n", numcpus);
    return 0;
}
