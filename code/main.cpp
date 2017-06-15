#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#include "DecoratorPattern.h"

void main()
{
	cout << "第一种饮料：" << endl;
	CBevarage* pDarkRoast = new CDarkRoast();
	pDarkRoast = new CMocha( pDarkRoast );
	pDarkRoast = new CWhip( pDarkRoast );
	cout << "材料有：" << pDarkRoast->getDescription() << endl;
	cout << "价格：" << pDarkRoast->cost() << endl;

	cout << "第二种饮料：" << endl;
	CBevarage* pEspresso = new CEspresso();
	pEspresso = new CWhip( pEspresso );
	pEspresso = new CSoy( pEspresso );
	cout << "材料有：" << pEspresso->getDescription() << endl;
	cout << "价格：" << pEspresso->cost() << endl;

	system( "pause" );
	return;
}