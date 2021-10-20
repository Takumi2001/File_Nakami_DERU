#include <stdio.h>
#include <stdlib.h>

int main() {
        char fileName[128];
        FILE *fp;

        printf("ファイル名を入力してほしいにょ");
        scanf("%s" , fileName);

        fp = fopen(fileName , "r");
        if (fp == NULL) {
                printf("ファイルが開けなかったにょ");
                exit (1);
        }
        printf("ファイルをオープンできたにょ");

        fclose(fp);
        return 0;
}