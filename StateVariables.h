#pragma once
#include "OverAll.h"

class StateVariables
{
public:
	StateVariables(void);
	~StateVariables(void);
	unsigned int HP;//生命值
	unsigned int HPMax;//生命值上限
	unsigned int Energy;//法力值
	unsigned int EnergyMax;//法力值上限
	unsigned int Block;
	int Strength;//力量
	int StrengthUp;//回合结束减少力量
	int Dexterity;//敏捷
	int DexterityUp;//回合结束减少敏捷
	unsigned int Gold;//金币
	unsigned int Hand[10];//手牌
	unsigned int Deck[100];//牌库
	unsigned int DrawNum;
	unsigned int DrawPile[100];//抽牌堆数组
	unsigned int DiscardPile[100];
	unsigned int DrawPoint;//抽牌堆指针
	unsigned int DiscardPoint;//弃牌堆指针
	unsigned int HandPoint;//手牌指针
	int Vulnerable;//易伤
	int Weak;//虚弱
	int Berserk;//下回合开始获得Energy
	int Frail;//破甲

	void draw(int drawnum);

};

StateVariables* player = new StateVariables();
