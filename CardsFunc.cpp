
//#include "StdAfx.h"
#include <time.h>
#include <stdlib.h>
#include "CardsFunc.h"
#include "StateVariables.h"
#include "Enemy.h"
#define random(x) (rand()%x)
#define damage(x) target->EnemyBlock -= int((x + Strength) * WeakCoefficient * target->Vulnerable)


CardsFunc::CardsFunc(void)
{
}


CardsFunc::~CardsFunc(void)
{
}



void StateVariables::usecard(int cardnum, Enemy* target = NULL, int n = 0)
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
		damage(12);
		addToDrawPile(131);
	}break;
	case 1023:
	{
		Energy -= 1;
		damage(17);
		addToDrawPile(131);
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
		StrengthUpTemp += 2;
	}break;
	case 1010:
	{
		Strength += 4;
		StrengthUpTemp += 4;
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
			(target + t)->EnemyBlock -= int((3 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1018:
	{
		Energy -= 1;
		srand((unsigned int)(time(NULL)));
		int t = random(n);
		int i;
		for (i = 0; i < 4; i++)
			(target + t)->EnemyBlock -= int((3 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 19:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= int((4 + Strength) * WeakCoefficient * target->Vulnerable);
			(target + i)->State_Vulnerable += 1;
		}
	}break;
	case 1019:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= int((7 + Strength) * WeakCoefficient * target->Vulnerable);
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
	case 28:
	{
		Energy -= 2;
		target->EnemyBlock -= int((20 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1028:
	{
		Energy -= 2;
		target->EnemyBlock -= int((28 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 32:
	{
		Energy -= 1;
		target->EnemyBlock -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
		if (target->State_Vulnerable > 0)
		{
			Energy += 1;
			draw(1);
		}
	}break;
	case 1032:
	{
		Energy -= 1;
		target->EnemyBlock -= int((8 + Strength) * WeakCoefficient * target->Vulnerable);
		if (target->State_Vulnerable > 0)
		{
			Energy += 1;
			draw(1);
		}
	}break;
	case 34:
	{
		Energy -= 2;
		Block *= 2;
	}break;
	case 1034:
	{
		Energy -= 1;
		Block *= 2;
	}break;
	case 38:
	{
		Energy -= 2;
		Block += (12 + Dexterity);
		FlameBarrier = 4;
	}break;
	case 1038:
	{
		Energy -= 2;
		Block += (16 + Dexterity);
		FlameBarrier = 6;
	}break;
	case 40:
	{
		Energy -= 1;
		HP -= 3;
		target->EnemyBlock -= int((14 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1040:
	{
		Energy -= 1;
		HP -= 2;
		target->EnemyBlock -= int((18 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 42:
	{
		Energy -= 1;
		Strength += 2;
	}break;
	case 1042:
	{
		Energy -= 1;
		Strength += 3;
	}break;
	case 61:
	{
		Vulnerable += 3;
		Berserk += 1;
	}break;
	case 1061:
	{
		Vulnerable += 2;
		Berserk += 1;
	}break;
	case 62:
	{
		Energy -= 3;
		target->EnemyBlock -= int((32 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 1062:
	{
		Energy -= 3;
		target->EnemyBlock -= int((42 + Strength) * WeakCoefficient * target->Vulnerable);
	}break;
	case 65:
	{
		Energy -= 3;
		StrengthUp += 2;
	}break;
	case 1065:
	{
		Energy -= 3;
		StrengthUp += 3;
	}break;
	case 70:
	{
		Energy -= 2;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= 21;
		}
		DiscardPile[DiscardPoint] = 129;
		DiscardPoint++;
	}break;
	case 1070:
	{
		Energy -= 2;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= 28;
		}
		DiscardPile[DiscardPoint] = 129;
		DiscardPoint++;
	}break;
	case 72:
	{
		Energy -= 2;
		Juggernaut = 5;
	}break;
	case 1072:
	{
		Energy -= 2;
		Juggernaut = 7;
	}break;
	case 77:
	{
		damage(7);
		HP += 2;
	}break;
	case 1077:
	{
		damage(8);
		HP += 3;
	}break;
	case 8:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= int((8 + Strength) * WeakCoefficient * target->Vulnerable);
		}
	}break;
	case 1008:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			(target + i)->EnemyBlock -= int((8 + Strength) * WeakCoefficient * target->Vulnerable);
		}
	}break;
	case 29:
	{
		Energy -= 1;
		Combust = 5;
	}break;
	case 1029:
	{
		Energy -= 1;
		Combust = 7;
	}break;
	case 35:
	{
		Energy -= 1;
		Evolve = 1;
	}break;
	case 1035:
	{
		Energy -= 1;
		Evolve = 2;
	}break;
	case 44:
	{
		Energy -= 1;
		Metallicize = 3;
	}break;
	case 1044:
	{
		Energy -= 1;
		Metallicize = 4;
	}break;
	case 45:
	{
		Energy -= 1;
		Hand[HandPoint] = 131;
		Hand[HandPoint + 1] = 131;
		HandPoint += 2;
		Block += 15;
	}break;
	case 1045:
	{
		Energy -= 1;
		Hand[HandPoint] = 131;
		Hand[HandPoint + 1] = 131;
		HandPoint += 2;
		Block += 20;
	}break;
	case 47:
	{
		Rage = 3;
	}break;
	case 1047:
	{
		Rage = 5;
	}break;
	case 48:
	{
		Energy -= 1;
		damage(8 + RampageTime * 5);
		RampageTime += 1;
	}break;
	case 1048:
	{
		Energy -= 1;
		damage(8 + RampageTime * 8);
		RampageTime += 1;
	}break;
	case 49:
	{
		damage(7);
		addToDrawPile(130);
	}break;
	case 1049:
	{
		damage(10);
		addToDrawPile(130);
	}break;
	case 50:
	{
		Energy -= 1;
		Rupture = 1;
	}break;
	case 1050:
	{
		Rupture = 1;
	}break;
	case 57:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			if ((target + i)->intend == 0)
			{
				Strength += 3;
			}
		}
	}break;
	case 1057:
	{
		Energy -= 1;
		int i;
		for (i = 0; i < n; i++)
		{
			if ((target + i)->intend == 0)
			{
				Strength += 4;
			}
		}
	}break;
	case 59:
	{
		int i, j;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < Energy; j++)
			{
				(target + i)->EnemyBlock -= int((5 + Strength) * WeakCoefficient * target->Vulnerable);
			}
		}
		Energy = 0;
	}break;
	case 1059:
	{
		int i, j;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < Energy; j++)
			{
				(target + i)->EnemyBlock -= int((8 + Strength) * WeakCoefficient * target->Vulnerable);
			}
		}
		Energy = 0;
	}break;
	case 60:
	{
		Energy -= 3;
		Barricade = 1;
	}break;
	case 1060:
	{
		Energy -= 2;
		Barricade = 1;
	}break;
	case 63:
	{
		Brutality = 1;
	}break;
	}
}