#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "EKronosSpecificSessionQueryType.h"
#include "KronosSpecificSessionQuery.generated.h"

USTRUCT(BlueprintType)
struct KRONOS_API FKronosSpecificSessionQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKronosSpecificSessionQueryType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniqueID;
    
    FKronosSpecificSessionQuery();
};

