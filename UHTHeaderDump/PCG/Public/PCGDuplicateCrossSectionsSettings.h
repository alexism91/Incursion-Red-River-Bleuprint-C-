#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSubdivisionBaseSettings.h"
#include "PCGDuplicateCrossSectionsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGDuplicateCrossSectionsSettings : public UPCGSubdivisionBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtrudeVectorAsAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExtrudeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector ExtrudeVectorAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputSplineIndexAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineIndexAttributeName;
    
    UPCGDuplicateCrossSectionsSettings();

};

