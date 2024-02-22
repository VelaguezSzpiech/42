#include <unistd.h>
#include <stdio.h>

void checkletter(char *tofind, char *src) {
    int i = 0;
    int j = 0;
    int found = 0;
    int tofindlen = 0;

    while (tofind[i] != '\0') {
        tofindlen++;
        i++;
    }

    i = 0;
    while (src[i] != '\0') {
        // Reset j for each character in src
        j = 0;
        while (tofind[j] != '\0') {
            if (src[i] == tofind[j]) {
                found++;
            }
            j++;
        }
        i++;
    }

    // Check if all characters in "to find" were found
    if (found == tofindlen) {
        i = 0;
        while (tofind[i] != '\0') {
            write(1, &tofind[i], 1);
            i++;
        }
        write(1, "\n", 1);
    } else{
        printf("%d %d",tofindlen,found);
    }
    
    
}

int main(int ac, char **av) {
    if (ac == 3) {
        checkletter(av[1], av[2]);
    }
    return 0;
}
