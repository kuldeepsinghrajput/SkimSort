#ifndef __Tests__
#define __Tests__




#include "debug.cpp"
#include <iostream>
#include<stdio.h>
#include "Structs.cpp"  
#include "Global.cpp"
#include "Macros.cpp"
using namespace::std;

tint j ;
void freeHeap(struct group** base, struct group** end)
{
    return;
  
}



int SkimSort(int* array, int size)
{
   
    int sz = size;
    struct group** base, ** bend, ** breakPoint = NULL;

    { 
        
        if ((bend = base = (struct group**)malloc(sizeof(struct group*) * sz)) == NULL) return -2;
        struct group start = { (struct group**)base,(struct group**)bend };
        if (sz < 2)return 0; 
        {
            int* as = array, *ae = (array + sz - 1);
            range.start = (struct group**)as;
            range.end = (struct group**)ae;
            int* sta, * end;
            struct group* temp;
            end = as - 1;
            tint j = 0;
        while (as < ae)
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
    } 
 }
    cout << "Reacheed here: "<<(breakPoint == NULL || (lenof(base, bend) == sz));
    if (breakPoint == NULL || (lenof(base, bend) == sz)) mark_end;


#define run1
#ifdef run1
       
    {
        struct group** sta, ** end, ** as, ** ae, ** temp; ln


            ln
            p("Sconnd Loop Started");
        tint jld = 0;

        while (breakPoint != NULL || (lenof(base, bend) != sz))
        {
          
            ln p(" Loop Started " << ++jld << "th times");
            {sz = lenof(base, bend); ln
                p("base before:" << base);
            ae = (as=bend=base = (struct group**)realloc(base, sizeof(struct group**) * sz)) + sz - 1; ln
                p("Test Form");
                p("base after" << base<< " base size : "<<lenof(base, ae));
            breakPoint = NULL; ln
            end = as - 1; ln

           ln
            }
            
            while (as < ae)
            {
                ln
                p(endl << ++j << " th try\n");
                sta = as; ln
                while (as < ae && *vat(++end) < *vat(++as))p(*vat(end) << "\t");
                p("\n"); ln
                if (sta == end && ae != as) { ln *bend++ = *sta;p( "breaked at " << j << " For value : " << *vat(bend-1) << " for *bend :" << (bend-1) << endl); ln
                }
                else if ((*bend = (struct group*)malloc(sizeof(struct group))) != NULL)
                {
                    ln
                    p( " \tallocated " << bend << " further array allocated ");
                    //&& ((*bend)->start = (struct group**)malloc(sizeof(struct group*) * lenof(sta, end)))

                    if (as == ae)
                    {
                        ln
                        if (*vat(end) > *vat(as))
                        {
                            ln
#define create_node(v) {ln int insz = lenof(sta, v);\
                            if ((temp = (*bend)->start = (struct group**)malloc(sizeof(struct group*) * insz)) == NULL) { p( " memory not allocated  exiting"); mark_end; }\
                            *temp = (struct group*)sta;\
                            while (--insz)*++temp = *++sta;\
                            (*bend)->end = temp; ln }\

                            create_node(end);


                            *++bend = *as; ln
                        }
                        else create_node(as); ln



                        break;
                    }
                    else create_node(end); ln

                    breakPoint == NULL ? breakPoint = bend++ : ++bend;
                    ln
                }

#undef create_node


                ln
            }




            ln


        }

    
    
    
    
        ln

    }ln



        //heap formation done





#ifdef bugc   // try  
        {
                ln

                {cout << "\nPrinting results: "; struct group** start = base,** end = bend; while (start <= end)cout << " > " << *vat(start++); }
                cout << "\nreached here"; }
#endif
#endif

        return 1;
}





#endif