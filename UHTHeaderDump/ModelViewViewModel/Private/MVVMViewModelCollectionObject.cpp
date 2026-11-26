#include "MVVMViewModelCollectionObject.h"
#include "Templates/SubclassOf.h"

UMVVMViewModelCollectionObject::UMVVMViewModelCollectionObject() {
}

bool UMVVMViewModelCollectionObject::RemoveViewModel(FMVVMViewModelContext Context) {
    return false;
}

int32 UMVVMViewModelCollectionObject::RemoveAllViewModelInstance(UMVVMViewModelBase* ViewModel) {
    return 0;
}

UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindViewModelInstance(FMVVMViewModelContext Context) const {
    return NULL;
}

UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindFirstViewModelInstanceOfType(const TSubclassOf<UMVVMViewModelBase>& ViewModelClass) const {
    return NULL;
}

bool UMVVMViewModelCollectionObject::AddViewModelInstance(FMVVMViewModelContext Context, UMVVMViewModelBase* ViewModel) {
    return false;
}


