#pragma once
#include "CoreMinimal.h"
#include "EPCGSplitAxis.h"
#include "PCGSettings.h"
#include "PCGSplitPointsSettings.generated.h"

UCLASS(Blueprintable)
class UPCGSplitPointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplitPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSplitAxis SplitAxis;
    
    UPCGSplitPointsSettings();

};

