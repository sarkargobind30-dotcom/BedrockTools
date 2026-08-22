#pragma once

#include "../Module.hpp"

class ItemPickupPreviewModule final : public Module {
public:
    ItemPickupPreviewModule()
        : Module("itempickuppreview", "Item Pickup Preview", "Shows nearby dropped-item previews.", 'P') {}

    void onInit() override;
    void onFrame() override;

private:
    bool mInstalled = false;
};
