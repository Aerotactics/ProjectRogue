// Fill out your copyright notice in the Description page of Project Settings.


#include "Armor.h"
#include "Adventurer.h"

UArmor::UArmor()
{
	SetType(EItemType::Armor);
}

UArmor::~UArmor()
{
}

void UArmor::OnUse(UAdventurer* Adventurer, int32 InventoryIndex)
{
	Adventurer->EquipItem(InventoryIndex);
}

int32 UArmor::GetProtection()
{
	return UDiceBag::Roll(DiceFaces);
}
