#include "SenseSystemBPLibrary.h"

USenseSystemBPLibrary::USenseSystemBPLibrary() {
}

USenseStimulusBase* USenseSystemBPLibrary::GetStimulusFromActor_BP(const AActor* Actor) {
    return NULL;
}

USenseReceiverComponent* USenseSystemBPLibrary::GetReceiverFromActor_BP(const AActor* Actor) {
    return NULL;
}

TArray<FVector> USenseSystemBPLibrary::GetBoneLocations_BoneIDCache(const USkeletalMeshComponent* SkeletalMeshComponent, const FSkeletalBoneIDCache& SkeletalBoneIDCache, bool& bSuccess) {
    return TArray<FVector>();
}

void USenseSystemBPLibrary::ForceGarbageCollection() {
}

FSkeletalBoneIDCache USenseSystemBPLibrary::CreateBoneIDCache(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, bool& bSuccess) {
    return FSkeletalBoneIDCache{};
}

TArray<uint8> USenseSystemBPLibrary::BitFlag64_ToArray(const FBitFlag64_SenseSys& In) {
    return TArray<uint8>();
}


