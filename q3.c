#include<stdio.h>
#include<math.h>

int main() {
    int n,k,m=0,i=2,l;
    scanf(" %d",&n);
    int prime[n*n],num = n*n;
    int a[n][n];
    for(int i=0;i<n;i++) { for(int j=0;j<n;j++) { a[i][j]=0;}}
    while (num>0) {
         k=0;
        for(int j=1;j<=sqrt(i);j++) {
            if(i%j==0) {k=k+1;}
        } 
        if(k==1) { prime[m++]=i;   num = num-1;}  
        i++;
    }
     k = n/2;
    if(n%2==0) { l=k-1;}
    else { l = k;}
    int temp=1,h=1,y=0,c[2000],r=0;
    i=1;
    for(int i=1;i<=1000;i=i+1) {
        c[y++]=i;
        c[y++]=i;
    } 
    int x=0;
    while(i<=(n*n)) {
        int j;
          h = c[r++];
        switch(temp) {
            case 1 : for( j=l;j<l+h;j++) { a[k][j]=prime[x++]; i=i+1;  }  l=j; temp=2; break;
            case 2 :for( j=k;j>k-h;j--) { a[j][l]=prime[x++]; i=i+1; } k=j;  temp = 3; break;
            case 3 : for( j=l;j>l-h;j--) { a[k][j]=prime[x++]; i=i+1; } l=j; temp = 4; break;
            case 4 : for( j=k;j<k+h;j++) { a[j][l]=prime[x++]; i=i+1; } k=j;  temp=1; break;
        }           
    }   
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}