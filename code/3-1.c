#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;

    FILE* fp = fopen(argv[1], "r");
    const char* target_str = argv[2];

    char dst_str[256];
    while (fgets(dst_str, sizeof(dst_str), fp) != NULL) {
        if (strstr(dst_str, target_str) != NULL) {
            printf("%s", dst_str);
        }
    }
    fclose(fp);
}
