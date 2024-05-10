#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *file_path = "/Volumes/Suite/users/pat/test/test2/../..";
    int result = rmdir(file_path);
    printf("rmdir result: %i\n", result);
}