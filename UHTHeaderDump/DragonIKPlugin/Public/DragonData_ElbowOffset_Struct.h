#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DragonData_ElbowOffset_Struct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_ElbowOffset_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> elbow_offset_array;
    
    DRAGONIKPLUGIN_API FDragonData_ElbowOffset_Struct();
};

