#include "IRRAIBaseCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "AIOptimizationComponent.h"
#include "IRRAIMovementComponent.h"
#include "IRRHeadlampComponent.h"
#include "IRRLightMemoryComponent.h"
#include "IRRLightSenseComponent.h"
#include "IRRSightSenseReceiver.h"
#include "Net/UnrealNetwork.h"

AIRRAIBaseCharacter::AIRRAIBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIRRAIMovementComponent>(TEXT("CharMoveComp"))) {
    this->bAlwaysRelevant = true;
    this->SenseReceiver = CreateDefaultSubobject<UIRRSightSenseReceiver>(TEXT("SenseReceiver"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SpawnIndex = -1;
    this->MuzzleFlashScale = 1.00f;
    this->bSkipLegacyInit = false;
    this->MarkerWidget = NULL;
    this->DamageEffectsDuration = 15.00f;
    this->AIOptimizationComponent = CreateDefaultSubobject<UAIOptimizationComponent>(TEXT("OptimizationComponent"));
    this->LightSenseComponent = CreateDefaultSubobject<UIRRLightSenseComponent>(TEXT("LightSenseComponent"));
    this->LightMemoryComponent = CreateDefaultSubobject<UIRRLightMemoryComponent>(TEXT("LightMemoryComponent"));
    this->HeadlampComponent = CreateDefaultSubobject<UIRRHeadlampComponent>(TEXT("Headlamp Component"));
    this->RadioComponent = NULL;
    this->bCosmeticAimTargetActive = false;
    this->SenseReceiver->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

bool AIRRAIBaseCharacter::WillResolveLoadout() const {
    return false;
}

void AIRRAIBaseCharacter::TriggerRadioMessage(FGameplayTag BarkTag, float ChanceToSay, bool bForce, bool bIgnoreGate, float Delay, int32 Priority) {
}

FGenericTeamId AIRRAIBaseCharacter::ResolveTeamId() const {
    return FGenericTeamId{};
}

void AIRRAIBaseCharacter::OnRep_CosmeticAimTarget() {
}

void AIRRAIBaseCharacter::OnDamageEffectsReceived(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak) {
}

void AIRRAIBaseCharacter::OnBodyRevived(AActor* RevivedBy) {
}

void AIRRAIBaseCharacter::OnBodyDeath(FIRRDamageData DamageData) {
}

bool AIRRAIBaseCharacter::IsAIHidden() const {
    return false;
}

FGenericTeamId AIRRAIBaseCharacter::GetTeamIdOverride() const {
    return FGenericTeamId{};
}

int32 AIRRAIBaseCharacter::GetSpawnIndex() const {
    return 0;
}

ULXRLightSenseComponent* AIRRAIBaseCharacter::GetLightSenseComponent() const {
    return NULL;
}

ULXRMemoryComponent* AIRRAIBaseCharacter::GetLightMemoryComponent() const {
    return NULL;
}

UIRRHeadlampComponent* AIRRAIBaseCharacter::GetHeadlampComponent() const {
    return NULL;
}

UIRRAIBehaviorComponent* AIRRAIBaseCharacter::GetBehaviorComponent() const {
    return NULL;
}

UAIOptimizationComponent* AIRRAIBaseCharacter::GetAIOptimizationComponent() const {
    return NULL;
}

UIRRAIMovementComponent* AIRRAIBaseCharacter::GetAIMovementComponent() const {
    return NULL;
}

FIRRAICharacterInfo AIRRAIBaseCharacter::GetAICharacterInfo() const {
    return FIRRAICharacterInfo{};
}

void AIRRAIBaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIRRAIBaseCharacter, SpawnIndex);
    DOREPLIFETIME(AIRRAIBaseCharacter, MuzzleFlashScale);
    DOREPLIFETIME(AIRRAIBaseCharacter, AICharacterInfo);
    DOREPLIFETIME(AIRRAIBaseCharacter, CosmeticAimTarget);
    DOREPLIFETIME(AIRRAIBaseCharacter, bCosmeticAimTargetActive);
}


