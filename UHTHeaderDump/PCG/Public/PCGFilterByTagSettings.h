#pragma once
#include "CoreMinimal.h"
#include "EPCGFilterByTagOperation.h"
#include "EPCGStringMatchingOperator.h"
#include "PCGFilterDataBaseSettings.h"
#include "PCGFilterByTagSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGFilterByTagSettings : public UPCGFilterDataBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGFilterByTagOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGStringMatchingOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTokenizeOnWhiteSpace;
    
    UPCGFilterByTagSettings();

};

