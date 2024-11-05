#ifndef __Macros__
#define __Macros__
#define zero(a) a!=~a
#define log(k,l) {register int j=(l);if((j-=(k=1))>-1)while(j>>=1)++k;else k=0;}
#define range(val) ((void*)(val)<range.start || (void*)(val)>range.end)
#define mark_end  freeHeap(base,bend);return 1
#define lenof(u,v) (v-u+1)
#endif