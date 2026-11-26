#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGGetSplineControlPointsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetSplineControlPointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArriveTangentAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeaveTangentAttributeName;
    
    UPCGGetSplineControlPointsSettings();

};

