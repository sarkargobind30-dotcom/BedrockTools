#include "core/Runtime.hpp"
#include <pl/Mod.hpp>

class ItemPickupPreviewMod {
public:
    static ItemPickupPreviewMod& instance() {
        static ItemPickupPreviewMod mod;
        return mod;
    }

    bool load(pl::mod::ModContext& context) { return bedrocktools::core::Runtime::get().load(context); }
    bool enable(pl::mod::ModContext& context) { return bedrocktools::core::Runtime::get().enable(context); }
    bool disable(pl::mod::ModContext& context) { return bedrocktools::core::Runtime::get().disable(context); }
    bool unload(pl::mod::ModContext& context) { return bedrocktools::core::Runtime::get().unload(context); }
};

PL_REGISTER_MOD(ItemPickupPreviewMod, ItemPickupPreviewMod::instance())
