#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ELightState.h"
#include "EMethodToUse.h"
#include "LightSourceData.h"
#include "OnLightStateChangedDelegate.h"
#include "LXRSourceComponent.generated.h"

class AActor;
class ULXRMethodObject;
class ULightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LXR_API ULXRSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSolo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLightSense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMemorizable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBroadcastStateChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationMultiplierToBeRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LXRMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LXRColorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LXRSenseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LXRSilhouetteMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightSourceData> LightLXRMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightSourceData> LightLXRColorMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> ExcludedLights;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMethodToUse IsEnabledMethodToUse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMethodToUse GetSourceActorStateMethodToUse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMethodToUse GetLightComponentStateMethodToUse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMethodToUse IsLightComponentEnabledMethodToUse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMethodToUse GetMyLightComponentsMethodToUse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMethodToUse IgnoreVisibilityActorsMethodToUse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMethodToUse LODDetectionMethodToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath LXRMethodObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DetectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreVisibilityActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> MyLightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MyOverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULXRMethodObject* MethodObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLightStateChanged OnLightStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLightStateChanged OnLightLodStateChanged;
    
public:
    ULXRSourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLightComponentEnabled(const ULightComponent* LightComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELightState GetLightState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELightState GetLightComponentState(const ULightComponent* InComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELightState GetIsLightLodEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetIgnoreVisibilityActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCombinedColorsByComponents(const TArray<ULightComponent*>& LightComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCombinedColorsByComponentIndices(const TArray<int32>& Indices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCombinedColors();
    
};

