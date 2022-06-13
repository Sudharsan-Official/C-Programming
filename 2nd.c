/**************************
2.THE PROBLEM GIVEN HERE IS BASED UPON ASCII VALUE. BASICALLY, THIS IS A CASE IN SENSITIVE
PROGRAM.THE CODE DEVELOPED HERE GETS THE INPUT STRING. IT REMOVES THE DUPLICATE
CHARACTER IN THE STRING IRRESPECTIVE OF CASE. THAT IS IT DOESNOT DIFFERENTLOWER CASE
AND UPPERCASE. SO, IT PRINTS THE LOWER CASE OF A CHARACTER ONLY.
***************************/
#include <stdio.h>
#include<ctype.h>
int main()
{
    char s[100],temp=1,c='*';
    int i,j,k=0,n;
    printf("Enter the sentence:");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        s[i]=tolower(s[i]);
    }
    for(i=0;s[i];i++)
    {
        if(!(s[i]==c))
        {
            for(j=i+1;s[j];j++)
            {
                if(s[i]==s[j])
                s[j]=c;
            }
        }
    }
    for(i=0;s[i];i++)
    {
        s[i]=s[i+k];
        if(s[i]==c)
        {
            k++;
            i--;
        }
    }
    printf("expected output:");
    printf("%s",s);
    return 0;
}
