#include <stdio.h>
#include <stdlib.h>

int main() {
        char fileName[128];
        FILE *fp;

        printf("�t�@�C��������͂��Ăق����ɂ�");
        scanf("%s" , fileName);

        fp = fopen(fileName , "r");
        if (fp == NULL) {
                printf("�t�@�C�����J���Ȃ������ɂ�");
                exit (1);
        }
        printf("�t�@�C�����I�[�v���ł����ɂ�");

        fclose(fp);
        return 0;
}