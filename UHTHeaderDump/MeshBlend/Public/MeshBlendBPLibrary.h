#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAutoBlendOption.h"
#include "MeshBlendBPLibrary.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable)
class MESHBLEND_API UMeshBlendBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshBlendBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetBlendUserDataOnMesh(UStaticMesh* Mesh, TEnumAsByte<EAutoBlendOption> NewBlendOption);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlendOptionOnActor(AActor* Actor, TEnumAsByte<EAutoBlendOption> NewBlendOption);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshBlendOnActor(AActor* Actor, bool bSoftReset);
    
    UFUNCTION(BlueprintCallable)
    static void DisableBlendOnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBlendUserDataFromMesh(UStaticMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBlendOptionFromActor(AActor* Actor);
    
};

