#include <stdio.h>

char buffer[128];

int main(int argc, char *argv[]) {
    FILE *fin, *fout;

    if(argc < 3) {
        printf("Faltan parametros\n");
        return -1;
    }

    fin = fopen(argv[1], "rb");
    fout = fopen(argv[2], "wb");

    while(1) {
      fgets(buffer, sizeof(buffer)/64, fin);
        if(feof(fin)) break;
        fputs(buffer, fout);
    }
}
