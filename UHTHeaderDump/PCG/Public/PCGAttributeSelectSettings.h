#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "EPCGAttributeSelectAxis.h"
#include "EPCGAttributeSelectOperation.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeSelectSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGAttributeSelectSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeSelectOperation Operation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeSelectAxis Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 CustomAxis;
    
    UPCGAttributeSelectSettings();

};

