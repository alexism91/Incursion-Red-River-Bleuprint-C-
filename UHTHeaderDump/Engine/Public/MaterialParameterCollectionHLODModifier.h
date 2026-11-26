#pragma once
#include "CoreMinimal.h"
#include "HLODModifierScalarParameter.h"
#include "WorldPartitionHLODModifier.h"
#include "MaterialParameterCollectionHLODModifier.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UMaterialParameterCollectionHLODModifier : public UWorldPartitionHLODModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHLODModifierScalarParameter> ScalarParameters;
    
    UMaterialParameterCollectionHLODModifier();

};

