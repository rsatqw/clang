#include <stdio.h>

int main(void)
{
    int max, input = 0;
    
    for (int k = 0; k < 4; k++) {
        scanf("%d", &input);
        if (max == 0) {
            max = input;
        }
        if (input > max) {
            max = input;
        }
    }
    printf("Max = %d", max);

    return 0;
}

