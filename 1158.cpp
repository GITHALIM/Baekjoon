#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    
    queue<int> q;
    
    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    printf("<");
    while(q.size()!=1){
        for (int j = 0; j < k - 1; j++){
            q.push(q.front());
            q.pop();
        }
        printf("%d, ", q.front());
        q.pop();
    }
    printf("%d>\n", q.front());
    q.pop();
    
    return 0;
}
