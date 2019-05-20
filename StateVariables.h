#pragma once
#include "OverAll.h"
#include "Enemy.h"

class StateVariables
{
public:
	StateVariables(void);
	~StateVariables(void);
	int HP;//生命值
	unsigned int HPMax;//生命值上限
	unsigned int Energy;//法力值
	unsigned int EnergyMax;//法力值上限
	int Block;//护盾
	int Strength;//力量
	int StrengthUpTemp;//单回合增加的力量
	int Dexterity;//敏捷
	int DexterityUpTemp;//单回合增加的敏捷
	unsigned int Gold;//金币
	unsigned int Hand[10];//手牌
	unsigned int Deck[100];//牌库
	unsigned int DrawNum;
	unsigned int DrawPile[100];//抽牌堆数组
	unsigned int DiscardPile[100];
	unsigned int DrawPoint;//抽牌堆指针
	unsigned int DiscardPoint;//弃牌堆指针
	unsigned int HandPoint;//手牌指针
	int StrengthUp;//每回合增加力量
	int Vulnerable;//易伤
	int Weak;//虚弱
	int Berserk;//下回合开始获得Energy
	int Frail;//破甲
	float WeakCoefficient;//虚弱系数
	int CanDraw;//是否可继续摸牌
	int FlameBarrier;//FB效果
	int Juggernaut;//Juggernaut效果
	int Combust;//Combust效果
	int Evolve;//Evolve效果
	int Metallicize;//Metallicize效果
	int Rage;//Rage效果
	int RampageTime;//Rampage使用次数
	int Rupture;//Rupture效果
	int Barricade;//Barricade效果
	int Brutality;//Brutality效果

	void draw(int drawnum);
	void usecard(int cardnum, Enemy* target, int n);
	void addToDrawPile(int cardnum);

};
