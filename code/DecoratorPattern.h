#include <stdlib.h>
#include <string>

//	饮料基类
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

//	具体饮料DarkRoast类
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

//	具体饮料Espresso类
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


//	调料装饰类
class CCondimentDecorator : public CBevarage
{
public:
	virtual string getDescription( ) = 0;
};

//	调料Mocha类
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

//	调料Soy类
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

////	调料Whip类
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