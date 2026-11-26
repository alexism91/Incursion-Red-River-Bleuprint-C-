#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Cover.h"
#include "CoverHandle.h"
#include "CoverSystemUtils.generated.h"

class UBTNode;
class UBlackboardComponent;

UCLASS(Blueprintable)
class AICOVERSYSTEM_API UCoverSystemUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCoverSystemUtils();

    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsCover(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FCover Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCoverValid(const FCover& Cover);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCoverHandleValid(const FCoverHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCover GetValueAsCover(UBlackboardComponent* Target, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCover GetBlackboardValueAsCover(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
};

