#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "RigidBodyAnimNodeReference.h"
#include "AnimNodeRigidBodyLibrary.generated.h"

class UPhysicsAsset;

UCLASS(Blueprintable, MinimalAPI)
class UAnimNodeRigidBodyLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimNodeRigidBodyLibrary();

    UFUNCTION(BlueprintCallable)
    static FRigidBodyAnimNodeReference SetOverridePhysicsAsset(const FRigidBodyAnimNodeReference& Node, UPhysicsAsset* PhysicsAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToRigidBodyAnimNodePure(const FAnimNodeReference& Node, FRigidBodyAnimNodeReference& RigidBodyAnimNode, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FRigidBodyAnimNodeReference ConvertToRigidBodyAnimNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

