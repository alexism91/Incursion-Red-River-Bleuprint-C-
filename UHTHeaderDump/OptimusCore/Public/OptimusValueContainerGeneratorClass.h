#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Class -FallbackName=Class
#include "OptimusDataTypeRef.h"
#include "OptimusValueContainerGeneratorClass.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusValueContainerGeneratorClass : public UClass {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
public:
    UOptimusValueContainerGeneratorClass();

};

