#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ScriptableToolGroupSet.generated.h"

class UScriptableToolGroupTag;

USTRUCT(BlueprintType)
struct SCRIPTABLETOOLSFRAMEWORK_API FScriptableToolGroupSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UScriptableToolGroupTag>> Groups;
    
public:
    FScriptableToolGroupSet();
};

