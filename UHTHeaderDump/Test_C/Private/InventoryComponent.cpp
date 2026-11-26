#include "InventoryComponent.h"
#include "InventoryEquipToContainerSettings.h"
#include "InventorySpatialContainerSettings.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->InventoryType = EInventoryType::Player;
    this->InventoryWidget = NULL;
    this->ItemSwapDelay = 0.20f;
    this->DefaultContainerSettings = NULL;
    this->VendorContainerSettings = CreateDefaultSubobject<UInventoryEquipToContainerSettings>(TEXT("Vendor Container Settings"));
    this->RewardContainerSettings = CreateDefaultSubobject<UInventorySpatialContainerSettings>(TEXT("RewardContainerSettings"));
    this->GunsmithContainerSettings = CreateDefaultSubobject<UInventorySpatialContainerSettings>(TEXT("Loadout Container Settings"));
    this->FWeightMultiplier = NULL;
    this->MaxWeight = 0.00f;
    this->ItemsPreset = NULL;
    this->bCanBeSaved = true;
    this->bShouldReplicate = true;
    this->bLoot = false;
    this->PickUpOwner = NULL;
    this->InventoryStorage = NULL;
    this->InventoryWidgetRef = NULL;
    this->UISettings = NULL;
    this->PendingSwapAOwner = NULL;
    this->PendingSwapBOwner = NULL;
}

bool UInventoryComponent::ValidateRequestedItem(FContainerItem ToValidateItem, bool bIgnorePending) {
    return false;
}

void UInventoryComponent::UpgradeSubStorageContainer_Implementation(FGuid MainContainerUID, int32 NewTier) {
}

void UInventoryComponent::UpdateWeight() {
}

void UInventoryComponent::UpdateRequiredReferences(const FContainerItem& ContainerItem, bool bAdded) {
}

void UInventoryComponent::UpdateQuickSlot(int32 Index, FContainerItem Item) {
}

bool UInventoryComponent::UpdatePickUpOwner(UInventoryComponent* OwningComp) {
    return false;
}

void UInventoryComponent::UpdateParentItems(FMainContainer& MainContainer) {
}

bool UInventoryComponent::UpdateItemStack(FContainerItem ContainerItem, int32 NewStackCount) {
    return false;
}

void UInventoryComponent::UpdateCurrency() {
}

void UInventoryComponent::TryUpdateItem(UInventoryComponent* ItemOwnerComp, FContainerItem UpdatedItem, const FString& Payload, bool bForceUpdateParentItems) {
}

bool UInventoryComponent::TryUnEquipItem(UInventoryComponent* ItemOwnerComp, FContainerItem ContainerItem, bool bSupportStash) {
    return false;
}

void UInventoryComponent::TrySwapItem(UInventoryComponent* ItemAOwner, UInventoryComponent* ItemBOwner, FContainerItem ItemA, FContainerItem ItemB, bool bARotated) {
}

void UInventoryComponent::TryStackItem(UInventoryComponent* RootComp, UInventoryComponent* TargetComp, FContainerItem RootItem, FContainerItem ToAddItem, int32 StackAmount) {
}

void UInventoryComponent::TrySplitItemByAmount(UInventoryComponent* TargetComp, FContainerItem ToSplitItem, int32 SplitAmount) {
}

void UInventoryComponent::TrySplitItem(UInventoryComponent* TargetComp, FContainerItem ToSplitItem) {
}

bool UInventoryComponent::TrySortContainers(TArray<FGuid> UIDs) {
    return false;
}

void UInventoryComponent::TryReserveItem(FContainerItem ToReserveItem, FGuid RequestUID) {
}

bool UInventoryComponent::TryReplaceItem(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetOwnerComp, FContainerItem ContainerItem, UIRRItemDefinition* ToReplaceItemDef, EReplaceErrorType& OutFailureReason, FGuid ToMainContainerUID, int32 ToContainerIndex, int32 ToSlotIndex, bool bRotated) {
    return false;
}

bool UInventoryComponent::TryRemoveVitalPartsListItem(TArray<FGameplayTagContainer>& VitalPartsList, FGameplayTag AttachmentTag) {
    return false;
}

bool UInventoryComponent::TryQuickLoot(UItemWidget* ItemRef) {
    return false;
}

void UInventoryComponent::TryMoveItem_Implementation(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetComp, FContainerItem Item, FGuid NewMainContainerUID, int32 NewContainerIndex, int32 NewSlotIndex, bool bIsRotated, UIRRItemDefinition* ReplaceWith) {
}

void UInventoryComponent::TryInternalReload(FContainerItem Bullets, FGuid NewMainContainerUID) {
}

bool UInventoryComponent::TryEquipItem(UInventoryComponent* ItemOwnerComp, FContainerItem ContainerItem) {
    return false;
}

void UInventoryComponent::TryDropItem(UInventoryComponent* TargetComp, FContainerItem ToDropItem, int32 Count, bool bDropInPlace, bool bForceDrop) {
}

void UInventoryComponent::TryDiscardItem(UInventoryComponent* TargetComp, FContainerItem ToDiscardItem) {
}

bool UInventoryComponent::TryDisassembleItems(UInventoryComponent* TargetInventory, TArray<FContainerItem> DisassembleItems) {
    return false;
}

void UInventoryComponent::TryConsumeItem(UInventoryComponent* TargetComp, FContainerItem ToConsumeItem, int32 Count) {
}

bool UInventoryComponent::TryAddItem(UInventoryComponent* ItemOwnerComp, FContainerItem ContainerItem, bool& bStacked) {
    return false;
}

void UInventoryComponent::ToggleShouldReplicate_Implementation(bool bNewShouldReplicate, UInventoryComponent* TargetComp) {
}

void UInventoryComponent::ToggleInfiniteAmmunition_Implementation(bool bNewInfiniteAmmunition) {
}

UInventoryComponent* UInventoryComponent::SpawnItem(TSubclassOf<AActor> Class, AActor* Owner) {
    return NULL;
}

void UInventoryComponent::ShrinkMainContainer(int32 MainContainerIndex) {
}

void UInventoryComponent::SetInfiniteAmmunition_Implementation(bool bNewInfiniteAmmunition) {
}

bool UInventoryComponent::ResolveDestinationForm(UIRRItemDefinition* CurrentForm, const FMainContainer& Dest, int32 DestContainerIndex, UIRRItemDefinition* RequestedForm, UIRRItemDefinition*& OutForm) {
    return false;
}

void UInventoryComponent::ResetInventoryWidget() {
}

void UInventoryComponent::ResetInventory_Implementation() {
}

void UInventoryComponent::ResetContainerSlots(FMainContainer& MainContainer) {
}

void UInventoryComponent::RequestUpdateItem_Implementation(UInventoryComponent* ItemOwnerComp, FContainerItem UpdatedItem, const FString& Payload, bool bForceUpdateParentItems) {
}

void UInventoryComponent::RequestSwapItem_Implementation(UInventoryComponent* ItemAOwner, UInventoryComponent* ItemBOwner, FContainerItem ItemA, FContainerItem ItemB, bool bARotated) {
}

void UInventoryComponent::RequestStackItem_Implementation(UInventoryComponent* RootComp, UInventoryComponent* TargetComp, FContainerItem RootItem, FContainerItem ToAddItem, int32 StackAmount) {
}

void UInventoryComponent::RequestSplitItemByAmount_Implementation(UInventoryComponent* TargetComp, FContainerItem ToSplitItem, int32 SplitAmount) {
}

void UInventoryComponent::RequestSplitItem_Implementation(UInventoryComponent* TargetComp, FContainerItem ToSplitItem) {
}

void UInventoryComponent::RequestSaveInventory(const FString& SaveGameSlot, const TArray<int32> ContainerIndexes, bool bSaveAllContainers) {
}

void UInventoryComponent::RequestResetInventory() {
}

void UInventoryComponent::RequestReserverItem_Response_Implementation(FGuid RequestUID, bool bSuccess) {
}

void UInventoryComponent::RequestReserverItem_Implementation(FContainerItem ToConsumeItem, FGuid RequestUID) {
}

void UInventoryComponent::RequestReplaceItem_Implementation(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetOwnerComp, FContainerItem ContainerItem, UIRRItemDefinition* ToReplaceItemDef, FGuid ToMainContainerUID, int32 ToContainerIndex, int32 ToSlotIndex, bool bRotated) {
}

void UInventoryComponent::RequestMoveItem_Implementation(UInventoryComponent* ItemOwnerComp, UInventoryComponent* TargetComp, FContainerItem Item, FGuid NewMainContainerUID, int32 NewContainerIndex, int32 NewSlotIndex, bool bIsRotated, bool bValidate, UIRRItemDefinition* ReplaceWith) {
}

void UInventoryComponent::RequestLoadLendLoadout() {
}

void UInventoryComponent::RequestLoadInventory(const FString& SaveGameSlot, const TArray<int32> ContainerIndexes, bool bLoadAllContainers) {
}

void UInventoryComponent::RequestInternalReload_Implementation(FContainerItem Bullets, FGuid NewMainContainerUID) {
}

void UInventoryComponent::RequestDropItem_Implementation(UInventoryComponent* TargetComp, FContainerItem ToDropItem, int32 Count, bool bDropInPlace, bool bForceDrop) {
}

void UInventoryComponent::RequestDiscardItem_Implementation(UInventoryComponent* TargetComp, FContainerItem ToDiscardItem) {
}

void UInventoryComponent::RequestConsumeItem_Implementation(UInventoryComponent* TargetComp, FContainerItem ToConsumeItem, int32 Count) {
}

bool UInventoryComponent::RemoveItemByTag(FGameplayTag Item, int32 Amount) {
    return false;
}

bool UInventoryComponent::RemoveItem(FContainerItem Item, bool bRemoveMainContainers, bool bDestroyActor) {
    return false;
}

void UInventoryComponent::RefillMag(FContainerItem Mag) {
}

void UInventoryComponent::RebuildContainerElements(FMainContainer& MainContainer, TArray<UInventoryContainerSettings*> ItemContainers) {
}

void UInventoryComponent::PrintMainContainers(TArray<FMainContainer> InMainContainers) {
}

void UInventoryComponent::OnWeaponFired_Implementation(FContainerItem Weapon, bool bAutoChamber) {
}

void UInventoryComponent::OnWeaponChamberedManually_Implementation(FContainerItem Weapon, FContainerItem Bullets) {
}

void UInventoryComponent::OnWeaponChambered_Implementation(FContainerItem Weapon) {
}

void UInventoryComponent::OnStorageContainerUpdated_MC_Implementation(FMainContainer MainContainer, int32 ContainerIndex) {
}

void UInventoryComponent::OnRep_PickUpState() {
}

void UInventoryComponent::OnRep_PickUpOwner() {
}

void UInventoryComponent::OnRep_PickUpContainerItem() {
}

void UInventoryComponent::OnRep_MainContainers() {
}

void UInventoryComponent::OnPickupSwap_Implementation(AActor* PickUpActor, FGameplayTag EquipmentSlot) {
}

void UInventoryComponent::OnPickupInteractionExecuted_Implementation(AActor* PickUpActor, EItemInteractionType InteractionType) {
}

void UInventoryComponent::OccupyContainerSlots(FContainerElement& ContainerElement, TArray<int32> SlotIndexes, FGuid ItemUID) {
}

FContainerItem UInventoryComponent::MakeReplacedItemPreview(const FContainerItem& Item, UIRRItemDefinition* NewForm, const UObject* WorldContextObject) {
    return FContainerItem{};
}

void UInventoryComponent::LoadMainContainers(TArray<FMainContainer> NewMainContainers) {
}

void UInventoryComponent::LoadLendLoadout_Implementation(const TArray<FIRRLoyaltyByFaction>& LoyaltyData) {
}

void UInventoryComponent::LoadInventory_Implementation(const TArray<FGuid>& SavedMainContainerUIDs, const TArray<FMainContainer>& SavedMainContainers, const TArray<int32>& ContainerIndexes, bool bLoadAllContainers) {
}


void UInventoryComponent::ItemsUpdated() {
}

bool UInventoryComponent::IsValidPickup() {
    return false;
}

bool UInventoryComponent::IsReplacementDefinitionOf(const UIRRItemDefinition* Form, const UIRRItemDefinition* ReplaceWith) {
    return false;
}

bool UInventoryComponent::IsEquipTo(const FMainContainer& MainContainer, int32 ContainerIndex, bool bCheckSocket) {
    return false;
}

bool UInventoryComponent::IsDragAllowed(FContainerItem ContainerItem, FString& NewErrorMessage) {
    return false;
}

bool UInventoryComponent::IsContainerSupportingItem(const FMainContainer& MainContainer, int32 ContainerIndex, const FContainerItem& ToAddItem) {
    return false;
}

void UInventoryComponent::InitializeMainContainers() {
}

void UInventoryComponent::InitializeInventory_Implementation() {
}

bool UInventoryComponent::HasTagContainerTagContainerList(TArray<FGameplayTagContainer> List, FGameplayTagContainer TagContainer) {
    return false;
}

bool UInventoryComponent::HasTagContainerListTag(const TArray<FGameplayTagContainer>& List, FGameplayTag AttachmentTag) {
    return false;
}

bool UInventoryComponent::HasNestedVitalParts(FContainerItem Item) {
    return false;
}

bool UInventoryComponent::HasAllVitalPartsInstalled(FContainerItem& ContainerItem) {
    return false;
}

void UInventoryComponent::HandleWeaponFired(FContainerItem Weapon, bool bAutoChamber) {
}

void UInventoryComponent::HandleWeaponChamberedManually(FContainerItem Weapon, FContainerItem Bullets) {
}

void UInventoryComponent::HandleWeaponChambered(FContainerItem Weapon) {
}

void UInventoryComponent::HandleItemUpdated_Implementation(FContainerItem Item, const FString& Payload) {
}

void UInventoryComponent::HandleItemPickUpState_Server_Implementation(FContainerItem Item, EPickupState NewPickupState) {
}

void UInventoryComponent::HandleItemPickUpState(FContainerItem Item, EPickupState NewPickupState, bool bReplicate) {
}

void UInventoryComponent::HandleInventoryUpdated() {
}

float UInventoryComponent::GetWeightMultiplier() {
    return 0.0f;
}

float UInventoryComponent::GetWeight() {
    return 0.0f;
}

FGuid UInventoryComponent::GetUIDByActorRef(AActor* ActorRef) {
    return FGuid{};
}

int32 UInventoryComponent::GetTotalItemCount(FGameplayTag Item) {
    return 0;
}

int32 UInventoryComponent::GetSupportedContainerIndex(FMainContainer MainContainer, FContainerItem ToAddItem) {
    return 0;
}

FMainContainer UInventoryComponent::GetRootMainContainer(FContainerItem ContainerItem) {
    return FMainContainer{};
}

FString UInventoryComponent::GetRootContainerName(FContainerItem ContainerItem) {
    return TEXT("");
}

FContainerItem UInventoryComponent::GetRootContainerItem(FContainerItem ContainerItem, bool bOnlyEquipped) {
    return FContainerItem{};
}

FMainContainer UInventoryComponent::GetRootContainer(FGuid MainContainerUID) {
    return FMainContainer{};
}

TArray<FGameplayTagContainer> UInventoryComponent::GetRequiredVitalPartsList(FContainerItem Item) {
    return TArray<FGameplayTagContainer>();
}

void UInventoryComponent::GetReloadData(FContainerItem Weapon, FReloadData& ReloadData, bool& bForceEmergencyReload) {
}

int32 UInventoryComponent::GetMotherContainerIndexByUID(FGuid ItemUID) {
    return 0;
}

FMainContainer UInventoryComponent::GetMotherContainerByUID(FGuid ItemUID) {
    return FMainContainer{};
}

int32 UInventoryComponent::GetMainContainerIndexByUID(FGuid MainContainerUID) {
    return 0;
}

FMainContainer UInventoryComponent::GetMainContainerByUID(FGuid MainContainerUID) {
    return FMainContainer{};
}

bool UInventoryComponent::GetMagBulletStack(const FContainerItem& Weapon, TArray<FContainerItem>& OutBulletStacks) {
    return false;
}

int32 UInventoryComponent::GetItemContainerIndexByTag(FContainerItem Item, FGameplayTag Tag) {
    return 0;
}

FContainerItem UInventoryComponent::GetItemByEquipmentSlot(FGameplayTag EquipmentSlot) {
    return FContainerItem{};
}

UUserWidget* UInventoryComponent::GetInventoryWidget(bool bBuild) {
    return NULL;
}

bool UInventoryComponent::GetInfiniteAmmunition() {
    return false;
}

int32 UInventoryComponent::GetFreeSlotIndex(const FContainerElement& ContainerElement, const FContainerItem& ContainerItem, const TArray<int32>& ToIgnoreIndexes, bool bTryRotated, bool& bFinalRotation) {
    return 0;
}

int32 UInventoryComponent::GetEvenSplitAmount(int32 StackCount) {
    return 0;
}

TArray<FContainerItem> UInventoryComponent::GetDefaultContainerItems() {
    return TArray<FContainerItem>();
}

TArray<int32> UInventoryComponent::GetDefaultContainerIndexes() {
    return TArray<int32>();
}

int32 UInventoryComponent::GetDefaultContainerIndex(FContainerItem ContainerItem) {
    return 0;
}

TArray<int32> UInventoryComponent::GetContainerSlotIndexes(const FContainerElement& ContainerElement, int32 SlotIndex, FVector2D ItemSize) {
    return TArray<int32>();
}

TArray<FContainerItem> UInventoryComponent::GetContainerItemsByTags(FGameplayTagContainer TagContainer, TArray<int32> MainContainerIndexes, bool bAllContainers, bool bDeepSearch) {
    return TArray<FContainerItem>();
}

TArray<FContainerItem> UInventoryComponent::GetContainerItems(FGuid ContainerUID) {
    return TArray<FContainerItem>();
}

int32 UInventoryComponent::GetContainerItemCount(const FMainContainer& MainContainer, int32 ContainerIndex) {
    return 0;
}

FContainerItem UInventoryComponent::GetContainerItemByUID(FGuid ItemUID) {
    return FContainerItem{};
}

FContainerItem UInventoryComponent::GetContainerItemByQuickSlotIndex(int32 Index) {
    return FContainerItem{};
}

TArray<int32> UInventoryComponent::GetContainerHostingIndexes(const FContainerElement& ContainerElement, FGuid ItemUID) {
    return TArray<int32>();
}

bool UInventoryComponent::GetContainerCapacity(FMainContainer MainContainer, int32 ContainerIndex, int32& Capacity, int32& MaxCapacity) {
    return false;
}

TArray<FDefaultAttachment> UInventoryComponent::GetChildDefaultAttachments(const TArray<FDefaultAttachment>& DefaultAttachments, int32 RootIndex) {
    return TArray<FDefaultAttachment>();
}

TArray<FContainerItem> UInventoryComponent::GetAttachmentsByTags(FContainerItem ParentItem, FGameplayTagContainer TagContainer, bool bDeepSearch) {
    return TArray<FContainerItem>();
}

TArray<FContainerItem> UInventoryComponent::GetAllQuestItems() {
    return TArray<FContainerItem>();
}

TArray<FMainContainer> UInventoryComponent::GetAllMainContainersByUID(FGuid UID, bool bIncludeRoot) {
    return TArray<FMainContainer>();
}

TArray<FString> UInventoryComponent::GetAllCompatibleItems(FContainerItem ContainerItem, bool bUseWidgets) {
    return TArray<FString>();
}

TArray<AActor*> UInventoryComponent::GetAllChildActors(FGuid UID) {
    return TArray<AActor*>();
}

TArray<FContainerItem> UInventoryComponent::GetAllAttachments(FGuid UID, bool bRecursive, bool bOnlyEquipped) {
    return TArray<FContainerItem>();
}

AActor* UInventoryComponent::GetActorByUID(FGuid UID) {
    return NULL;
}

void UInventoryComponent::FreeContainerSlots(FContainerElement& ContainerElement, TArray<int32> SlotIndexes) {
}

void UInventoryComponent::FinishSwapWeapons_Implementation(const TArray<FMainContainer>& UpdatedMainContainers, FGameplayTag EquipmentSlot) {
}

UIRRItemDefinition* UInventoryComponent::FindReplacementDefinition(const UIRRItemDefinition* Form, bool bEquipOnly) {
    return NULL;
}

bool UInventoryComponent::FindNextBulletInMagazine(const FContainerItem& Weapon, FContainerItem& OutBulletStack) {
    return false;
}

void UInventoryComponent::FindMainContainerByUID(FGuid ContainerUID, FMainContainer& MainContainerRef) {
}

bool UInventoryComponent::FindItemsByTagContainer(FGameplayTagContainer Items, TArray<int32> ContainerIndexes, TArray<FContainerItem>& FoundItems) {
    return false;
}

FContainerItem UInventoryComponent::FindItemByTag(FGameplayTag Item, TArray<int32> ContainerIndexes, bool& bFound) {
    return FContainerItem{};
}

bool UInventoryComponent::FindEquipmentSlotByUID(FGuid MainContainerUID, FGameplayTag& EquipmentSlot) {
    return false;
}

bool UInventoryComponent::FindCurrentStatItem(TArray<FCurrentStatItem> StatItems, FGameplayTag StatTag, FCurrentStatItem& OutStatItem) {
    return false;
}

bool UInventoryComponent::FindChamberedBullet(const FContainerItem& Weapon, FContainerItem& OutBulletStack) {
    return false;
}

bool UInventoryComponent::FindBaseStatItem(const TArray<FBaseStatItem>& StatItems, FGameplayTag StatTag, FBaseStatItem& OutStatItem) {
    return false;
}

TArray<FContainerItem> UInventoryComponent::FindAllItemsByTag(FGameplayTag Item, TArray<int32> ContainerIndexes) {
    return TArray<FContainerItem>();
}

void UInventoryComponent::FilterSupportedItems(const FContainerItem& Item, FGameplayTagContainer& SupportedItems) {
}

void UInventoryComponent::ExecutePendingItemSwap() {
}

TArray<FCurrentStatItem> UInventoryComponent::ComputeProvisionalItemStats(FContainerItem ContainerItem, TArray<FContainerItem> Attachments) {
    return TArray<FCurrentStatItem>();
}

void UInventoryComponent::ComputeItemStats(FContainerItem& ContainerItem, const TArray<FContainerItem>& Attachments) {
}

TArray<FCurrentStatItem> UInventoryComponent::ComputeDefaultStats(const TArray<FBaseStatItem>& BaseStats) {
    return TArray<FCurrentStatItem>();
}

void UInventoryComponent::ClearMainContainersByIndexes_Implementation(const TArray<int32>& ContainerIndexes) {
}

void UInventoryComponent::ClearContainers() {
}

bool UInventoryComponent::CheckItemRelations(const FMainContainer& MainContainer, const FContainerItem& ContainerItem) {
    return false;
}

bool UInventoryComponent::CanSwapWeapons(FContainerItem NewWeapon) {
    return false;
}

bool UInventoryComponent::CanSwapItems(UInventoryComponent* ItemAOwner, FContainerItem ItemA, UInventoryComponent* ItemBOwner, FContainerItem ItemB, bool bARotated, int32& OutBSlotIndex, bool& bOutBRotated, bool bIgnorePending) {
    return false;
}

bool UInventoryComponent::CanStackItem(FContainerItem& RootItem, FContainerItem ToAddItem, int32& StackAmount) {
    return false;
}

bool UInventoryComponent::CanSplitItemByAmount(FContainerItem ToSplitItem, int32 SplitAmount) {
    return false;
}

bool UInventoryComponent::CanSplitItem(FContainerItem ToSplitItem) {
    return false;
}

bool UInventoryComponent::CanReleaseItem(const FContainerItem& Item) const {
    return false;
}

bool UInventoryComponent::CanAddVendorItems(TArray<FDefaultItem> Items, bool bDescendIntoStorage) {
    return false;
}

bool UInventoryComponent::CanAddToInventory(FContainerItem NewItem) {
    return false;
}

bool UInventoryComponent::CanAddToEquipContainer(FMainContainer& MainContainer, FContainerItem& ContainerItem, int32& OutContainerIndex) {
    return false;
}

bool UInventoryComponent::CanAddMissionRewards(FGuid RewardContainerUID, UInventoryComponent* MissionRewardOwner) {
    return false;
}

bool UInventoryComponent::CanAddItemToSlots(const FContainerElement& ContainerElement, const TArray<int32>& SlotIndexes, const TArray<int32>& ToIgnoreIndexes) {
    return false;
}

bool UInventoryComponent::CanAddItemToMainContainer(FMainContainer& MainContainer, FContainerItem& ContainerItem, bool bAddToDescendants, bool bTryRotated, bool bIgnoreVitalParts, int32& OutContainerIndex, int32& OutSlotIndex) {
    return false;
}

bool UInventoryComponent::CanAddBulkItems(TArray<FContainerItem> Items) {
    return false;
}

bool UInventoryComponent::CanAcceptItem(const FContainerItem& Item) const {
    return false;
}

int32 UInventoryComponent::BuildVendorMainContainer() {
    return 0;
}

void UInventoryComponent::BuildStashContainers() {
}

int32 UInventoryComponent::BuildRewardItemsMainContainer(FGuid ContainerUID) {
    return 0;
}

void UInventoryComponent::BuildMainContainers() {
}

void UInventoryComponent::BuildInventoryWidget_Implementation() {
}

TArray<FContainerElement> UInventoryComponent::BuildContainerElements(TArray<UInventoryContainerSettings*> ItemContainers) {
    return TArray<FContainerElement>();
}

void UInventoryComponent::AttachItem(const FContainerItem& Item, AActor* Owner, FName AttachmentSocket) {
}

void UInventoryComponent::AddVendorItems(TArray<FDefaultItem> Items, bool bAddToDescendants, bool bDescendIntoStorage) {
}

void UInventoryComponent::AddMissionRewards(FGuid RewardContainerUID, UInventoryComponent* MissionRewardOwner) {
}

bool UInventoryComponent::AddItemToSlot(const FMainContainer& MainContainer, FContainerItem Item, int32 ContainerIndex, int32 SlotIndex, bool bRotated) {
    return false;
}

void UInventoryComponent::AddDefaultItemContainer(const FDefaultItemsContainer& DefaultContainer) {
}

FGuid UInventoryComponent::AddDefaultItem(const FDefaultItem& DefaultItem, int32 MainContainerIndex, int32 InContainerIndex, int32 InSlotIndex, bool bRotated, FGuid ItemUID) {
    return FGuid{};
}

void UInventoryComponent::AddDefaultAttachments(const FContainerItem& ParentContainerItem, const FGameplayTagContainer& ParentChildSupportedItems, const TArray<FDefaultAttachment>& DefaultAttachments, int32 DefaultAttachmentIndex) {
}

void UInventoryComponent::AddBulkItems(TArray<FContainerItem> Items, UInventoryComponent* OwnerComponent) {
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, RepMainContainers);
    DOREPLIFETIME(UInventoryComponent, PickUpContainerItem);
    DOREPLIFETIME(UInventoryComponent, PickupState);
    DOREPLIFETIME(UInventoryComponent, PickUpOwner);
    DOREPLIFETIME(UInventoryComponent, InventoryStorage);
    DOREPLIFETIME(UInventoryComponent, MainContainerUIDs);
}


