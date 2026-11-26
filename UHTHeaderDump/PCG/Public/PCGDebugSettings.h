#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGDebugSettings.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UPCGDebugSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPCGDebugSettings();

};

