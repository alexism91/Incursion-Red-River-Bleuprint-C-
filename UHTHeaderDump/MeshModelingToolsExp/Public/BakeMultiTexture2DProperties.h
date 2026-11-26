#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeMultiTexture2DProperties.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> MaterialIDSourceTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UVLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UVLayerNamesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> AllSourceTextures;
    
    UBakeMultiTexture2DProperties();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetUVLayerNamesFunc() const;
    
};

