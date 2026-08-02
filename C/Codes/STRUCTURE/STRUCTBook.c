#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book BSGrewal;
    
        BSGrewal.name[20] = "BS Grewal";
        BSGrewal.price = 149.5;
        BSGrewal.pages = 150;
    
    return 0;
}