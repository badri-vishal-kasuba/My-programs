#include<stdio.h>

int main() {
    int n;
    scanf(" %d",&n);
    int a[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf(" %d",&a[i][j]);
        }
    }
    int m = 999,f=-999,c,d,e;
    for(int i=0;i<n;i++) {
        m=999,f=-999;
        for(int j=0;j<n;j++) {
            if(m>a[i][j]) { m=a[i][j]; c = i;d = j;}
        }
        for(int k=0;k<n;k++) {
            if(f<a[k][d]) { f = a[k][d]; e = k;}
        }
        if(m==f && c==e) { printf(" %d\n",m);}
        else { printf("no num in %d row\n",i);}
    }
    return 0;
}