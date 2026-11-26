#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Kronos -ObjectName=EKronosGameStateType -FallbackName=EKronosGameStateType
#include "Templates/SubclassOf.h"
#include "GeneralFunctionLibrary.generated.h"

class AActor;
class AController;
class APawn;
class UActorComponent;
class UBlueprint;
class UCineCameraComponent;
class UDamageType;
class UGeneralGameInstance;
class UGeneralSettings;
class UHealthComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UIRRItemDefinition;
class UInputAction;
class UInputMappingContext;
class UInstancedStaticMeshComponent;
class ULeanComponent;
class ULightComponent;
class UMeshComponent;
class UNavModifierComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;
class USkeleton;
class USpectatorComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable)
class TEST_C_API UGeneralFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeneralFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateOverlaps(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterSkeletalMeshComponentBudgeted(USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted);
    
    UFUNCTION(BlueprintCallable)
    static void UnRegisterComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void TryApplyBulletDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FHitResult HitResult, TSubclassOf<UDamageType> DamageType, AActor* DamageCauser, UIRRItemDefinition* NewDamageItemData);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleLightComponent(ULightComponent* LightComponent, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleDynamicShadow(UMeshComponent* MeshComponent, bool bEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnDeferredActor(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform Transform, AActor* Owner, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringCVar(const FString& CVarName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntegerCVar(const FString& CVarName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGameLanguage(const FString& Language, bool bSaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipMapStreaming(UMeshComponent* MeshComponent, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatCVar(const FString& CVarName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFirstPersonSelfShadow(UPrimitiveComponent* Primitive, bool bSelfShadow);
    
    UFUNCTION(BlueprintCallable)
    static void SetCinematicCameraFOV(UCineCameraComponent* CineCameraComponent, float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorSpatialLoaded(AActor* Actor, bool bSpatialLoaded);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorFirstPersonSelfShadow(AActor* Actor, bool bSelfShadow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> SerializeObjectArray(const TArray<UObject*>& ObjectArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> SerializeObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void RenameSocket(UStaticMesh* StaticMesh, USkeleton* Skeleton, FName OldName, FName NewName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemoveCameraBlendable(const UObject* WorldContextObject, UObject* Blendable, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    static void RemapAction(UInputMappingContext* MappingContext, UInputAction* Action, FKey OldKey, FKey NewKey, UInputAction* ChordedAction, float ActuationThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterSkeletalMeshComponentBudgeted(USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterMainAudioDevice(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void MarkRenderStateDirty(UMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadSoftObjectPtr(TSoftObjectPtr<UObject> SoftObjectPtr);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadedTextures(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkeletalMeshComponentBudgetedRegistered(USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsOnlyTPSoundsEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float IsOccluded(UWorld* World, const FVector& Location, float MaxTraceDistance, int32 HorizontalTraceSteps, int32 VerticalTraceSteps, TEnumAsByte<ECollisionChannel> TraceChannel, bool bDrawDebugLines);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalPlayerWeaponSoundsEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocallyPlayerControlled(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocallyControlled(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameplayTagContainerEmpty(FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDLCOwned(int32 DLCAppID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsBulletDebugTracesEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FText IntToTextWithLeadingZeros(int32 Value, int32 MinDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringAbbreviation(const FString& InString, int32 Length);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpectatorComponent* GetSpectatorComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandomWeightedIndex(const TArray<float>& Weights);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandomArrayIndex(int32 ArrayLength);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetParentTag(FGameplayTag ChildTag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumberOfEditorPlayers();
    
    UFUNCTION(BlueprintCallable)
    static ULeanComponent* GetLeanComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLastStringFromTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsDefaultPlayerStart();
    
    UFUNCTION(BlueprintCallable)
    static UHealthComponent* GetHealthComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UGeneralSettings* GetGeneralSettings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGeneralGameInstance* GetGeneralGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EKronosGameStateType GetGameStateType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameLanguage();
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetDefaultActor(UBlueprint* LoadedBP);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetComponentFromClass(TSubclassOf<AActor> ActorClass, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetChildGameplayTags(FGameplayTag ParentTag, bool bDirectChildren);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAvailableGameLanguages(TArray<FString>& Cultures, TArray<FText>& DisplayNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GenerateFoliageCollision(const UObject* WorldContextObject, UHierarchicalInstancedStaticMeshComponent* HSM);
    
    UFUNCTION(BlueprintCallable)
    static void ForceUnLoadTexture(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ForceTickPose(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ForceRefreshNavigationModifiers(UNavModifierComponent* ModifierComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ForceLoadTexture(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ForceDestroyWidget(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FinishDeferredActor(AActor* DeferredActor, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* FindClosestActorByPathOnly_FromArray(const UObject* WorldContextObject, AActor* StartActor, const TArray<AActor*>& CandidateActors, bool bAllowPartialPaths, float& OutBestPathLength);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteExternalFile(const FString& DLCPath, bool bCloseMainGame);
    
    UFUNCTION(BlueprintCallable)
    static bool EnhancedRemoveGameplayTag(FGameplayTagContainer& Container, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static void EnableVirtualTextureStreaming(UTexture* Texture, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void DeserializeObjectArray(const TArray<uint8>& Data, TArray<UObject*>& OutObjectArray);
    
    UFUNCTION(BlueprintCallable)
    static void DeserializeObject(TArray<uint8> Data, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteAllSaveGames();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector2D CustomWorldToScreenProjection(const FVector& WorldLocation, float FixedFOV, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UStaticMeshComponent* CreateStaticBulletMesh(USceneComponent* Parent, bool bHidden, FName ComponentName);
    
    UFUNCTION(BlueprintCallable)
    static UInstancedStaticMeshComponent* CreateInstancedBulletMesh(USceneComponent* Parent, bool bHidden, FName ComponentName);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertIntegerToCash(int32 CashAmount);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> ConvertContainerToArray(FGameplayTagContainer Container);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckSphereVisibility(const UObject* WorldContextObject, const FVector& ObserverLocation, const FVector& SphereCenter, float SphereRadius, int32 NumRays);
    
    UFUNCTION(BlueprintCallable)
    static void AddViewOriginToStreaming(const FVector& ViewOrigin, float ScreenWidth, float FOV, float BoostFactor, bool bOverrideLocation, float Duration, AActor* ActorToBoost);
    
    UFUNCTION(BlueprintCallable)
    static void AddDefaultSockets(UStaticMesh* StaticMesh, USkeleton* Skeleton, TArray<FString> SocketNames, bool bRemoveOldSockets);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddCameraBlendable(const UObject* WorldContextObject, UObject* Blendable, float Weight, float BlendTime);
    
};

