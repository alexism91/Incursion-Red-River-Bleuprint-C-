#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptableToolTargetRequirements.generated.h"

class UScriptableToolTargetRequirements;

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolTargetRequirements : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMatchingTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMatchingTargets;
    
    UScriptableToolTargetRequirements();

    UFUNCTION(BlueprintCallable)
    static UScriptableToolTargetRequirements* BuildToolTargetRequirements(TArray<UClass*> RequirementInterfaces);
    
};

