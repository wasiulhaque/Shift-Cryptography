#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void main()
{
    int k,i;
    char a[1000],p;
    printf("\tWelcome to Shift Cryptography\n");
    printf("Enter the key: ");
    scanf("%d",&k);
    printf("Enter the message you want to encrypt:\n");
    fflush(stdin);
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
            p=a[i]-'A';
            p=(p+k)%26;
            printf("%c",p+'A');
        }
        else if(a[i]>='a' && a[i]<='z'){
            p=a[i]-'a';
            p=(p+k)%26;
            printf("%c",p+'a');
        }
        else
            printf("%c",a[i]);

    }

    printf("\n");
    return 0;
}
