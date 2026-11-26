#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EHoleFillOpFillType -FallbackName=EHoleFillOpFillType
#include "HoleFillToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UHoleFillToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoleFillOpFillType FillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveIsolatedTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuickFillSmallHoles;
    
    UHoleFillToolProperties();

};

