
//#include "StdAfx.h"

#include "CardsFunc.h"
#include "StateVariables.h"
#include "Enemy.h"

/*
CardsFunc::CardsFunc(void)
{
}


CardsFunc::~CardsFunc(void)
{
}


*/

void StateVariables::usecard(int cardnum, Enemy* target)
{
	switch(cardnum)
	{
	case 0001 :
	{
		target->EnemyHP -= 6;
	}
	case 0002 :
	{
		target->EnemyHP 
	}
	}
}