
//#include "StdAfx.h"
#include <time.h>
#include <stdlib.h>
#include "CardsFunc.h"
#include "StateVariables.h"
#include "Enemy.h"
#define random(x) (rand()%x)


CardsFunc::CardsFunc(void)
{
}


CardsFunc::~CardsFunc(void)
{
}



void StateVariables::usecard(int cardnum, Enemy* target, int n)
{
	switch (cardnum)
	{
	case 3:
	{
		Energy -= 1;
		target->EnemyBlock -= int((6 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1003:
	{
		Energy -= 1;
		target->EnemyBlock -= int((9 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1:
	{
		Energy -= 2;
		target->EnemyBlock -= int((8 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 2;
	}break;
	case 1001:
	{
		Energy -= 2;
		target->EnemyBlock -= int((10 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 3;
	}break;
	case 2:
	{
		Energy -= 1;
		Block += (5 + Dexterity);
	}break;
	case 1002:
	{
		Energy -= 1;
		Block += (8 + Dexterity);
	}break;
	case 6:
	{
		Energy -= 1;
		target->EnemyBlock -= int((Block + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1006:
	{
		target->EnemyBlock -= int((Block + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 16:
	{
		Energy -= 1;
		target->EnemyBlock -= int((9 + Strength) * WeakCoefficient * target->Vulnerable);
		draw(1);
	}break;
	case 1016:
	{
		Energy -= 1;
		target->EnemyBlock -= int((10 + Strength) * WeakCoefficient * target->Vulnerable);
		draw(2);
	}break;
	case 21:
	{
		Energy -= 1;
		target->EnemyBlock -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
		target->EnemyBlock -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1021:
	{
		Energy -= 1;
		target->EnemyBlock -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
		target->EnemyBlock -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 4:
	{
		target->EnemyBlock -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
		DiscardPile[DiscardPoint] = 4;
		DiscardPoint++;
	}break;
	case 1004:
	{
		target->EnemyBlock -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
		DiscardPile[DiscardPoint] = 1004;
		DiscardPoint++;
	}break;
	case 23:
	{
		Energy -= 1;
		target->EnemyBlock -= int((12 + Strength) * WeakCoefficient * target->Vulnerable);
		//DrawPile[];抽牌堆放牌还不知道咋写
	}break;
	case 1023:
	{
		Energy -= 1;
		target->EnemyBlock -= int((17 + Strength) * WeakCoefficient * target->Vulnerable);
		//DrawPile[];抽牌堆放牌还不知道咋写
	}break;
	case 17:
	{
		Energy -= 1;
		Block += (8 + Dexterity);
		draw(1);
	}break;
	case 1017:
	{
		Energy -= 1;
		Block += (11 + Dexterity);
		draw(1);
	}break;
	case 13:
	{
		Energy -= 2;
		target->EnemyBlock -= int((14 + 3 * Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1013:
	{
		Energy -= 2;
		target->EnemyBlock -= int((14 + 5 * Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 9:
	{
		Energy -= 2;
		target->EnemyBlock -= int((12 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Weak += 2;
	}break;
	case 1009:
	{
		Energy -= 2;
		target->EnemyBlock -= int((14 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Weak += 3;
	}break;
	case 14:
	{
		Energy -= 1;
		target->EnemyBlock -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
		Block += (5 + Dexterity);
	}break;
	case 1014:
	{
		Energy -= 1;
		target->EnemyBlock -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
		Block += (7 + Dexterity);
	}break;
	case 58:
	{
		Energy -= 2;
		target->EnemyBlock -= int((13 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 1;
		target->State_Weak += 1;
	}break;
	case 1058:
	{
		Energy -= 2;
		target->EnemyBlock -= int((13 + Strength) * WeakCoefficient * target->Vulnerable);
		target->State_Vulnerable += 2;
		target->State_Weak += 2;
	}break;
/*	case 5:
	{
		Energy -= 1;
		Block += (5 + Dexterity);
		int i;
		for (i = 1; i < HandPoint; i++)
		{
			if (Hand[i] < 1000)
				Hand[i] += 1000;
		}
	}*/
	case 1005:
	{
		Energy -= 1;
		Block += (5 + Dexterity);
		int i;
		for (i = 1; i < HandPoint; i++)
		{
			if (Hand[i] < 1000)
				Hand[i] += 1000;
		}
	}break;
	case 10:
	{
		Strength += 2;
		StrengthUp += 2;
	}break;
	case 1010:
	{
		Strength += 4;
		StrengthUp += 4;
	}break;
	case 11:
	{
		usecard(DrawPile[DrawPoint], target, n);
		DrawPile[DrawPoint] = 0;
		DrawPoint -= 1;
	}break;
	case 1011:
	{
		usecard(DrawPile[DrawPoint], target, n);
		DrawPile[DrawPoint] = 0;
		DrawPoint -= 1;
	}break;
	case 18:
	{
		Energy -= 1;
		srand((unsigned int)(time(NULL)));
		int t = random(n);
		int i;
		for (i = 0; i < 3; i++)
			(target + t)->EnemyBlock -= 3;
	}break;
	case 1018:
	{
		Energy -= 1;
		srand((unsigned int)(time(NULL)));
		int t = random(n);
		int i;
		for (i = 0; i < 4; i++)
			(target + t)->EnemyBlock -= 3;
	}break;
	case 19:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= 4;
			(target + i)->State_Vulnerable += 1;
		}
	}break;
	case 1019:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= 7;
			(target + i)->State_Vulnerable += 1;
		}
	}break;
	case 20:
	{
		Energy -= 1;
		Block += 7;
		srand((unsigned int)(time(NULL)));
		int i = random(HandPoint);
		Hand[i] = Hand[i + 1];
		for (i = i + 1; i < HandPoint - 1; i++)
			Hand[i] = Hand[i + 1];
		HandPoint -= 1;
	}break;
	case 24:
	{
		draw(3);
		CanDraw = 0;
	}
	case 1024:
	{
		draw(4);
		CanDraw = 0;
	}
	case 26:
	{
		HP -= 3;
		Energy += 1;
	}break;
	case 1026:
	{
		HP -= 3;
		Energy += 2;
	}break;
	}
}