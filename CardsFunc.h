#pragma once
class CardsFunc
{
public:
	CardsFunc(void);
	~CardsFunc(void);
	unsigned int CardsNum;//卡牌编号
	unsigned int EnergyCost;//费用
	unsigned int EnergyCost_Up;//升级后费用
	int GainBlock;//获得护甲值
	int GainBlock_Up;//升级后获得护甲值
	int Damage;//造成伤害值
	int Damage_Up;//升级后造成伤害值
	int LevelUp;//是否已升级，1表示升级，0表示未升级
	

};

