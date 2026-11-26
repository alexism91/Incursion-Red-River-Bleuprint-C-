#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshUVChannelProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshUVChannelProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UVChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UVChannelNamesList;
    
    UMeshUVChannelProperties();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetUVChannelNamesFunc() const;
    
};

