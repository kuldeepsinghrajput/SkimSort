#include<stdlib.h>
#define ValueAt(a,arrend,res) {if ((res = (int*)a) > arrend)while ((res = (int*)*res) > arrend);}		
#define ValueAtlevel(a,arrend,res) {if ((res = (int*)a) > arrend)while ((int*)*(res = (int*)*res) > arrend);}		

void skim(int *arrstart,int *arrend)
{
	int* start, * end, * a = arrstart, * b = arrend;
	register int* res,temp,size;
	sta:	
		if ((end = start = (int*)malloc(sizeof(int*) * (size=b - a))) == NULL)goto EXIT;
		*end = (int)a;
		/**/
		ValueAt(a, b, res);
		temp = *res;
		while(a<b)
		{
			
			ValueAt(++a, b, res);
			if (temp > *res)*++end = (int)a;
			temp = *res;

		}
		if (end - start < size) { a = start; b = end; goto sta;}

		free(start);
		a=start = (end=b) - size;
		size = -1;
		while(start)
		{
			temp = arrstart[++size];
			ValueAtlevel(end, arrend, res);
			arrstart[size] = *(int*)*res;
			*(int*)*res = temp;
			if (temp > *(int*)(*res + 1))(*res - 1);



		}




EXIT:
}