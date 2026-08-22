#include "itempickuppreview.hpp"

void ItemPickupPreviewModule::onInit() {
    mInstalled = false;
}

void ItemPickupPreviewModule::onFrame() {
    // Rendering is intentionally deferred until the 26.44 renderer hook is
    // resolved. This module must not mutate dropped-item entities or pickup
    // state; it is a client-side visual-only feature.
    if (!mInstalled) return;
}
