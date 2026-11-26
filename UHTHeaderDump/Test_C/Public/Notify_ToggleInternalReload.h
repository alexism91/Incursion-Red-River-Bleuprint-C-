#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Notify_ToggleInternalReload.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TEST_C_API UNotify_ToggleInternalReload : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStart;
    
    UNotify_ToggleInternalReload();

};

