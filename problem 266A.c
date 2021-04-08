#include <stdio.h>
#include <string.h>
int main()
{
    int t = 0, l = 0,x=0;
    scanf("%d", &t);
    char str[t];

    scanf("%s", str);
    while(str[l]!='\0'){
        if(str[l]==str[l+1]){
            
            x++;
        }
        l++;
    }
    printf("%d\n",x);
}
