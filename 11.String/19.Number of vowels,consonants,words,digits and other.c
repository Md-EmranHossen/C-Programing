#include<stdio.h>
int main()
{
    int i,vowel,consonent,digit,word,other;
    char A[100],ch;

    printf("Enter A String:\n");
    scanf("%[^\n]",&A);

    i=vowel=consonent=word=digit=other=0;

    while((ch=A[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

            vowel++;


        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))

            consonent++;


        else if(ch>='0' &&  ch<='9')

            digit++;


        else if(ch==' ')

            word++;


        else
            other++;

        i++;
    }

    word++;

    printf("Number of Vowels:%d\n",vowel);
    printf("Number of Consonent:%d\n",consonent);
    printf("Number of digit:%d\n",digit);
    printf("Number of Word:%d\n",word);
    printf("Number of Other:%d\n",other);

    return 0;

}
