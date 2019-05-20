#include "StateVariables.h"
#include <time.h>
#define random(x) (rand()%x)

StateVariables::StateVariables(void)
{
	Block = 0;
	Dexterity = 0;
	Energy = 3;
	EnergyMax = 3;
	Gold = 99;
	HP = 70;
	HPMax = 70;
	Deck[0] = 1;
	Deck[1] = 1;
	Deck[2] = 1;
	Deck[3] = 1;
	Deck[4] = 1;
	Deck[5] = 3;
	Deck[6] = 3;
	Deck[7] = 3;
	Deck[8] = 3;
	Deck[9] = 2;//����ֻ��ʮ�ų�ʼ�Ƶ��ƿ�
	int i;
	for(i = 10; i <= 99; i++)
	{
		Deck[i] = 0;//ʣ�µĿ�λ��0��ʾ
	}
	DrawNum = 5;//ÿ�غϳ�5����
	CanDraw = 1;
	FlameBarrier = 0;
	Berserk = 0;
	RampageTime = 0;
	FlameBarrier = 0;//FBЧ��
	Juggernaut = 0;//JuggernautЧ��
	Combust = 0;//CombustЧ��
	Evolve = 0;//EvolveЧ��
	Metallicize = 0;//MetallicizeЧ��
	Rage = 0;//RageЧ��
	RampageTime = 0;//Rampageʹ�ô���
	Rupture = 0;//RuptureЧ��
	Barricade = 0;//BarricadeЧ��
	Brutality = 0;//BrutalityЧ��
}


StateVariables::~StateVariables(void)
{
}


void StateVariables::draw(int drawnum)
{
	for(int i = 0; i < drawnum; i++)
	{
		Hand[HandPoint + i + 1] = DrawPile[DrawPoint - i];
		DrawPile[DrawPoint - i] = 0;
	}
	HandPoint = HandPoint + drawnum;
	DrawPoint = DrawPoint - drawnum;
};

void StateVariables::addToDrawPile(int cardnum)
{
	srand((unsigned int)(time(NULL)));
	int i = random(DrawPoint);
	int temp = i;
	for (; i < DrawPoint; i++)
	{
		DrawPile[i + 1] = DrawPile[i];
	}
	DrawPile[temp] = cardnum;
}