#include "IndectisBPFunctionLibrary.h"

UIndectisBPFunctionLibrary::UIndectisBPFunctionLibrary() {
}

bool UIndectisBPFunctionLibrary::SectorTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::SectorTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, float ConeLength, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::SectorTraceSingleByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::SectorTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::SectorTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::SectorTraceMultiByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::SectorOverlapComponents(UObject* WorldContextObject, FVector Origin, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UIndectisBPFunctionLibrary::SectorOverlapActors(UObject* WorldContextObject, FVector Origin, FRotator Direction, float AngleDegrees, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingTraceSingleForObjects(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingTraceSingleByProfile(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingTraceSingleByChannel(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingTraceMultiForObjects(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bUniqueHitsOnly, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingTraceMultiByProfile(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, bool bUniqueHitsOnly, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingTraceMultiByChannel(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingOverlapComponents(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UIndectisBPFunctionLibrary::RingOverlapActors(UObject* WorldContextObject, FVector Origin, float InnerRadius, float OuterRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeTraceSingleByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeTraceMultiByChannel(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeOverlapComponents(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UIndectisBPFunctionLibrary::ConeOverlapActors(UObject* WorldContextObject, FVector Start, FRotator Direction, float AngleDegrees, float ConeLength, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingTraceSingleForObjects(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, FHitResult& OutHit, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingTraceSingleByProfile(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, FHitResult& OutHit, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingTraceSingleByChannel(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, FHitResult& OutHit, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingTraceMultiForObjects(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, TArray<FHitResult>& OutHits, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingTraceMultiByProfile(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, TArray<FHitResult>& OutHits, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingTraceMultiByChannel(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, TArray<FHitResult>& OutHits, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, bool bUniqueHitsOnly, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingOverlapComponents(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UIndectisBPFunctionLibrary::BoxRingOverlapActors(UObject* WorldContextObject, FVector Origin, FVector OuterExtents, FVector InnerExtents, FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}


