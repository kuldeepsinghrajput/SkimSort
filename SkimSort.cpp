#include <iostream>
#include<stdio.h>
using namespace::std;
#define zero(a) a!=~a
#define log(k,l) {register int j=(l);if((j-=(k=1))>-1)while(j>>=1)++k;else k=0;}
#define range(val) ((void*)(val)<range.start || (void*)(val)>range.end)
#define mark_end  freeHeap(base,bend);return 1

struct group
{
    struct group** start;
    struct group** end;
}range;
int* vat( register struct group** val)
{ //proof verification has been done

    int j = 0;

    while (range(val) && range(*val))val = (*val)->start;
    return range(val)?(int*)*val:(int*)val;
}
void freeHeap(struct group** base, struct group** end)
{
    struct group** temp ;

    if (!range(base))return;
    temp=base--;
    while (++base <= end)
    {
        if (range(*base)) { freeHeap((*base)->start, (*base)->end); cout << "\ndeleting  group val" << *vat(base); free(*base); }

    }
    free(temp);
 }






int SkimSort(int* array, int size)
{
    
    struct group** base, ** bend,**breakPoint = NULL;
    
    {  if ((bend = base = (struct group**)malloc(sizeof(struct group*) * size)) == NULL) return -2;
    struct group start = { (struct group**)base,(struct group**)bend };
    if (size < 2)return 0;
    {
        int* as = array, * ae = (array + size - 1);
        range.start = (struct group**)as;
        range.end = (struct group**)ae;
        int* sta, * end;
        struct group* temp;
        end = as - 1;
        int j = 0;
        while (as < ae)
        {
            cout << endl << ++j << " th try\n";
            sta = as;
            while (as < ae && *++end <= *++as)cout << *end << "\t";
            cout << "\n";
            if (sta == end && ae != as) { *bend++ = (struct group*)sta; cout << "breaked at " << j << " For value : " << *sta << " for *bend :" << *bend << endl; }
            else if ((temp = *bend = (struct group*)malloc(sizeof(struct group))) != NULL)
            {
                cout << " \tallocated " << bend;
                temp->start = (struct group**)sta;
                if (as == ae)
                {
                    if (*end > *as)
                    {
                        temp->end = (struct group**)end;

                        *++bend = (struct group*)as;
                    }
                    else
                        temp->end = (struct group**)as;

                    break;
                }
                else temp->end = (struct group**)end;

                breakPoint == NULL ? breakPoint = bend++ : ++bend;
            }


        }
    }
    }


    {
        struct group** temp=base-1;

        while (++base <= bend)cout << "\n vat(base)" << *vat(base);
    }

    mark_end;

 
    
}

int main()
{
 
    int* array;

    int size = rand() % 15 + 1;
  
    int* ar = array=(int*)malloc(sizeof(int)*size), *ae = ar + size;
    int sz = size;
    while (sz--)*array++ = rand()%20000;

    
 SkimSort(ar--, size);



while (++ar < ae)cout <<endl<<*ar;





return 0;

}

