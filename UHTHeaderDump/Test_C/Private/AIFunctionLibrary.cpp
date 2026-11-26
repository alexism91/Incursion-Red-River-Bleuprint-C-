#include "AIFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UAIFunctionLibrary::UAIFunctionLibrary() {
}

void UAIFunctionLibrary::ThrowGrenade_AI(AActor* Grenade, ACharacter* Instigator, const FVector& PredictedLocation) {
}

AController* UAIFunctionLibrary::SpawnAndPossessController(UObject* WorldContextObject, TSubclassOf<AController> SpecificControllerClass, APawn* Pawn) {
    return NULL;
}

bool UAIFunctionLibrary::ObjectHasGameplayTags(const UObject* Object, const FGameplayTagContainer& Tags, bool bRequireAll) {
    return false;
}

void UAIFunctionLibrary::GrenadeExploded_AI(AActor* Grenade, ACharacter* Instigator) {
}

FCover UAIFunctionLibrary::GetWorldStateValueAsCover(UHTNNode* Node, const FBlackboardKeySelector& Key) {
    return FCover{};
}

ECoverAimDirection UAIFunctionLibrary::GetValidCoverDirectionToTarget(FCover Cover, AActor* QueryOwner, AActor* Target, bool bMakeTraceTest, bool bDebug, float UpOffset, float ForwardOffset, float RightOffset) {
    return ECoverAimDirection::None;
}

FGenericTeamId UAIFunctionLibrary::GetTeamId(APawn* Pawn) {
    return FGenericTeamId{};
}

UIRRTeamComponent* UAIFunctionLibrary::GetTeamComponent(const AActor* Actor) {
    return NULL;
}

UIRRStatEffectComponent* UAIFunctionLibrary::GetStatEffectComponent(const AActor* Actor) {
    return NULL;
}

UIRRAICoverComponent* UAIFunctionLibrary::GetCoverComponent(const AActor* Actor) {
    return NULL;
}

AActor* UAIFunctionLibrary::GetAITargetActor(const APawn* Pawn) {
    return NULL;
}

UIRRAITarget* UAIFunctionLibrary::GetAITarget(const APawn* Pawn) {
    return NULL;
}

UIRRAISubSystem* UAIFunctionLibrary::GetAISubSystem(const UObject* WorldContextObject) {
    return NULL;
}

FIRRAISettings UAIFunctionLibrary::GetAISettings(const UObject* WorldContextObject) {
    return FIRRAISettings{};
}

UIRRAIAimComponent* UAIFunctionLibrary::GetAimComponent(const AActor* Actor) {
    return NULL;
}

AAIManager* UAIFunctionLibrary::GetAIManager(const UObject* WorldContextObject) {
    return NULL;
}

UIRRAIDataComponent* UAIFunctionLibrary::GetAIDataComponent(const AActor* Actor) {
    return NULL;
}


