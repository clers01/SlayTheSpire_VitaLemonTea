#pragma once
#include "StateVariables.h"

class Enemy
{
public:
	Enemy(int hp, unsigned int damage1, unsigned int attackTimes1 = 1, unsigned int damage2 = 0, unsigned int attackTimes2 = 0, unsigned int damage3 = 0, unsigned int attackTimes3 = 0);
	~Enemy(void);
	int EnemyHP;//怪物血量
	unsigned int EnemyBlock;//怪物护盾
	unsigned int Damage1;//怪物攻击方案1伤害
	unsigned int AttackTimes1;//怪物攻击方案1次数
	unsigned int Damage2;//怪物攻击方案2伤害
	unsigned int AttackTimes2;//怪物攻击方案2次数
	unsigned int Damage3;//怪物攻击方案3伤害
	unsigned int AttackTimes3;//怪物攻击方案3次数

	int Weak;//虚弱
	int State_Vulnerable;//易伤
	int State_Poison;//中毒
	int State_Ritual;//仪式：回合结束加攻
	unsigned int strength;//力量，攻击附加伤害

	void debuffWeak(int n, StateVariables* player);//上n层虚弱
	void debuffMucus(int n, StateVariables* player);//给粘液牌
	void debuffVulnerable(int n, StateVariables* player);//上n层易伤
	void buffRitual();//仪式效果
	void buffStrengthUp(unsigned int n);//加n力量
	void buffFrail(int n, StateVariables* player);//上n层破甲
};

