#include "GeneralFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UGeneralFunctionLibrary::UGeneralFunctionLibrary() {
}

void UGeneralFunctionLibrary::UpdateOverlaps(UPrimitiveComponent* PrimitiveComponent) {
}

void UGeneralFunctionLibrary::UnregisterSkeletalMeshComponentBudgeted(USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted) {
}

void UGeneralFunctionLibrary::UnRegisterComponent(USceneComponent* Component) {
}

void UGeneralFunctionLibrary::TryApplyBulletDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FHitResult HitResult, TSubclassOf<UDamageType> DamageType, AActor* DamageCauser, UIRRItemDefinition* NewDamageItemData) {
}

void UGeneralFunctionLibrary::ToggleLightComponent(ULightComponent* LightComponent, bool bEnable) {
}

void UGeneralFunctionLibrary::ToggleDynamicShadow(UMeshComponent* MeshComponent, bool bEnable) {
}

AActor* UGeneralFunctionLibrary::SpawnDeferredActor(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform Transform, AActor* Owner, APawn* Instigator) {
    return NULL;
}

void UGeneralFunctionLibrary::SetStringCVar(const FString& CVarName, const FString& Value) {
}

void UGeneralFunctionLibrary::SetIntegerCVar(const FString& CVarName, int32 Value) {
}

bool UGeneralFunctionLibrary::SetGameLanguage(const FString& Language, bool bSaveToConfig) {
    return false;
}

void UGeneralFunctionLibrary::SetForceMipMapStreaming(UMeshComponent* MeshComponent, bool bEnabled) {
}

void UGeneralFunctionLibrary::SetFloatCVar(const FString& CVarName, float Value) {
}

void UGeneralFunctionLibrary::SetFirstPersonSelfShadow(UPrimitiveComponent* Primitive, bool bSelfShadow) {
}

void UGeneralFunctionLibrary::SetCinematicCameraFOV(UCineCameraComponent* CineCameraComponent, float NewFOV) {
}

void UGeneralFunctionLibrary::SetActorSpatialLoaded(AActor* Actor, bool bSpatialLoaded) {
}

void UGeneralFunctionLibrary::SetActorFirstPersonSelfShadow(AActor* Actor, bool bSelfShadow) {
}

TArray<uint8> UGeneralFunctionLibrary::SerializeObjectArray(const TArray<UObject*>& ObjectArray) {
    return TArray<uint8>();
}

TArray<uint8> UGeneralFunctionLibrary::SerializeObject(UObject* Object) {
    return TArray<uint8>();
}

void UGeneralFunctionLibrary::RenameSocket(UStaticMesh* StaticMesh, USkeleton* Skeleton, FName OldName, FName NewName) {
}

bool UGeneralFunctionLibrary::RemoveCameraBlendable(const UObject* WorldContextObject, UObject* Blendable, float BlendTime) {
    return false;
}

void UGeneralFunctionLibrary::RemapAction(UInputMappingContext* MappingContext, UInputAction* Action, FKey OldKey, FKey NewKey, UInputAction* ChordedAction, float ActuationThreshold) {
}

void UGeneralFunctionLibrary::RegisterSkeletalMeshComponentBudgeted(USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted) {
}

void UGeneralFunctionLibrary::RegisterMainAudioDevice(const UObject* WorldContextObject) {
}

void UGeneralFunctionLibrary::RegisterComponent(USceneComponent* Component) {
}

void UGeneralFunctionLibrary::MarkRenderStateDirty(UMeshComponent* MeshComponent) {
}

UObject* UGeneralFunctionLibrary::LoadSoftObjectPtr(TSoftObjectPtr<UObject> SoftObjectPtr) {
    return NULL;
}

bool UGeneralFunctionLibrary::LoadedTextures(AActor* Actor) {
    return false;
}

bool UGeneralFunctionLibrary::IsSkeletalMeshComponentBudgetedRegistered(USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted) {
    return false;
}

bool UGeneralFunctionLibrary::IsShippingBuild() {
    return false;
}

bool UGeneralFunctionLibrary::IsOnlyTPSoundsEnabled(const UObject* WorldContextObject) {
    return false;
}

float UGeneralFunctionLibrary::IsOccluded(UWorld* World, const FVector& Location, float MaxTraceDistance, int32 HorizontalTraceSteps, int32 VerticalTraceSteps, TEnumAsByte<ECollisionChannel> TraceChannel, bool bDrawDebugLines) {
    return 0.0f;
}

bool UGeneralFunctionLibrary::IsLocalPlayerWeaponSoundsEnabled(const UObject* WorldContextObject) {
    return false;
}

bool UGeneralFunctionLibrary::IsLocallyPlayerControlled(AActor* Actor) {
    return false;
}

bool UGeneralFunctionLibrary::IsLocallyControlled(AActor* Actor) {
    return false;
}

bool UGeneralFunctionLibrary::IsGameplayTagContainerEmpty(FGameplayTagContainer TagContainer) {
    return false;
}

bool UGeneralFunctionLibrary::IsDLCOwned(int32 DLCAppID) {
    return false;
}

bool UGeneralFunctionLibrary::IsBulletDebugTracesEnabled(const UObject* WorldContextObject) {
    return false;
}

FText UGeneralFunctionLibrary::IntToTextWithLeadingZeros(int32 Value, int32 MinDigits) {
    return FText::GetEmpty();
}

FString UGeneralFunctionLibrary::GetStringAbbreviation(const FString& InString, int32 Length) {
    return TEXT("");
}

USpectatorComponent* UGeneralFunctionLibrary::GetSpectatorComponent(const UObject* WorldContextObject) {
    return NULL;
}

int32 UGeneralFunctionLibrary::GetRandomWeightedIndex(const TArray<float>& Weights) {
    return 0;
}

int32 UGeneralFunctionLibrary::GetRandomArrayIndex(int32 ArrayLength) {
    return 0;
}

FGameplayTag UGeneralFunctionLibrary::GetParentTag(FGameplayTag ChildTag) {
    return FGameplayTag{};
}

int32 UGeneralFunctionLibrary::GetNumberOfEditorPlayers() {
    return 0;
}

ULeanComponent* UGeneralFunctionLibrary::GetLeanComponent(const AActor* Actor) {
    return NULL;
}

FString UGeneralFunctionLibrary::GetLastStringFromTag(FGameplayTag Tag) {
    return TEXT("");
}

bool UGeneralFunctionLibrary::GetIsDefaultPlayerStart() {
    return false;
}

UHealthComponent* UGeneralFunctionLibrary::GetHealthComponent(AActor* Actor) {
    return NULL;
}

UGeneralSettings* UGeneralFunctionLibrary::GetGeneralSettings() {
    return NULL;
}

UGeneralGameInstance* UGeneralFunctionLibrary::GetGeneralGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

EKronosGameStateType UGeneralFunctionLibrary::GetGameStateType(const UObject* WorldContextObject) {
    return EKronosGameStateType::NONE;
}

FString UGeneralFunctionLibrary::GetGameLanguage() {
    return TEXT("");
}

AActor* UGeneralFunctionLibrary::GetDefaultActor(UBlueprint* LoadedBP) {
    return NULL;
}

UActorComponent* UGeneralFunctionLibrary::GetComponentFromClass(TSubclassOf<AActor> ActorClass, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

FGameplayTagContainer UGeneralFunctionLibrary::GetChildGameplayTags(FGameplayTag ParentTag, bool bDirectChildren) {
    return FGameplayTagContainer{};
}

void UGeneralFunctionLibrary::GetAvailableGameLanguages(TArray<FString>& Cultures, TArray<FText>& DisplayNames) {
}

void UGeneralFunctionLibrary::GenerateFoliageCollision(const UObject* WorldContextObject, UHierarchicalInstancedStaticMeshComponent* HSM) {
}

void UGeneralFunctionLibrary::ForceUnLoadTexture(AActor* Actor) {
}

void UGeneralFunctionLibrary::ForceTickPose(USkeletalMeshComponent* SkeletalMeshComponent) {
}

void UGeneralFunctionLibrary::ForceRefreshNavigationModifiers(UNavModifierComponent* ModifierComponent) {
}

void UGeneralFunctionLibrary::ForceLoadTexture(AActor* Actor) {
}

void UGeneralFunctionLibrary::ForceDestroyWidget(UUserWidget* Widget) {
}

AActor* UGeneralFunctionLibrary::FinishDeferredActor(AActor* DeferredActor, FTransform Transform) {
    return NULL;
}

AActor* UGeneralFunctionLibrary::FindClosestActorByPathOnly_FromArray(const UObject* WorldContextObject, AActor* StartActor, const TArray<AActor*>& CandidateActors, bool bAllowPartialPaths, float& OutBestPathLength) {
    return NULL;
}

void UGeneralFunctionLibrary::ExecuteExternalFile(const FString& DLCPath, bool bCloseMainGame) {
}

bool UGeneralFunctionLibrary::EnhancedRemoveGameplayTag(FGameplayTagContainer& Container, FGameplayTag Tag) {
    return false;
}

void UGeneralFunctionLibrary::EnableVirtualTextureStreaming(UTexture* Texture, bool bEnable) {
}

void UGeneralFunctionLibrary::DeserializeObjectArray(const TArray<uint8>& Data, TArray<UObject*>& OutObjectArray) {
}

void UGeneralFunctionLibrary::DeserializeObject(TArray<uint8> Data, UObject* Object) {
}

void UGeneralFunctionLibrary::DeleteAllSaveGames() {
}

FVector2D UGeneralFunctionLibrary::CustomWorldToScreenProjection(const FVector& WorldLocation, float FixedFOV, const UObject* WorldContextObject) {
    return FVector2D{};
}

UStaticMeshComponent* UGeneralFunctionLibrary::CreateStaticBulletMesh(USceneComponent* Parent, bool bHidden, FName ComponentName) {
    return NULL;
}

UInstancedStaticMeshComponent* UGeneralFunctionLibrary::CreateInstancedBulletMesh(USceneComponent* Parent, bool bHidden, FName ComponentName) {
    return NULL;
}

FString UGeneralFunctionLibrary::ConvertIntegerToCash(int32 CashAmount) {
    return TEXT("");
}

TArray<FGameplayTag> UGeneralFunctionLibrary::ConvertContainerToArray(FGameplayTagContainer Container) {
    return TArray<FGameplayTag>();
}

bool UGeneralFunctionLibrary::CheckSphereVisibility(const UObject* WorldContextObject, const FVector& ObserverLocation, const FVector& SphereCenter, float SphereRadius, int32 NumRays) {
    return false;
}

void UGeneralFunctionLibrary::AddViewOriginToStreaming(const FVector& ViewOrigin, float ScreenWidth, float FOV, float BoostFactor, bool bOverrideLocation, float Duration, AActor* ActorToBoost) {
}

void UGeneralFunctionLibrary::AddDefaultSockets(UStaticMesh* StaticMesh, USkeleton* Skeleton, TArray<FString> SocketNames, bool bRemoveOldSockets) {
}

bool UGeneralFunctionLibrary::AddCameraBlendable(const UObject* WorldContextObject, UObject* Blendable, float Weight, float BlendTime) {
    return false;
}


