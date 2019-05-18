
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
		target->EnemyHP -= (6 + Strength - Weak);
	}break;
	case 1001 :
	{
		Energy -= 1;
		target->EnemyHP -= (9 + Strength - Weak);
	}break;
	case 2 :
	{
		Energy -= 2;
		target->EnemyHP -= (8 + Strength - Weak);
		target->State_Vulnerable += 2;
	}break;
	case 1002 :
	{
		Energy -= 2;
		target->EnemyHP -= (10 + Strength - Weak);
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
		target->EnemyHP -= (Block + Strength - Weak);
	}break;
	case 1005 :
	{
		target->EnemyHP -= (Block + Strength - Weak);
	}break;
	case 6 :
	{
		Energy -= 1;
		target->EnemyHP -= (9 + Strength - Weak);
		draw(1);
	}break;
	case 1006 :
	{
		Energy -= 1;
		target->EnemyHP -= (10 + Strength - Weak);
		draw(2);
	}break;
	case 7 :
	{
		Energy -= 1;
		target->EnemyHP -= (5 + Strength - Weak);
		target->EnemyHP -= (5 + Strength - Weak);
	}break;
	case 11 :
	{
		target->EnemyHP -= (5 + Strength - Weak);
		DiscardPile[DiscardPoint] = 0011;
		DiscardPoint++;
	}break;
	case 1011 :
	{
		target->EnemyHP -= (7 + Strength - Weak);
		DiscardPile[DiscardPoint] = 0011;
		DiscardPoint++;
	}break;
	case 15 :
	{
		Energy -= 1;
		target->EnemyHP -= (12 + Strength - Weak);
		//DrawPile[];抽牌堆放牌还不知道咋写
	}break;
	case 1015 :
	{
		Energy -= 1;
		target->EnemyHP -= (17 + Strength - Weak);
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
		target->EnemyHP -= (14 + 3 * Strength - Weak);
	}break;
	case 1017 :
	{
		Energy -= 2;
		target->EnemyHP -= (14 + 5 * Strength - Weak);
	}break;
	case 18 :
	{
		Energy -= 2;
		target->EnemyHP -= (12 + Strength - Weak);
		target->State_Vulnerable += 2;
	}break;
	case 1018:
	{
		Energy -= 2;
		target->EnemyHP -= (14 + Strength - Weak);
		target->State_Vulnerable += 3;
	}break;
	case 19 :
	{
		Energy -= 1;
		target->EnemyHP -= (5 + Strength - Weak);
		Block += (5 + Dexterity);
	}break;
	case 1019 :
	{
		Energy -= 1;
		target->EnemyHP -= (7 + Strength - Weak);
		Block += (7 + Dexterity);
	}break;
	case 23 :
	{
		Energy -= 2;
		target->EnemyHP -= (13 + Strength - Weak);
		target->State_Vulnerable += 1;
		target->State_Weak += 1;
	}break;
	case 1023 :
	{
		Energy -= 2;
		target->EnemyHP -= (13 + Strength - Weak);
		target->State_Vulnerable += 2;
		target->State_Weak += 2;
	}break;

}