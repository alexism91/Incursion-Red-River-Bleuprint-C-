#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "SignificanceEntry.h"
#include "IRRSignificanceManagerSubsystem.generated.h"

UCLASS(Blueprintable)
class IRRSIGNIFICANCESYSTEM_API UIRRSignificanceManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSignificanceEntry> RegisteredEntries;
    
public:
    UIRRSignificanceManagerSubsystem();

};

