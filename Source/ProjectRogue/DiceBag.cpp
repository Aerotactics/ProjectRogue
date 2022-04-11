// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceBag.h"

UDiceBag::UDiceBag()
{
}

UDiceBag::~UDiceBag()
{
}

int32 UDiceBag::Roll(const TArray<int32>& Faces)
{
    int32 Total = 0;
    for (int32 i = 0; i < Faces.Num(); ++i)
    {
        check(Faces[i] > 0);

        if (Faces[i] == 1)
        {
            Total += 1;
            continue;
        }

        Total += FMath::RandRange(1, Faces[i]);;
    }
    return Total;
}

int32 UDiceBag::Roll(int32 NumOfDice, int32 Face)
{
    TArray<int32> Dice;
    Dice.Init(Face, NumOfDice);
    return Roll(Dice);
}
