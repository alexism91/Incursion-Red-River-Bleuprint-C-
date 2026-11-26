#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptableToolGroupTag.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolGroupTag : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UScriptableToolGroupTag();

};

