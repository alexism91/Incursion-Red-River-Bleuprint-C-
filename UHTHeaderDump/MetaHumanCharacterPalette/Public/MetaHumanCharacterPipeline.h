#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanCharacterPipeline.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMetaHumanCharacterPipeline : public UObject {
    GENERATED_BODY()
public:
    UMetaHumanCharacterPipeline();

};

