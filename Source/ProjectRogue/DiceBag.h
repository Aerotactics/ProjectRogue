// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceBag.generated.h"

/**
 * A static dice-rolling class
 * by Michael McCluskey and Thomas Jensen
 */
 UCLASS(Blueprintable)
class PROJECTROGUE_API UDiceBag : public UObject
{
	GENERATED_BODY()
public:
    UDiceBag();
    ~UDiceBag();

    static int32 Roll(const TArray<int32>& Faces);
    static int32 Roll(int32 NumberOfDice, int32 Face);
};
