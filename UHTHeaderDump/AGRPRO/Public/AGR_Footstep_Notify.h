#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AGR_Footstep_Notify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class AGRPRO_API UAGR_Footstep_Notify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootKey;
    
    UAGR_Footstep_Notify();

};

