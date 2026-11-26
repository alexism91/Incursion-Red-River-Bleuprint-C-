#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintGeneratedClass -FallbackName=BlueprintGeneratedClass
#include "MVVMInstancedViewModelGeneratedClass.generated.h"

class UFunction;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMInstancedViewModelGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFunction*> OnRepFunctionToLink;
    
public:
    UMVVMInstancedViewModelGeneratedClass();

};

