#include<stdio.h>
#include<string.h>

// void removeSpaces(char *str) {  
//     int count = 0; 
//     for (int i = 0; str[i]; i++) 
//         if (str[i] != ' ') 
//             str[count++] = str[i];
//     str[count] = '\0'; 
// }

int main() {
    char a[100],b[100],c[100],d[100];
    scanf(" %[^\n]%*c",a);
    int k = strlen(a);
    for(int i=0;i<k;i=i+2) {
        if(a[i-1]==' ' || a[i]==' ') 
            i = i+1;
        if(a[i]>119) a[i] = a[i]-26;
        a[i] = a[i]+3;
    }
    int m=0,count=0;
    a[k]=' ';
    for(int i=0;i<=k;i++) {
        if(a[i]==' ') {
            for(int j=i-1;j>=count;j--){
                b[m++]=a[j];
            }
             b[m++] = ' ';
             count = i+1;
        }
    }
    printf(" %s\n",a);
    printf(" %s\n",b);

    scanf(" %[^\n]%*c",c);

    int clen = strlen(c),n=0,count1=0;
    c[clen] = ' ';
    for(int i=0;i<=clen;i++) {
        if(c[i]==' ') {
            for(int j=i-1;j>=count1;j--) {
                d[n++]=c[j];
            }
            d[n++]=' ';
            count1 = i+1;
        }
    }
    printf(" %s\n",d);
     for(int i=0;i<clen;i=i+2) {
        if(d[i-1]==' ' || d[i]==' ') 
            i = i+1;
        if(d[i]<100) d[i] = d[i]+26;
        d[i] = d[i]-3;
    }
    printf(" %s\n",d);
    return 0;
}   