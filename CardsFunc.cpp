
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
	case 3 :
	{
		Energy -= 1;
		target->EnemyHP -= int((6 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1003 :
	{
		Energy -= 1;
		target->EnemyHP -= int((9 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1 :
	{
		Energy -= 2;
		target->EnemyHP -= int((8 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 2;
	}break;
	case 1001 :
	{
		Energy -= 2;
		target->EnemyHP -= int((10 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 3;
	}break;
	case 2 :
	{
		Energy -= 1;
		Block += (5 + Dexterity);
	}break;
	case 1002 :
	{
		Energy -= 1;
		Block += (8 + Dexterity);
	}break;
	case 6 :
	{
		Energy -= 1;
		target->EnemyHP -= int((Block + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1006 :
	{
		target->EnemyHP -= int((Block + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 16 :
	{
		Energy -= 1;
		target->EnemyHP -= int((9 + Strength) * WeakCoefficient * target->Vulnerable);
		draw(1);
	}break;
	case 1016 :
	{
		Energy -= 1;
		target->EnemyHP -= int((10 + Strength) * WeakCoefficient * target->Vulnerable);
		draw(2);
	}break;
	case 21 :
	{
		Energy -= 1;
		target->EnemyHP -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
		target->EnemyHP -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1021 :
	{
		Energy -= 1;
		target->EnemyHP -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
		target->EnemyHP -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 4 :
	{
		target->EnemyHP -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
		DiscardPile[DiscardPoint] = 4;
		DiscardPoint++;
	}break;
	case 1004 :
	{
		target->EnemyHP -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
		DiscardPile[DiscardPoint] = 1004;
		DiscardPoint++;
	}break;
	case 23 :
	{
		Energy -= 1;
		target->EnemyHP -= int((12 + Strength) * WeakCoefficient * target->Vulnerable);
		//DrawPile[];抽牌堆放牌还不知道咋写
	}break;
	case 1023 :
	{
		Energy -= 1;
		target->EnemyHP -= int((17 + Strength) * WeakCoefficient * target->Vulnerable);
		//DrawPile[];抽牌堆放牌还不知道咋写
	}break;
	case 17 :
	{
		Energy -= 1;
		Block += (8 + Dexterity);
		draw(1);
	}break;
	case 1017 :
	{
		Energy -= 1;
		Block += (11 + Dexterity);
		draw(1);
	}break;
	case 13 :
	{
		Energy -= 2;
		target->EnemyHP -= int((14 + 3 * Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1013 :
	{
		Energy -= 2;
		target->EnemyHP -= int((14 + 5 * Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 9 :
	{
		Energy -= 2;
		target->EnemyHP -= int((12 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Weak += 2;
	}break;
	case 1009:
	{
		Energy -= 2;
		target->EnemyHP -= int((14 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Weak += 3;
	}break;
	case 14 :
	{
		Energy -= 1;
		target->EnemyHP -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
		Block += (5 + Dexterity);
	}break;
	case 1014 :
	{
		Energy -= 1;
		target->EnemyHP -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
		Block += (7 + Dexterity);
	}break;
	case 58 :
	{
		Energy -= 2;
		target->EnemyHP -= int((13 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 1;
		target->State_Weak += 1;
	}break;
	case 1058 :
	{
		Energy -= 2;
		target->EnemyHP -= int((13 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 2;
		target->State_Weak += 2;
	}break;

}