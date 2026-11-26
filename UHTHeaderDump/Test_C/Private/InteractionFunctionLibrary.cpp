#include "InteractionFunctionLibrary.h"

UInteractionFunctionLibrary::UInteractionFunctionLibrary() {
}

UInteractionManager* UInteractionFunctionLibrary::GetLocalInteractionManager(const UObject* WorldContextObject) {
    return NULL;
}

UInteractionTarget* UInteractionFunctionLibrary::GetInteractionTarget(AActor* Owner) {
    return NULL;
}

UInteractionManager* UInteractionFunctionLibrary::GetInteractionManager(AActor* Owner) {
    return NULL;
}


