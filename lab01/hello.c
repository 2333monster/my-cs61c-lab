#include <stdio.h>

int main(int argc, char *argv[]) {
    void call();
    int i;
    int count = 0;
    int *p = &count;

    for (i = 0; i < 10; i++) {
        (*p)++; // Do you understand this line of code and all the other permutations of the operators? ;)
    }
    // call();
    printf("Thanks for waddling through this program. Have a nice day.");
    return 0;
}


// void
// call(){
//     printf("dfdfdf\n");
//     printf("dfhhllk\n");
// }