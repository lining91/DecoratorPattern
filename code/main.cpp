#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#include "DecoratorPattern.h"

void main()
{
	cout << "��һ�����ϣ�" << endl;
	CBevarage* pDarkRoast = new CDarkRoast();
	pDarkRoast = new CMocha( pDarkRoast );
	pDarkRoast = new CWhip( pDarkRoast );
	cout << "�����У�" << pDarkRoast->getDescription() << endl;
	cout << "�۸�" << pDarkRoast->cost() << endl;

	cout << "�ڶ������ϣ�" << endl;
	CBevarage* pEspresso = new CEspresso();
	pEspresso = new CWhip( pEspresso );
	pEspresso = new CSoy( pEspresso );
	cout << "�����У�" << pEspresso->getDescription() << endl;
	cout << "�۸�" << pEspresso->cost() << endl;

	system( "pause" );
	return;
}