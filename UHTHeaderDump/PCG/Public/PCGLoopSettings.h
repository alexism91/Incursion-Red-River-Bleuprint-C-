#pragma once
#include "CoreMinimal.h"
#include "PCGSubgraphSettings.h"
#include "PCGLoopSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGLoopSettings : public UPCGSubgraphSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGraphDefaultPinUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoopPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FeedbackPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTokenizeOnWhiteSpace;
    
    UPCGLoopSettings();

};

