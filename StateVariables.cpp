#include "StateVariables.h"


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
	Deck[9] = 2;//生成只有十张初始牌的牌库
	int i;
	for(i = 10; i <= 99; i++)
	{
		Deck[i] = 0;//剩下的空位用0表示
	}
	DrawNum = 5;//每回合抽5张牌
	CanDraw = 1;
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