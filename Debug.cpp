#ifndef __Debug__
#define __Debug__
#define bugc
#ifdef prod
#undef bugc
#endif
#ifdef bugc
#define p(message) cout<<message
#define tint int
#define ln cout<<"\n at line "<<__LINE__<<":  "; 
#define results {cout<<"\nPrinting results: "; struct group** start=base,**end=bend;while(start<=end)cout<<" > "<<*vat(start++);}
#else
#define p(message)  /*cout<<message*/
#define tint /##/
#define ln 
#define results
#endif 
#endif