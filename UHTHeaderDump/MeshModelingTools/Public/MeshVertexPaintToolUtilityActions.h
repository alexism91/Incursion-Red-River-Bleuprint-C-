#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=ModelingToolsColorChannelFilter -FallbackName=ModelingToolsColorChannelFilter
#include "EMeshVertexPaintColorChannel.h"
#include "EMeshVertexPaintToolUtilityOperations.h"
#include "MeshVertexPaintToolActionPropertySet.h"
#include "MeshVertexPaintToolUtilityActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshVertexPaintToolUtilityActions : public UMeshVertexPaintToolActionPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshVertexPaintToolUtilityOperations Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshVertexPaintColorChannel SourceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeightMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WeightMapsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModelingToolsColorChannelFilter TargetChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshVertexPaintColorChannel TargetChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyToHiRes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CopyToLODName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LODNamesList;
    
    UMeshVertexPaintToolUtilityActions();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetWeightMapsFunc();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetLODNamesFunc() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySelectedOperation();
    
};

