#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=EBaseCreateFromSelectedTargetType -FallbackName=EBaseCreateFromSelectedTargetType
#include "CombineMeshesToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDuplicateMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBaseCreateFromSelectedTargetType OutputWriteTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputNewName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputExistingName;
    
    UCombineMeshesToolProperties();

};

