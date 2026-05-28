#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;

    FILE* fp_src = fopen(argv[1], "r");
    FILE* fp_dst = fopen(argv[2], "w");

    char ch = fgetc(fp_src);
    while (ch != EOF) {
        fputc(ch, fp_dst);
        ch = fgetc(fp_src);
    }

    fclose(fp_src);
    fclose(fp_dst);
}
