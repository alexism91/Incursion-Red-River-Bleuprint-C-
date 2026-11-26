#pragma once
#include "CoreMinimal.h"
#include "VertexLayout.generated.h"

USTRUCT(BlueprintType)
struct FVertexLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Normal;
    
    RIGLOGICMODULE_API FVertexLayout();
};

