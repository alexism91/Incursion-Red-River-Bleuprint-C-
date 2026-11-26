#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "RuntimeNavConvexPolygon.h"
#include "RuntimeNavMeshSimpleCollisionList.h"
#include "Templates/SubclassOf.h"
#include "RuntimeNavDataComponent.generated.h"

class UNavArea;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RUNTIMENAVAREAMODIFIERS_API URuntimeNavDataComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> LimitToSpecificAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeNavConvexPolygon> ConvexPolygons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FRuntimeNavMeshSimpleCollisionList> SimpleCollisionInstances;
    
    URuntimeNavDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateBoxBounds();
    
};

