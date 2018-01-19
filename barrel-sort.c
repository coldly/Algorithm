#include<stdio.h>
int main() {
        char s[1001];
        int t;
        for(int i = 0; i < 1001; i++) {
                s[i] = 0;
        }
        for(int i = 0; i < 5; i++) {
                scanf("%d", &t);
                s[t]++;
        }
        for(int i = 1000; i >= 0; i--) {
                for(int j = 1; j <= s[i]; j++)
                printf("%d ", i);
        }
}
