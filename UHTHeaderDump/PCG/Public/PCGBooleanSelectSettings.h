#pragma once
#include "CoreMinimal.h"
#include "PCGControlFlowSettings.h"
#include "PCGBooleanSelectSettings.generated.h"

UCLASS(Blueprintable)
class UPCGBooleanSelectSettings : public UPCGControlFlowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInputB;
    
    UPCGBooleanSelectSettings();

};

