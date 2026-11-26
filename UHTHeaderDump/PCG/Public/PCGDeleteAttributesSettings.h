#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeFilterOperation.h"
#include "EPCGStringMatchingOperator.h"
#include "PCGSettings.h"
#include "PCGDeleteAttributesSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGDeleteAttributesSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributeFilterOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGStringMatchingOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTokenizeOnWhiteSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetadataDomain;
    
    UPCGDeleteAttributesSettings();

};

