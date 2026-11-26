#pragma once
#include "CoreMinimal.h"
#include "QueryActorData.generated.h"

class UQueryShapeComponent;
class UQuerySystemComponent;

USTRUCT(BlueprintType)
struct SPATIALQUERYSYSTEM_API FQueryActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuerySystemComponent* ShapeSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQueryShapeComponent*> ShapesComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    FQueryActorData();
};

