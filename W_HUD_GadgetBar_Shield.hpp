#ifndef UE4SS_SDK_W_HUD_GadgetBar_Shield_HPP
#define UE4SS_SDK_W_HUD_GadgetBar_Shield_HPP

class UW_HUD_GadgetBar_Shield_C : public UW_HUD_GadgetBar_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UBodyShieldComponent_C* bodyshield;                                         // 0x0350 (size: 0x8)

    void UpdateShieldProgress();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ShieldComponentEnabledChanged_Event(bool Enabled);
    void ExecuteUbergraph_W_HUD_GadgetBar_Shield(int32 EntryPoint);
}; // Size: 0x358

#endif
