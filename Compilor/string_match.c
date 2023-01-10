#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[20-------------pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp];

    scanf("%99c", a);
    scanf("%19c", b);


    int a_len = strlen(a);
    int b_len = strlen(b);

    for (int i = 0; i < a_len - b_len; i++) {
        for (int j = 0; j < b_len; j++) {
            if (a[i+j] != b[j]) {
                break;
            }

            if (j == b_len - 1) {
                printf("Match is there");
                return 0;
            }
        }
    }

    printf("Match not found");
    return 0;
 }