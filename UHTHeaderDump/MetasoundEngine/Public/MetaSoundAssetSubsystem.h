#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MetaSoundAssetDirectory.h"
#include "MetaSoundAssetSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMetaSoundAssetSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UMetaSoundAssetSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
    
};

