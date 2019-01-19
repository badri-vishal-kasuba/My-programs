#include<stdio.h>


int main() {
    int n;
    scanf(" %d",&n);
    int a[n][n];
    for(int i=0;i<n;i++) { for(int j=0;j<n;j++) { a[i][j]=0;}}
    int k = n/2,l;
    if(n%2==0) { l=k-1;}
    else { l = k;}
    int temp=1,h=1,i=1,y=0,c[2000],j,r=0;
    for(int i=1;i<=1000;i=i+1) {
        c[y++]=i;
        c[y++]=i;
    }
    while(i<=(n*n)) {
          h = c[r++];
        switch(temp) {
            case 1 : for( j=l;j<l+h;j++) { a[k][j]=i; i=i+1;  }  l=j; temp=2; break;
            case 2 :for( j=k;j>k-h;j--) { a[j][l]=i; i=i+1; } k=j;  temp = 3; break;
            case 3 : for( j=l;j>l-h;j--) { a[k][j]=i; i=i+1; } l=j; temp = 4; break;
            case 4 : for( j=k;j<k+h;j++) { a[j][l]=i; i=i+1; } k=j;  temp=1; break;
        }             
    }    
    for(int i=0;i<n;i++) {
         for(int j=0;j<n;j++) {
             printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}