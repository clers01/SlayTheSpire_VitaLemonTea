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
	Deck[0] = 0001;
	Deck[1] = 0001;
	Deck[2] = 0001;
	Deck[3] = 0001;
	Deck[4] = 0001;
	Deck[5] = 0003;
	Deck[6] = 0003;
	Deck[7] = 0003;
	Deck[8] = 0003;
	Deck[9] = 0002;//����ֻ��ʮ�ų�ʼ�Ƶ��ƿ�
	int i;
	for(i = 10; i <= 99; i++)
	{
		Deck[i] = 0000;//ʣ�µĿ�λ��0000��ʾ
	}
	DrawNum = 5;//ÿ�غϳ�5����

}


StateVariables::~StateVariables(void)
{
}


void StateVariables::draw(int drawnum)
{
	for(int i = 0; i < drawnum; i++)
	{
		Hand[HandPoint + i + 1] = DrawPile[DrawPoint - i];
		DrawPile[DrawPoint - i] = 0000;
	}
	HandPoint = HandPoint + drawnum;
	DrawPoint = DrawPoint - drawnum;
};