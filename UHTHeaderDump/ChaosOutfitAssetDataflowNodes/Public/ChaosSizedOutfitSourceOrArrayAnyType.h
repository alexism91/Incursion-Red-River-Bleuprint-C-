#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAnyType -FallbackName=DataflowAnyType
#include "ChaosSizedOutfitSourceOrArrayType.h"
#include "ChaosSizedOutfitSourceOrArrayAnyType.generated.h"

USTRUCT(BlueprintType)
struct FChaosSizedOutfitSourceOrArrayAnyType : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosSizedOutfitSourceOrArrayType Value;
    
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosSizedOutfitSourceOrArrayAnyType();
};

