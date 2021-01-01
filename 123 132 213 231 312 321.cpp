#include <stdio.h>
int a[10],b[10],n;
void dfs(int step){
    if (step==n+1){
        for (int i=1;i<=n;i++)
        printf("%d",a[i]);
        printf("\n");
        return;
    }
    for (int i=1;i<=n;i++){
        if (b[i]==0){
            a[step]=i;
            b[i]=1;
            dfs(step+1);
            b[i]=0;
        }
    }
    return;
}
int main(){
    scanf("%d",&n);
    dfs(1);
    return 0;
}
