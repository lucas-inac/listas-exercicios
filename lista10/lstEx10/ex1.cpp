#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main() {

    count++;

    printf("%d ", count);

    if (count < 10) {
        return (main());
    }
    
    getchar();
    return 0;
}
