#include<stdio.h>
#include<string.h>

void slice(char str[],int m,int n);
int main() {
    char str[100];
    printf("Enter the String : ");
    gets(str);
    int m,n;
    printf("Enter the values of m and n : \n");
    scanf("%d",&m);
    scanf("%d",&n);
    slice(str,m,n);


    return 0;
}
void slice(char str[],int m,int n) {
    char newStr[200];int k=0;
    for(int i=m;i<=n;i++) {
        newStr[k]=str[i];
        k++;
    }
    newStr[k]='\0';
    puts(newStr);
}
