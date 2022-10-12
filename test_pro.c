#define Max_dataset 1200
#define Max_n 100
#include<stdio.h>
int main(void){
    int n[Max_dataset];
    int sum_m;
    int ans_m[Max_dataset];
    int cnt = 0;
    int i,j,k;
    for(k = 0; k < Max_dataset; k++){
        sum_m = 0;
        scanf("%d",&n[k]);
        if(n[k] == 0){
            break;
        }
        int m[Max_n];
        int a[Max_n];
        int b[Max_n];
        for(i = 0; i < n[k]; i++){
            scanf("%d%d%d",&m[i],&a[i],&b[i]);
        }
        for(i = 0; i < n[k]; i++){
            sum_m = m[i];
            for(j = i + 1; j < n[k]; j++){
                if(((a[i] <= a[j]) && (b[i] > a[j])) == 1){
                    sum_m = sum_m + m[j];
                    if(sum_m > 150){
                        i = n[k];
                        ans_m[k] = 0;
                        
                    }
                }
            }
        }
        if(sum_m <= 150){
            ans_m[k] = 1;
        }
        cnt++;
    }
    for(i = 0; i < cnt; i++){
        if(ans_m[i] == 1){
            printf("OK\n");
        }
        else{
            printf("NG\n");
        }
    }
    return 0;
}