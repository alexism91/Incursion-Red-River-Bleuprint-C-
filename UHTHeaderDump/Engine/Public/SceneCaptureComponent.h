#pragma once
#include "CoreMinimal.h"
#include "ESceneCapturePrimitiveRenderMode.h"
#include "ESceneCaptureSource.h"
#include "EngineShowFlagsSetting.h"
#include "SceneComponent.h"
#include "ViewLightingChannels.h"
#include "SceneCaptureComponent.generated.h"

class AActor;
class UMaterialParameterCollection;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USceneCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESceneCapturePrimitiveRenderMode PrimitiveRenderMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESceneCaptureSource> CaptureSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureEveryFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureOnMovement: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCaptureGpuNextRender: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDumpGpuNextRender: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExcludeFromSceneTextureExtents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysPersistRenderingState;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HiddenActors;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ShowOnlyActors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxViewDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureSortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRayTracingIfEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CollectionTransform;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectionTransformWorldToLocal;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectionTransformProjection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewLightingChannels ViewLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FEngineShowFlagsSetting> ShowFlagSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ProfilingEventName;
    
    USceneCaptureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowOnlyComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void ShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFlagSettings(const TArray<FEngineShowFlagsSetting>& InShowFlagSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureSortPriority(int32 NewCaptureSortPriority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable)
    void HideComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void HideActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEngineShowFlagsSetting> GetShowFlagSettings() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearShowOnlyComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearHiddenComponents();
    
};

