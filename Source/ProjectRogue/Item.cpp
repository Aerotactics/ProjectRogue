#include "Item.h"

UItem::UItem()
{
}

UItem::~UItem()
{
}

void UItem::Init(const FString& InName, float InValue, const TArray<int32> InDiceFaces, const FString& InDescription)
{
    Name = FText::FromString(InName);
    Value = InValue;
    Description = FText::FromString(InDescription);
    DiceFaces = InDiceFaces;
    bConsumesSpace = true;
    SubType = EItemType::None;
}
