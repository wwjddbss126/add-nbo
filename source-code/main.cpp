#include <stdint.h> // for uint32_t
#include <stdio.h> // for fopen, printf
#include <netinet/in.h> // for ntohl

uint32_t add_nbo(char* tmp){ // file open-read-close + ntohl

    FILE *fp = fopen(tmp, "r");

    uint32_t n;
    fread(&n, sizeof(n), 1, fp);
    fclose(fp);

    return ntohl(n);
}


int main(int argc, char *argv[]){

    if(argc != 3){
        printf("Execution Error! \nUsage: ./add_nbo <file1> <file2> \n");
        return -1;
    }

    uint32_t n1 = add_nbo(argv[1]);
    uint32_t n2 = add_nbo(argv[2]);

    // output format
    printf("%d(0x%2x) + %d(0x%2x) = %d(0x%2x) \n", n1, n1, n2, n2, n1+n2, n1+n2);

    return 0;
}
