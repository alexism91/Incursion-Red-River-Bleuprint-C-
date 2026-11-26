#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "PCGVolume.generated.h"

class UPCGComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class APCGVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGComponent* PCGComponent;
    
    APCGVolume(const FObjectInitializer& ObjectInitializer);

};

