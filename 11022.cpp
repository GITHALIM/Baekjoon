#include <cstdio>
using namespace std;
int t, a, b;
int main(){
    scanf("%d", &t);
    for(int i = 1; i < t+1; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
    return 0;
}
