#include <stdio.h>

struct book
{
        char title[10];
        char author[10];
        unsigned int number_of_pages;
        int publishing_year;
};

struct library
{
        book books[10];
        unsigned int number_of_books;
};

library m;

int main()
{
        m.number_of_books = 0;
        book b1 = { "My title3", "Tolk", 45, 96 };
        book b2 = { "My title2", "Tolk", 4, 196 };
        m.books[m.number_of_books] = b1;
        m.number_of_books++;
        m.books[m.number_of_books] = b2;
        m.number_of_books++;
        for (int i = 0; i < m.number_of_books; ++i) {
                printf("book[%d] = { title: %s, author: %s }\n",
                       i, m.books[i].title, m.books[i].author);
        }
        library* f = &m;
        for (int i = 0; i < f->number_of_books; ++i) {
                printf("f: book[%d] = { title: %s, author: %s }\n",
                       i, f->books[i].title, f->books[i].author);
        }
        return 0;
}


