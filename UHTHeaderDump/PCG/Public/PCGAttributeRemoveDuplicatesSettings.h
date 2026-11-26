#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGAttributeRemoveDuplicatesSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGAttributeRemoveDuplicatesSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGAttributePropertyInputSelector> AttributeSelectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttributeNamesToRemoveDuplicates;
    
    UPCGAttributeRemoveDuplicatesSettings();

};

