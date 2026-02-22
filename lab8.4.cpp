#include <stdio.h>

void sortDesc(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1-i;j++) {
            if(a[j] < a[j+1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}

void best3_sol2(int score[], int size, int best[]) {
    sortDesc(score,size);

    for(int i=0;i<3;i++) {
        best[i] = score[i];
    }
}

int main() {
    int score[4] = {70,85,60,90};
    int best[3];

    best3_sol2(score,4,best);

    printf("Best 3 scores: ");
    for(int i=0;i<3;i++)
        printf("%d ",best[i]);

    return 0;
}
