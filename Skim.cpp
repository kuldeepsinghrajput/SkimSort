#include<iostream>
#define ln cout<<"\n at line "<<__LINE__<<":  "; 
#define range(val)  ((void*)val<(void*)range.start||(void*)val>(void*)range.end)
#define lenof(u,v) (v-u+1)
#define min (1<<(sizeof(1)*8-1))
#define memret { freeHeap(); return -2; }
#define create_node { int insz = lenof(sta, end);if ((temp = (*bend)->start = (struct group**)malloc(sizeof(struct group*) * insz)) == NULL) memret   *temp =*sta; while(--insz)*++temp = *++sta;(*bend)->end = temp; }
using namespace::std;
struct group
{
    struct group** start, ** end;
}range;

void pnode(struct group** val) 
{
    if (!range(val))cout << "integer value" << val;
    else if (!range(*val)) cout << " struct array  :" << val << " holds value: " << *val;
    else cout << " struct array  :" << val << " holds structure " << *val<<" holds start: "<<(*val)->end<<" and holds end"<<(*val)->end;
}

int test;
int* vat(struct group** val)
{
    while (range(val) && range(*val)) { pnode(val); val = (*val)->start; }
    return range(val) ? (int*)*val : (int*)val;
}
void freeHeap()
{
    ;
}

int SkimSort(int* array, int sz)
{
    struct group** base, ** bend, ** breakPoint = NULL;
    int size = sz;
    {
        if ((bend = base = (struct group**)malloc(sizeof(struct group*) * sz)) == NULL) return -2;
        if (size < 2)return 0;

        int* as, * ae, * sta, * end;
        range.start = (struct group**)(as = array=(int*)realloc(array,sizeof(int)*++sz));
        range.end = (struct group**)(ae = (array + sz-1));
        struct group* temp;
        end = as - 1;
        *ae = min;
        --bend;
        while ((sta=as) < ae) 
        {
            while (*++as >=*++end);
            if (sta == end)*++bend = (struct group*)sta;
            else if ((temp = *(breakPoint =++bend) = (struct group*)malloc(sizeof(struct group))) != NULL) { temp->start = (struct group**)sta; temp->end = (struct group**)end; break; }
            else memret
        }
        while ((sta = as) < ae)
        {   while (*++as >= *++end);
        if (sta == end)*++bend = (struct group*)sta;
        else if ((temp = *++bend = (struct group*)malloc(sizeof(struct group))) != NULL)temp->start = (struct group**)sta, temp->end = (struct group**)end;
        else memret
        }
        *++bend =(struct group*)ae;        

    }

    //ok till here
   
    if (breakPoint == NULL || lenof(base, bend) == ++size)return 1;
{
        struct group** sta, ** end, ** as, ** ae, ** temp;                                      ln
        int tp;
        while (breakPoint != NULL || (lenof(base, bend)!=size))
        {
            cout << "\n in second loop";
            { 
                size = lenof(base, bend);
                tp = base - breakPoint;
                ae=(base = (struct group**)realloc(base, sizeof(struct group**) * size))+size-1;

                end=bend = (as=base + tp)-1;
                breakPoint = NULL;
                ln
            }
            while ((sta = as) < ae)
            {
                while (*vat(++as)>= *vat(++end))ln;
                if (sta == end)*++bend = *sta;
                else if ((*(breakPoint = ++bend) = (struct group*)malloc(sizeof(struct group))) != NULL) { create_node break; }
                else memret
            }
            while ((sta = as) < ae)
            {
                while (*vat(++as) >= *vat(++end))ln;
                if (sta == end)*++bend = *sta;
                else if ((* ++bend = (struct group*)malloc(sizeof(struct group))) != NULL) create_node
                else memret
            }
            *++bend = *ae;
        }   
    }

    {
        std::cout << "\nPrinting results: "; 
        struct group** start = base, ** end = bend; 
        while (start <= end)
        std::cout << " > " << *vat(start++); 
    }



return 0;
}

int main()
{
    using namespace::std;
    int* array;
    int size = rand() % 15 + 1;
    int* ar = array = (int*)malloc(sizeof(int) * size), *ae = ar + size;
    int sz = size;
    cout << "\nOrignial Array: ";
   
    while (sz--)cout<<'\t' << (*array++ = rand() %1000 );
  // int ld=0; while(++ld<=size)cout<< '\t' << (*array++ = ld);
  // int ld=size; while(ld)cout<<'\t'<<(*array++=ld--);
    SkimSort(ar--, size);
    cout << "\nAfter Sorting: ";
    while (++ar < ae)cout<< '\t' << *ar;

    return 0;

}

