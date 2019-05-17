
//#include "StdAfx.h"

#include "CardsFunc.h"
#include "StateVariables.h"
#include "Enemy.h"


CardsFunc::CardsFunc(void)
{
}


CardsFunc::~CardsFunc(void)
{
}



void StateVariables::usecard(int cardnum, Enemy* target)
{
	switch(cardnum)
	{
	case 1 :
	{
		Energy -= 1;
		target->EnemyHP -= (6 + Strength);
	}break;
	case 1001 :
	{
		Energy -= 1;
		target->EnemyHP -= (9 + Strength);
	}break;
	case 2 :
	{
		Energy -= 2;
		target->EnemyHP -= (8 + Strength);
		target->State_Vulnerable += 2;
	}break;
	case 1002 :
	{
		Energy -= 2;
		target->EnemyHP -= (10 + Strength);
		target->State_Vulnerable += 3;
	}break;
	case 3 :
	{
		Energy -= 1;
		Block += (5 + Dexterity);
	}break;
	case 1003 :
	{
		Energy -= 1;
		Block += (8 + Dexterity);
	}break;
	case 5 :
	{
		Energy -= 1;
		target->EnemyHP -= (Block + Strength);
	}break;
	case 1005 :
	{
		target->EnemyHP -= (Block + Strength);
	}break;
	case 6 :
	{
		Energy -= 1;
		target->EnemyHP -= (9 + Strength);
		draw(1);
	}break;
	case 1006 :
	{
		Energy -= 1;
		target->EnemyHP -= (10 + Strength);
		draw(2);
	}break;
	case 7 :
	{
		Energy -= 1;
		target->EnemyHP -= (5 + Strength);
		target->EnemyHP -= (5 + Strength);
	}break;
	case 11 :
	{
		target->EnemyHP -= (5 + Strength);
		DiscardPile[DiscardPoint] = 0011;
		DiscardPoint++;
	}break;
	case 1011 :
	{
		target->EnemyHP -= (7 + Strength);
		DiscardPile[DiscardPoint] = 0011;
		DiscardPoint++;
	}break;
	case 15 :
	{
		Energy -= 1;
		target->EnemyHP -= (12 + Strength);
		//DrawPile[];抽牌堆放牌还不知道咋写
	}break;
	case 1015 :
	{
		Energy -= 1;
		target->EnemyHP -= (17 + Strength);
		//DrawPile[];抽牌堆放牌还不知道咋写
	}break;
	case 16 :
	{
		Energy -= 1;
		Block += (8 + Dexterity);
		draw(1);
	}break;
	case 1016 :
	{
		Energy -= 1;
		Block += (11 + Dexterity);
		draw(1);
	}break;
	case 17 :
	{
		Energy -= 2;
		target->EnemyHP -= (14 + 3 * Strength);
	}break;
	case 1017 :
	{
		Energy -= 2;
		target->EnemyHP -= (14 + 5 * Strength);
	}break;
	case 18 :
	{
		Energy -= 2;
		target->EnemyHP -= (12 + Strength);
		target->State_Vulnerable += 2;
	}break;
	case 1018:
	{
		Energy -= 2;
		target->EnemyHP -= (14 + Strength);
		target->State_Vulnerable += 3;
	}break;
	case 19 :
	{
		Energy -= 1;
		target->EnemyHP -= (5 + Strength);
		Block += (5 + Dexterity);
	}break;
	case 1019 :
	{
		Energy -= 1;
		target->EnemyHP -= (7 + Strength);
		Block += (7 + Dexterity);
	}break;
	case 
	}
}