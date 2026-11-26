#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EAlignObjectsAlignToOptions.h"
#include "EAlignObjectsAlignTypes.h"
#include "EAlignObjectsBoxPoint.h"
#include "AlignObjectsToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlignObjectsAlignTypes AlignType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlignObjectsAlignToOptions AlignTo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlignObjectsBoxPoint BoxPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignZ;
    
    UAlignObjectsToolProperties();

};

