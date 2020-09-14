#include <cstdio>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int B, C;
    scanf("%d %d", &B, &C);
    
    long long ans = 0;
    for(int i = 0; i < N; i++)
    {
        A[i] -= B;
        ans++;
        if(A[i] > 0)
        {
            if(A[i]%C != 0)
            {
                ans += A[i]/C +1;
            }
            else
            {
                ans += A[i]/C;
            }
        }    
    }
    
    printf("%lld", ans);
    return 0;
}
