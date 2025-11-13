#include  <stdio.h>
#define max 100

int stringmatch ( char[],char[],char[],char[] );



int main(){
    char s[max]={0},p[max]={0},r[max]={0},final[max]={0};
    int found;
    printf("enter the sourse string\n");
    gets(s);
    printf("enter the pattern string\n");
    gets(p);
    printf("enter the replace string\n");
    gets(r);
    found = stringmatch(s,p,r,final);
    if (found == 1) {
    printf("the final string is :");
    puts(final);
    }
    else {
    printf("string not found!!");
    }
    return 0;
    
}

int stringmatch(char s[],char p[],char r[],char f[]){
    int i,j,m,k,t;
    int found = 0;
    i=j=m=t=0;
    while(s[i]!= '\0')
        {
            if(s[m++] == p[j++])
                {
                    if(p[j] == '\0')
                        {
                            for(k=0;r[k]!='\0';k++,t++)
                            f[t]=r[k];
                            j=0;
                            i=m;
                            found = 1;
                        }
                }
            else {
                f[t++] = s[i++];
                m=i;
                j=0;
               found = 1;
                }
        }
        return found;
    }

