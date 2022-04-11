// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Kismet/GameplayStatics.h"
#include "Adventurer.h"

UWeapon::UWeapon()
	: Range(100) // default range is 100 for melee weapons
{
	SetType(EItemType::Weapon);
}

UWeapon::~UWeapon()
{
}

void UWeapon::OnUse(UAdventurer* Adventurer, int32 InventoryIndex)
{
	Adventurer->EquipItem(InventoryIndex);
}

int32 UWeapon::GetDamage()
{
	return UDiceBag::Roll(DiceFaces);
}
