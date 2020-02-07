#!/usr/bin/env bash
gcc -shared -fPIC -o random.so random.c

gcc random_test.c -o random_test
