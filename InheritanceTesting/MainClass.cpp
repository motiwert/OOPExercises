#include "MainClass.h"
#include "Inherited.h"
#include <stdio.h>

int main(char[])
{
	//Inherited inherited;
	//inherited.Do();
	//printf("b=%s\n", inherited.b);

	//BaseBase* pBaseBase = new Inherited(); ambigous... compiler doesn't know which BaseBase.
	printf("------------BaseLeft Object------------\n" );
	BaseLeft* pBaseLeft = new Inherited();
	delete pBaseLeft; //
	printf("------------BaseRight Object------------\n" );
	BaseRight* pBaseRight = new Inherited();
	delete pBaseRight; //

}