#pragma once
#include "CoreMinimal.h"
#include "PCGControlFlowSettings.h"
#include "PCGBranchSettings.generated.h"

UCLASS(Blueprintable)
class UPCGBranchSettings : public UPCGControlFlowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputToB;
    
    UPCGBranchSettings();

};

