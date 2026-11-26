#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SensorTagSettings.h"
#include "SenseSysSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SENSESYSTEM_API USenseSysSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSensorTagSettings> SensorTagSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountPerOneCyclesUpdate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeBetweenCyclesUpdate;
    
    USenseSysSettings();

};

