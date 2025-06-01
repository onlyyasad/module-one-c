#include <stdio.h>

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x;

    scanf("%d", &x);

    int result = x * x * x;

    printf("%d\n", result);

    return 0;
}
