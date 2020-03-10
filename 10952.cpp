#include <cstdio>
using namespace std;
int a,b;
int main(){
    while(1){
        scanf("%d %d", &a, &b);
        if(a==0 && b==0)    return 0;
        printf("%d\n", a+b);
    }
}
