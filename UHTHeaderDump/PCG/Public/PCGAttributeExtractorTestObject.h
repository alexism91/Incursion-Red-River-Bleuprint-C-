#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGAttributeExtractorTestObject.generated.h"

UCLASS(Blueprintable)
class UPCGAttributeExtractorTestObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DoubleValue;
    
    UPCGAttributeExtractorTestObject();

};

