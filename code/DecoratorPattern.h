#include <stdlib.h>
#include <string>

//	���ϻ���
class CBevarage
{
public:
	virtual string getDescription( ) 
	{
		return desc;
	}

	virtual ~CBevarage(){}

public:
	virtual int cost( ) = 0;


public:
	string desc;
};

//	��������DarkRoast��
class CDarkRoast : public CBevarage
{
public:
	CDarkRoast( )
	{
		desc = "DarkRoast";
	}

	int cost( )
	{
		return 8;
	}

};

//	��������Espresso��
class CEspresso : public CBevarage
{
public:
	CEspresso( )
	{
		desc = "Espresso";
	}
	int cost( )
	{
		return 7;
	}
};


//	����װ����
class CCondimentDecorator : public CBevarage
{
public:
	virtual string getDescription( ) = 0;
};

//	����Mocha��
class CMocha : public CCondimentDecorator
{
public:
	CMocha( CBevarage* pValue ) : pBevarage( pValue )
	{
	}

	string getDescription( )
	{
		return pBevarage->getDescription() + ", Mocha";
	}

	int cost( )
	{
		return pBevarage->cost() + 2;
	}

public:
	CBevarage* pBevarage;
};

//	����Soy��
class CSoy : public CCondimentDecorator
{
public:
	CSoy( CBevarage* pValue ) : pBevarage( pValue )
	{
	}

	string getDescription( )
	{
		return pBevarage->getDescription() + ", Soy";
	}

	int cost( )
	{
		return pBevarage->cost() + 3;
	}

public:
	CBevarage* pBevarage;
};

////	����Whip��
class CWhip : public CCondimentDecorator
{
public:
	CWhip( CBevarage* pValue ) : pBevarage( pValue )
	{
	}

	string getDescription( )
	{
		return pBevarage->getDescription() + ", Whip";
	}

	int cost( )
	{
		return pBevarage->cost() + 3;
	}
public:
	CBevarage* pBevarage;
};