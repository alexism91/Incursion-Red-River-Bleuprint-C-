#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "EAutoBlendOption.h"
#include "AutoBlendUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MESHBLEND_API UAutoBlendUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoBlendOption> AutoBlendOption;
    
    UAutoBlendUserData();

};

