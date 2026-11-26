#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PolygroupLayersProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolygroupLayersProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveGroupLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GroupLayersList;
    
    UPolygroupLayersProperties();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetGroupLayersFunc();
    
};

