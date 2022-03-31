
#include "pch.h"
#include <random>;
#include <iostream>


double getProb()
{ 
	double d = rand() % 100;

	return (d / 1000);

}

int *generateData(int *& inbuf, int & count)
{
	int num = (int)(rand() % 10);
		*(inbuf+count) = num;
		count++;
		if (count==10)
		{  
			int *adress= inbuf;
			count = 0;
			int * a = new int[10];
		    inbuf = a;
			return adress;
		}
		return NULL;
}

void processData(int *& outbuf, int & count, int & total)
{
	if (outbuf==NULL)
	{
		return;
	}
	total += outbuf[count];
	count++;
	if (count==10)
	{
		count = 0;
		delete outbuf;
	    outbuf = NULL;
	}
}


const int BUFSIZE = 10;
const int ITERATIONS = 50;
int main()
{
	int *fillbuffer = new int[BUFSIZE];
	int fillcnt = 0;
	int *processbuffer = NULL;
	int processcnt = 0;
	int tcount = 0;
	for (int i = 0; i < ITERATIONS; i++)
	{
		int *temp;
		if (getProb() <= 0.40)
		{
			temp = generateData(fillbuffer, fillcnt);
			if (temp != NULL)
				processbuffer = temp;
		}
		if (getProb() <= 0.60)

			processData(processbuffer, processcnt, tcount);
		std::cout << fillcnt << '\t' << processcnt << std::endl;
	}
	std::cout << "Total value: " << tcount << std::endl;
	return 0;
}