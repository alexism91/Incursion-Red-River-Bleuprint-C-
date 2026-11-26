#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MetaHumanCharacterActorInterface.generated.h"

class UMetaHumanCharacterInstance;

UINTERFACE(Blueprintable)
class METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterActorInterface : public UInterface {
    GENERATED_BODY()
};

class METAHUMANCHARACTERPALETTE_API IMetaHumanCharacterActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterInstance(UMetaHumanCharacterInstance* CharacterInstance);
    
};

