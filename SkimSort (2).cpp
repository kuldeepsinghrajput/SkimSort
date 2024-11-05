#include<iostream>
#define range(val)  ((void*)val<(void*)range.start||(void*)val>(void*)range.end)
#define lenof(u,v) (v-u+1)
struct group
{
struct group** start,**end;
}range;

int *vat(struct group** val)
{
while(range(val)&&range(*val))val=(*val)->start;
return range(val)?(int*)*val:(int*)val;
}

int SkimSort(int *array,int sz)
{
struct group** base,**bend,**breakPoint;
int size=sz;
{
if ((bend = base = (struct group**)malloc(sizeof(struct group*)* sz)) == NULL) return -2;
if (size<2)return 0;

int *as,*ae,*sta,*end;
range.start=(struct group**)(as=array);
range.end=(struct group**)(ae=(array + sz - 1));
struct group *temp;
end=as-1;
while (as<ae)
{
    
            sta = as;
            while (as < ae && *++end <= *++as);
            if (sta == end && ae != as)*bend++ = (struct group*)sta;
            else if ((temp = *bend = (struct group*)malloc(sizeof(struct group))) != NULL)
            {
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





if(breakPoint==NULL||lenof(base,bend))
{
std::cout<<"Result: Already Sorted";
}
else
{
std::cout<<"Result: ";
while (base<=bend)std::cout<<'\t'<<*vat(base);
}







return 0;    
}