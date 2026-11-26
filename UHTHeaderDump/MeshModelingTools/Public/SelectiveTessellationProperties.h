#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDisplaceMeshToolTriangleSelectionType.h"
#include "SelectiveTessellationProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USelectiveTessellationProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplaceMeshToolTriangleSelectionType SelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MaterialIDList;
    
    USelectiveTessellationProperties();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetMaterialIDsFunc();
    
};

