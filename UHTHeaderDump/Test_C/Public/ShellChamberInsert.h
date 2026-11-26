#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "ShellChamberInsert.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TEST_C_API UShellChamberInsert : public UAnimNotify {
    GENERATED_BODY()
public:
    UShellChamberInsert();

};

