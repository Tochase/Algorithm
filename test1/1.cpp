#include <cstdio>
#include <cstring>

int main() {
    int t;
    int a[510];
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        memset(a, 0, sizeof a);
        int flag = 0;
        while(n--){
            int tmp;
            scanf("%d",&tmp);
            if (a[tmp] == 1){
                flag = 1;
            }
            else
                a[tmp] = 1;
        }
        if (flag == 1)
            printf("Yes\n");
        else
            printf("No\n");    
    }
    return 0;
}
