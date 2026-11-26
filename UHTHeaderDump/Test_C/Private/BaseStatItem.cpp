#include "BaseStatItem.h"

FBaseStatItem::FBaseStatItem() {
    this->StatModifyType = EStatItemModifyType::None;
    this->Value = 0.00f;
    this->bModifiable = false;
    this->bPersistent = false;
    this->StatItemConfig = NULL;
}

