#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector2 -FallbackName=IntVector2
#include "MetasoundCommentNodeIntVector.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundCommentNodeIntVector : public FIntVector2 {
    GENERATED_BODY()
public:
    METASOUNDFRONTEND_API FMetasoundCommentNodeIntVector();
};

