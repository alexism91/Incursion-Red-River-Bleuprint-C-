#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IRRSpawnMenuEntry.h"
#include "IRRSpawnMenuSubsystem.generated.h"

class UIRRSpawnMenuProvider;

UCLASS(Blueprintable)
class TEST_C_API UIRRSpawnMenuSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRSpawnMenuProvider*> Providers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRSpawnMenuEntry> CachedEntries;
    
public:
    UIRRSpawnMenuSubsystem();

};

