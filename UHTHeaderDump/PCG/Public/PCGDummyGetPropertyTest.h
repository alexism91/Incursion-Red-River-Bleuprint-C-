#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGDummyGetPropertyTest.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NotPlaceable, Transient)
class UPCGDummyGetPropertyTest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Int64Property;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DoubleProperty;
    
    UPCGDummyGetPropertyTest();

};

