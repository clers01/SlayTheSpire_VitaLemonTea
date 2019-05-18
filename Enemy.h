#pragma once
#include "StateVariables.h"

class Enemy
{
public:
	Enemy(int hp, unsigned int damage1, unsigned int attackTimes1 = 1, unsigned int damage2 = 0, unsigned int attackTimes2 = 0, unsigned int damage3 = 0, unsigned int attackTimes3 = 0);
	~Enemy(void);
	int EnemyHP;//����Ѫ��
	unsigned int EnemyBlock;//���ﻤ��
	unsigned int Damage1;//���﹥������1�˺�
	unsigned int AttackTimes1;//���﹥������1����
	unsigned int Damage2;//���﹥������2�˺�
	unsigned int AttackTimes2;//���﹥������2����
	unsigned int Damage3;//���﹥������3�˺�
	unsigned int AttackTimes3;//���﹥������3����

	int Weak;//����
	int State_Vulnerable;//����
	int State_Poison;//�ж�
	int State_Ritual;//��ʽ���غϽ����ӹ�
	unsigned int strength;//���������������˺�

	void debuffWeak(int n, StateVariables* player);//��n������
	void debuffMucus(int n, StateVariables* player);//��ճҺ��
	void debuffVulnerable(int n, StateVariables* player);//��n������
	void buffRitual();//��ʽЧ��
	void buffStrengthUp(unsigned int n);//��n����
	void buffFrail(int n, StateVariables* player);//��n���Ƽ�
};

