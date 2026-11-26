#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PCGPoint.h"
#include "PCGFunctionPrototypes.generated.h"

class UPCGMetadata;

UCLASS(Blueprintable, MinimalAPI)
class UPCGFunctionPrototypes : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGFunctionPrototypes();

private:
    UFUNCTION(BlueprintCallable)
    void PrototypeWithPointAndMetadata(FPCGPoint Point, const UPCGMetadata* MetaData);
    
    UFUNCTION(BlueprintCallable)
    void PrototypeWithNoParams();
    
};

