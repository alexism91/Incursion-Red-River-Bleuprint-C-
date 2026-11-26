#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "MirrorAnimNodeReference.h"
#include "MirrorAnimLibrary.generated.h"

class UMirrorDataTable;

UCLASS(Blueprintable)
class UMirrorAnimLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMirrorAnimLibrary();

    UFUNCTION(BlueprintCallable)
    static FMirrorAnimNodeReference SetMirrorTransitionBlendTime(const FMirrorAnimNodeReference& MirrorNode, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    static FMirrorAnimNodeReference SetMirror(const FMirrorAnimNodeReference& MirrorNode, bool bInMirror);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMirrorTransitionBlendTime(const FMirrorAnimNodeReference& MirrorNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMirrorDataTable* GetMirrorDataTable(const FMirrorAnimNodeReference& MirrorNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMirror(const FMirrorAnimNodeReference& MirrorNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToMirrorNodePure(const FAnimNodeReference& Node, FMirrorAnimNodeReference& MirrorNode, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FMirrorAnimNodeReference ConvertToMirrorNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

