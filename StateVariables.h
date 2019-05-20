#pragma once
#include "OverAll.h"
#include "Enemy.h"

class StateVariables
{
public:
	StateVariables(void);
	~StateVariables(void);
	int HP;//����ֵ
	unsigned int HPMax;//����ֵ����
	unsigned int Energy;//����ֵ
	unsigned int EnergyMax;//����ֵ����
	int Block;//����
	int Strength;//����
	int StrengthUpTemp;//���غ����ӵ�����
	int Dexterity;//����
	int DexterityUpTemp;//���غ����ӵ�����
	unsigned int Gold;//���
	unsigned int Hand[10];//����
	unsigned int Deck[100];//�ƿ�
	unsigned int DrawNum;
	unsigned int DrawPile[100];//���ƶ�����
	unsigned int DiscardPile[100];
	unsigned int DrawPoint;//���ƶ�ָ��
	unsigned int DiscardPoint;//���ƶ�ָ��
	unsigned int HandPoint;//����ָ��
	int StrengthUp;//ÿ�غ���������
	int Vulnerable;//����
	int Weak;//����
	int Berserk;//�»غϿ�ʼ���Energy
	int Frail;//�Ƽ�
	float WeakCoefficient;//����ϵ��
	int CanDraw;//�Ƿ�ɼ�������
	int FlameBarrier;//FBЧ��
	int Juggernaut;//JuggernautЧ��
	int Combust;//CombustЧ��
	int Evolve;//EvolveЧ��
	int Metallicize;//MetallicizeЧ��
	int Rage;//RageЧ��
	int RampageTime;//Rampageʹ�ô���
	int Rupture;//RuptureЧ��
	int Barricade;//BarricadeЧ��
	int Brutality;//BrutalityЧ��

	void draw(int drawnum);
	void usecard(int cardnum, Enemy* target, int n);
	void addToDrawPile(int cardnum);

};
