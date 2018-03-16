#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        if (t == 0)
            printf("\n");
        int n;
        scanf("%d",&n);
        int *p = new int[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &p[i]);
        }
        sort(p, p+n);
        //qsort(p, n, sizeof(p[0]));
        for(int i = 0; i < n/2; i++){
            printf("%d ", p[i]);
        }
        printf("\n");
        for(int i = n/2; i < n; i++){
            printf("%d ", p[i]);
        }
        printf("\n");
    }
    return 0;
}
