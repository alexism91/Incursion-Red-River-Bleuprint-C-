#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeTexture2DProperties.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeTexture2DProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SourceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UVLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UVLayerNamesList;
    
    UBakeTexture2DProperties();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetUVLayerNamesFunc() const;
    
};

