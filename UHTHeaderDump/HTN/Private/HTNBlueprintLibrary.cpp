#include "HTNBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UHTNBlueprintLibrary::UHTNBlueprintLibrary() {
}

UHTNComponent* UHTNBlueprintLibrary::SetUpHTNComponent(AAIController* AIController) {
    return NULL;
}

bool UHTNBlueprintLibrary::RunHTN(AAIController* AIController, UHTN* HTNAsset) {
    return false;
}

void UHTNBlueprintLibrary::GetClosestComponentsOfClass(TArray<UActorComponent*>& OutComponents, const UObject* WorldContextObject, TSubclassOf<UActorComponent> ComponentClass, const FVector& Location, int32 MaxNumComponents) {
}

void UHTNBlueprintLibrary::GetAllComponentsOfClass(TArray<UActorComponent*>& OutComponents, const UObject* WorldContextObject, TSubclassOf<UActorComponent> ComponentClass) {
}


