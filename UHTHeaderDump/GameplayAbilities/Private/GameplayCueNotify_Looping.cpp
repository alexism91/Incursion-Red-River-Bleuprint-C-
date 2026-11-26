#include "GameplayCueNotify_Looping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AGameplayCueNotify_Looping::AGameplayCueNotify_Looping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bAutoDestroyOnRemove = true;
    this->bAllowMultipleWhileActiveEvents = false;
}






