#include<stdio.h>

struct book
{
    char name[20];
    int price;
};


int main()
{
    typedef struct book BOOK;

    BOOK b= {"Life of Emran",500};

    printf("Book name :%s\n",b.name);
    printf("Book Price :%d\n",b.price);

    getch ();
}
