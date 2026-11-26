#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "IndectisBPFunctionLibrary.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class INDECTIS_API UIndectisBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIndectisBPFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, float ConeLength, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorTraceSingleByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorTraceMultiByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorOverlapComponents(UObject* WorldContextObject, FVector Origin, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SectorOverlapActors(UObject* WorldContextObject, FVector Origin, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingTraceSingleForObjects(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingTraceSingleByProfile(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingTraceSingleByChannel(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingTraceMultiForObjects(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bUniqueHitsOnly, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingTraceMultiByProfile(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, bool bUniqueHitsOnly, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingTraceMultiByChannel(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingOverlapComponents(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RingOverlapActors(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeTraceSingleByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeTraceMultiByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeOverlapComponents(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConeOverlapActors(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingTraceSingleForObjects(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingTraceSingleByProfile(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingTraceSingleByChannel(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingTraceMultiForObjects(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingTraceMultiByProfile(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingTraceMultiByChannel(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingOverlapComponents(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxRingOverlapActors(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
};

