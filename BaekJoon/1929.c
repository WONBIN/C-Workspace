#include <stdio.h>

int arr[1000001]={0,};
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    //1로 initialization
    for(int i = 2; i <=n; i++){
        arr[i] = 1;
    }
    //소수가 아닌 거 싹 다 0으로 바꿈
    for(int i = 2; i <= n; i++){
        for(int j = i * 2; j <= n; j+=i){
            arr[j] = 0;
        }
    }
    // 그럼 1이라고 되어있는 번째의 idx는 생존한거임 그걸 출력
    for(int i = m; i <= n; i++){
        if(arr[i] == 1){
            printf("%d\n", i);
        }
    }
    
    return 0;
}