#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioEngineSubsystem -FallbackName=AudioEngineSubsystem
#include "MetaSoundCacheSubsystem.generated.h"

class UMetaSoundSource;

UCLASS(Blueprintable, MinimalAPI)
class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem {
    GENERATED_BODY()
public:
    UMetaSoundCacheSubsystem();

    UFUNCTION(BlueprintCallable)
    void TouchOrPrecacheMetaSound(UMetaSoundSource* InMetaSound, int32 InNumInstances);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCachedOperatorsForMetaSound(UMetaSoundSource* InMetaSound);
    
    UFUNCTION(BlueprintCallable)
    void PrecacheMetaSound(UMetaSoundSource* InMetaSound, int32 InNumInstances);
    
};

