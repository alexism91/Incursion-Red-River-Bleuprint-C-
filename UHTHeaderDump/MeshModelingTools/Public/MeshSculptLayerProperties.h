#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshSculptLayerProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMeshSculptLayerProperties : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveLayer;
    
    UPROPERTY(EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TArray<double> LayerWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditLayers;
    
    UMeshSculptLayerProperties();

    UFUNCTION(BlueprintCallable)
    void RemoveLayer();
    
    UFUNCTION(BlueprintCallable)
    void AddLayer();
    
};

