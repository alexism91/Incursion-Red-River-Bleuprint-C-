#pragma once
#include "CoreMinimal.h"
#include "EPCGStringMatchingOperator.h"
#include "EPCGTagFilterOperation.h"
#include "PCGSettings.h"
#include "PCGDeleteTagsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGDeleteTagsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGTagFilterOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGStringMatchingOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTokenizeOnWhiteSpace;
    
    UPCGDeleteTagsSettings();

};

