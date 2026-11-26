#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryCollectionBlueprintLibrary.generated.h"

class UGeometryCollectionComponent;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryCollectionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryCollectionBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetISMPoolCustomInstanceData(UGeometryCollectionComponent* GeometryCollectionComponent, int32 CustomDataIndex, float CustomDataValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomInstanceDataByName(UGeometryCollectionComponent* GeometryCollectionComponent, FName CustomDataName, float CustomDataValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomInstanceDataByIndex(UGeometryCollectionComponent* GeometryCollectionComponent, int32 CustomDataIndex, float CustomDataValue);
    
};

