#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UVTexelDensityOperatorFactory.generated.h"

class UUVEditorTexelDensitySettings;

UCLASS(Blueprintable, MinimalAPI)
class UUVTexelDensityOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVEditorTexelDensitySettings* Settings;
    
    UUVTexelDensityOperatorFactory();

};

