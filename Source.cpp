//appending zero is appended at the end by ourself
#include "skim.cpp"
int skimSort(int *array, int size)
{
	if (size < 2)return -1;
	array = (int*)realloc(array, sizeof(int) * ++size);
	struct group** base, ** bend, ** breakpoint;

	base = bend = (struct group**)malloc(sizeof(struct group**) * size);



	int sz = size;
	{int* as = array, * ae = array + sz - 1;
	int* sta = as, * end = as - 1;
	breakpoint = NULL;
	--bend;
	while ((sta = as) < ae)
	{
		while (*++as >= *++end);
		if (sta == end)*++bend = (struct group*)sta;
		else if (*(++bend = breakpoint) = (struct group*)malloc(sizeof(struct group))) (*bend)->end = (struct group**)sta, (*bend)->end = (struct group**)end;
		else memret;
	}
	while ((sta = as) < ae)
	{
		while (*++as >= *++end);
		if (sta == end)*++bend = (struct group*)sta;
		else if (*++bend= (struct group*)malloc(sizeof(struct group))) (*bend)->end = (struct group**)sta, (*bend)->end = (struct group**)end;
		else memret;
	}



	{	struct group** sta, ** end, ** as, ** ae, ** temp;
		while (breakpoint!=NULL||lenof(base,bend)!=size)
		{
			{
				int szi = lenof(base, bend);
				base =(struct group**) realloc(base, sizeof(struct group**) * sz);


			

			
			}




		}

	
	
	
	
	
	}






}
