#include<stdio.h>
#include<math.h>

int main() {
    int a,b,k;
    scanf(" %d %d",&a,&b);
    for(int i=a;i<=b;i++) {
        if(i==1) { continue;}
        k=0;
        for(int j=1;j<=sqrt(i);j++) {
            if(i%j==0) { k=k+1;}
        }
        if(k==1) { printf(" %d",i);}
    }
    return 0;
}