#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMetaHumanCharacterPaletteBuildQuality.h"
#include "MetaHumanCharacterAssembledDelegate.h"
#include "MetaHumanCharacterInstanceUpdatedDelegate.h"
#include "MetaHumanCharacterInstanceUpdated_UnicastDelegate.h"
#include "MetaHumanPaletteItemPath.h"
#include "MetaHumanPipelineSlotSelectionData.h"
#include "MetaHumanCharacterInstance.generated.h"

class UMetaHumanCollection;
class UMetaHumanCollectionPipeline;

UCLASS(Blueprintable)
class METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanCollectionPipeline* OverridePipelineInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInstancedStruct AssemblyOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMetaHumanPaletteItemPath, FInstancedPropertyBag> AssemblyInstanceParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMetaHumanPaletteItemPath, FInstancedStruct> AssemblyInstanceParameterContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMetaHumanPaletteItemPath, FInstancedPropertyBag> OverriddenInstanceParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanPipelineSlotSelectionData> SlotSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanCollection* Collection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterInstanceUpdated OnInstanceUpdated;
    
public:
    UMetaHumanCharacterInstance();

    UFUNCTION(BlueprintCallable)
    void UnregisterOnInstanceUpdated(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetMetaHumanCollection(UMetaHumanCollection* InCollection);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnInstanceUpdated(const FMetaHumanCharacterInstanceUpdated_Unicast& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMetaHumanCollection* GetMetaHumanCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInstancedStruct GetAssemblyOutput() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAssemblyOutput();
    
    UFUNCTION(BlueprintCallable)
    void Assemble(EMetaHumanCharacterPaletteBuildQuality Quality, const FMetaHumanCharacterAssembled& OnAssembled);
    
};

