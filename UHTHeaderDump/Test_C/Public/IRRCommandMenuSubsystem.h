#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IRRCommandMenuEntry.h"
#include "IRRCommandMenuSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRCommandMenuSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRCommandMenuEntry> CachedEntries;
    
public:
    UIRRCommandMenuSubsystem();

};

