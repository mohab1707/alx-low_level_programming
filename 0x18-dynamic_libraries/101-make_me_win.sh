#!/bin/bash
echo "int rand() { return 6; }" > /tmp/rand.c
gcc -shared -o /tmp/rand.so /tmp/rand.c
LD_PRELOAD=/tmp/rand.so
